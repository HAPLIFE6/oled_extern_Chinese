#ifndef __BSP_MEMORY_H
#define __BSP_MEMORY_H

#include "stm32f10x.h"
///////////////////////////W25Q64的命令配置//////////////////////////////
#define W25X_WriteEnable		      0x06 
#define W25X_WriteDisable		      0x04 
#define W25X_ReadStatusReg		    0x05 
#define W25X_WriteStatusReg		    0x01 
#define W25X_ReadData			        0x03 
#define W25X_FastReadData		      0x0B 
#define W25X_FastReadDual		      0x3B 
#define W25X_PageProgram		      0x02 
#define W25X_BlockErase			      0xD8 
#define W25X_SectorErase		      0x20 
#define W25X_ChipErase			      0xC7 
#define W25X_PowerDown			      0xB9 
#define W25X_ReleasePowerDown	    0xAB 
#define W25X_DeviceID			        0xAB 
#define W25X_ManufactDeviceID   	0x90 
#define W25X_JedecDeviceID		    0x9F

///////////////////////FLASH的GPIO-配置///////////////////////////////
#define      FLASH_SPIx                        SPI2
#define      FLASH_SPI_APBxClock_FUN          RCC_APB1PeriphClockCmd
#define      FLASH_SPI_CLK                     RCC_APB1Periph_SPI2

//CS(NSS)引脚 片选选普通GPIO即可
#define      FLASH_SPI_CS_APBxClock_FUN       RCC_APB2PeriphClockCmd
#define      FLASH_SPI_CS_CLK                  RCC_APB2Periph_GPIOA    
#define      FLASH_SPI_CS_PORT                 GPIOA
#define      FLASH_SPI_CS_PIN                  GPIO_Pin_11
//SCK引脚
#define      FLASH_SPI_SCK_APBxClock_FUN      RCC_APB2PeriphClockCmd
#define      FLASH_SPI_SCK_CLK                 RCC_APB2Periph_GPIOB   
#define      FLASH_SPI_SCK_PORT                GPIOB   
#define      FLASH_SPI_SCK_PIN                 GPIO_Pin_13
//MISO引脚
#define      FLASH_SPI_MISO_APBxClock_FUN     RCC_APB2PeriphClockCmd
#define      FLASH_SPI_MISO_CLK                RCC_APB2Periph_GPIOB   
#define      FLASH_SPI_MISO_PORT               GPIOB 
#define      FLASH_SPI_MISO_PIN                GPIO_Pin_14
//MOSI引脚
#define      FLASH_SPI_MOSI_APBxClock_FUN     RCC_APB2PeriphClockCmd
#define      FLASH_SPI_MOSI_CLK                RCC_APB2Periph_GPIOB    
#define      FLASH_SPI_MOSI_PORT               GPIOB 
#define      FLASH_SPI_MOSI_PIN                GPIO_Pin_15
////////////**********************************/////////////////////////////
#define SPIT_FLAG_TIMEOUT         ((uint32_t)0x1000)
#define SPIT_LONG_TIMEOUT         ((uint32_t)(10 * SPIT_FLAG_TIMEOUT))
#define WIP_Flag                  0x01
#define Dummy_Byte                0xFF

#define CS_High()                 GPIO_SetBits(FLASH_SPI_CS_PORT,FLASH_SPI_CS_PIN);
#define CS_Low()                  GPIO_ResetBits(FLASH_SPI_CS_PORT,FLASH_SPI_CS_PIN);
#define SPI_FLASH_PageSize              256

void SPI_FLASH_Init(void);
uint8_t SPI_TIMEOUT_UserCallBack(uint8_t num);
u8 SPI_Send_Byte(u8 chr);
u8 SPI_ReadByte(void);
void SPI_Write_Enable(void);
void SPI_WriteWait_FlagEnd(void);
void SPI_FLASH_Sector_Erase(u32 ADDR);
//void SPI_Page_Write(u32 ADDR,u8 *pBuffer,u16 NumByteToWrite);
void SPI_Page_Read(u32 ADDR,u8 *pBuffer,u16 NumByteToWrite);
void show_Chinese(u8 *str,u8 x,u8 y,u8 length);
#endif
