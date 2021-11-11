#include "bsp_memory.h"
#include "bsp_oled.h"
#include <stdio.h>
u8 RX_Buffer[32];
static __IO uint32_t  SPITimeout = SPIT_LONG_TIMEOUT;  
static void SPI_FLASH_GPIO_Config()
{
	GPIO_InitTypeDef GPIO_InitStructure;
	FLASH_SPI_CS_APBxClock_FUN(FLASH_SPI_CS_CLK,ENABLE);
	FLASH_SPI_SCK_APBxClock_FUN(FLASH_SPI_SCK_CLK,ENABLE);
	FLASH_SPI_MISO_APBxClock_FUN(FLASH_SPI_MISO_CLK,ENABLE);
	FLASH_SPI_MOSI_APBxClock_FUN(FLASH_SPI_MOSI_CLK,ENABLE);
	FLASH_SPI_APBxClock_FUN(FLASH_SPI_CLK,ENABLE);
	//CS
	GPIO_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=FLASH_SPI_CS_PIN;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(FLASH_SPI_CS_PORT,&GPIO_InitStructure);
	//SCK
	GPIO_InitStructure.GPIO_Mode= GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin=FLASH_SPI_SCK_PIN;
	GPIO_Init (FLASH_SPI_SCK_PORT,&GPIO_InitStructure);
	//MISO
	GPIO_InitStructure.GPIO_Pin=FLASH_SPI_MISO_PIN;
	GPIO_Init(FLASH_SPI_MISO_PORT ,&GPIO_InitStructure);
	//MOSI
	GPIO_InitStructure.GPIO_Pin=FLASH_SPI_MOSI_PIN;
	GPIO_Init(FLASH_SPI_MOSI_PORT,&GPIO_InitStructure);
	
}
void SPI_FLASH_Init(void)
{
	SPI_InitTypeDef SPI_InitStructure;
	SPI_FLASH_GPIO_Config();
	SPI_InitStructure.SPI_Direction=SPI_Direction_2Lines_FullDuplex;
	SPI_InitStructure.SPI_Mode=SPI_Mode_Master;
	SPI_InitStructure.SPI_DataSize=SPI_DataSize_8b;
	SPI_InitStructure.SPI_CPOL=SPI_CPOL_High;
	SPI_InitStructure.SPI_CPHA=SPI_CPHA_2Edge;
	SPI_InitStructure.SPI_NSS=SPI_NSS_Soft;
	SPI_InitStructure.SPI_BaudRatePrescaler=SPI_BaudRatePrescaler_4;
	SPI_InitStructure.SPI_FirstBit=SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_CRCPolynomial=7;
	SPI_Init(FLASH_SPIx,&SPI_InitStructure);
	SPI_Cmd(FLASH_SPIx,ENABLE);
}
uint8_t SPI_TIMEOUT_UserCallBack(uint8_t num)
{
	printf("ERROR ON %d",num);
	return 0;
}
u8 SPI_Send_Byte(u8 chr)
{
	SPITimeout=SPIT_FLAG_TIMEOUT; 
	while(SPI_I2S_GetFlagStatus(FLASH_SPIx,SPI_I2S_FLAG_TXE)==RESET)
	{
		if((SPITimeout--)==0)  SPI_TIMEOUT_UserCallBack(0);
	}
	SPI_I2S_SendData(FLASH_SPIx,chr);	
	SPITimeout=SPIT_FLAG_TIMEOUT;
	while(SPI_I2S_GetFlagStatus(FLASH_SPIx,SPI_I2S_FLAG_RXNE)==RESET)
	{
		if((SPITimeout--)==0)  SPI_TIMEOUT_UserCallBack(1);
	}
	return SPI_I2S_ReceiveData(FLASH_SPIx);					
}
u8 SPI_ReadByte(void)
{
	return SPI_Send_Byte(Dummy_Byte);
}
void SPI_Write_Enable(void)
{
	CS_Low();
	SPI_Send_Byte(W25X_WriteEnable);
	CS_High();
}
void SPI_WriteWait_FlagEnd(void)
{
	u8 Flash_Status=0;
	CS_Low();
	SPI_Send_Byte(W25X_ReadStatusReg);
	do
 {
 /* 读取 FLASH 芯片的状态寄存器 */
 Flash_Status = SPI_Send_Byte(Dummy_Byte);
 }
 while ((Flash_Status & WIP_Flag) == SET); /* 正在写入标志 */
 CS_High();
}
void SPI_FLASH_Sector_Erase(u32 ADDR)
{
	SPI_Write_Enable();
	SPI_WriteWait_FlagEnd();
	CS_Low();
	SPI_Send_Byte(W25X_SectorErase);
	SPI_Send_Byte((ADDR&0xFF0000)>>16);
	SPI_Send_Byte((ADDR&0x00FF00)>>8);
	SPI_Send_Byte(ADDR&0xFF);
	CS_High();
	SPI_WriteWait_FlagEnd();
}
void SPI_Page_Write(u32 ADDR,u8 *pBuffer,u16 NumByteToWrite)
{
	SPI_Write_Enable();
	SPI_WriteWait_FlagEnd();
	CS_Low();
	SPI_Send_Byte(W25X_PageProgram);
	SPI_Send_Byte((ADDR&0xFF0000)>>16);
	SPI_Send_Byte((ADDR&0x00FF00)>>8);
	SPI_Send_Byte(ADDR&0xFF);
	if(NumByteToWrite>SPI_FLASH_PageSize)
	{
		NumByteToWrite=SPI_FLASH_PageSize;
		printf("ERROR THE NUM IS TOO LARGE");
	}
	while(NumByteToWrite--)
	{
		SPI_Send_Byte(*pBuffer);
		pBuffer++;
	}
	CS_High();
	SPI_WriteWait_FlagEnd();
}
void SPI_Page_Read(u32 ADDR,u8 *pBuffer,u16 NumByteToWrite)
{
	SPI_Write_Enable();
	SPI_WriteWait_FlagEnd();
	CS_Low();
	SPI_Send_Byte(W25X_ReadData);
	SPI_Send_Byte((ADDR&0xFF0000)>>16);
	SPI_Send_Byte((ADDR&0x00FF00)>>8);
	SPI_Send_Byte(ADDR&0xFF);
	while(NumByteToWrite--)
	{
	*pBuffer=SPI_Send_Byte(Dummy_Byte);
		pBuffer++;
	}
	CS_High(); 
}
static u32 SPI_ChineseWrite(u8 d,u8 b)
{
u8 a[2]={d,b};
u32 addr;
u32 pianyi;
//strcpy(a,chinese);
addr=((a[0]<<8)+a[1]);
pianyi=(a[0]-0xb0);
addr=0xc80*pianyi+(a[1]-0xa0)*32;
return addr;
}
/*
str为你想要展示的汉字.
x,y为设置的坐标
length为汉字的长度
*/
void show_Chinese(u8 *str,u8 x,u8 y,u8 length)
{
	u8 chr[100];
	strcpy(chr,str);
	for(int i=0;i<length*2;i=i+2)
	{
	SPI_Page_Read(0x00000+SPI_ChineseWrite(chr[i],chr[i+1]),RX_Buffer,32);
	OLED_ShowCHinese(x+(16*i)/2,y,RX_Buffer);
	}
}
