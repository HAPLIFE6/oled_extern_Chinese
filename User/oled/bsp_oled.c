#include "bsp_oled.h"
#include "oledfont.h"
void OLED_GPIO_Config(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	I2Cx_GPIO_APBxClock_FUN(I2Cx_GPIO_CLK,ENABLE);
	///SCL
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=I2Cx_GPIO_SCL_PIN;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(I2Cx_GPIO_SCL_PORT,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin=I2Cx_GPIO_SDA_PIN;
	GPIO_Init(I2Cx_GPIO_SDA_PORT,&GPIO_InitStructure);
}
void SDA_OUT(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=I2Cx_GPIO_SDA_PIN;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(I2Cx_GPIO_SDA_PORT,&GPIO_InitStructure);
}
void SDA_IN(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=I2Cx_GPIO_SDA_PIN;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(I2Cx_GPIO_SDA_PORT,&GPIO_InitStructure);
}
void IIC_Start(void)
{
	SDA_OUT();
	delay_us(2);
	I2C_SCL_SET();
	I2C_SDA_SET();
	delay_us(2);
	I2C_SDA_RES();
	delay_us(2);
	I2C_SCL_RES();
	delay_us(2);
}
void IIC_Stop(void)
{
	SDA_OUT();
	delay_us(2);
	I2C_SCL_SET();
	I2C_SDA_RES();
	delay_us(2);
	I2C_SDA_SET();
	delay_us(2);
}
void IIC_Wait_Ask(void)
{
	/*
	uint8_t count;
	uint8_t READ_SDA;
	SDA_IN();
	I2C_SCL_SET();
	delay_us(2);
	READ_SDA=GPIO_ReadInputDataBit(I2Cx_GPIO_SDA_PORT, I2Cx_GPIO_SDA_PIN);
	while(READ_SDA)
	{
		READ_SDA=GPIO_ReadInputDataBit(I2Cx_GPIO_SDA_PORT, I2Cx_GPIO_SDA_PIN);
		count++;
		if(count>=250)
		{
			IIC_Stop();
			return 1;
		}
	}
	I2C_SCL_SET();
	delay_us(2);
	return 0;
	*/
	I2C_SCL_SET();
	I2C_SCL_RES();
	
}
void Write_IIC_Byte(u8 data)
{
	u8 i;
	SDA_OUT();
	for(i=0;i<8;i++)
	{
		I2C_SCL_RES();
		delay_us(2);
		if(data&0x80)
		{
			I2C_SDA_SET();
		}
		else
		{
			I2C_SDA_RES();
		}
		I2C_SCL_SET();
		delay_us(2);
		I2C_SCL_RES();
		data<<=1;
	}
}
//дcmd
void Write_IIC_Command(u8 command)
{
	IIC_Start();
	Write_IIC_Byte(OLED_ADDR);
	IIC_Wait_Ask();
	Write_IIC_Byte(0x00);
	IIC_Wait_Ask();
	Write_IIC_Byte(command);
	IIC_Wait_Ask();
	IIC_Stop();
}
//дdata
void Write_IIC_Data(u8 data)
{
	IIC_Start();
	Write_IIC_Byte(OLED_ADDR);
	IIC_Wait_Ask();
	Write_IIC_Byte(0x40);
	IIC_Wait_Ask();
	Write_IIC_Byte(data);
	IIC_Wait_Ask();
	IIC_Stop();
}
void OLED_Init(void)
{
	delay_ms(100);
	Write_IIC_Command(0xAE);
	Write_IIC_Command(0x20);
	Write_IIC_Command(0x10);
	Write_IIC_Command(0xb0);
	Write_IIC_Command(0xc8);
	Write_IIC_Command(0x00);
	Write_IIC_Command(0x10);
	Write_IIC_Command(0x40);
	Write_IIC_Command(0xff);
	Write_IIC_Command(0xa1);
	Write_IIC_Command(0xa6);
	Write_IIC_Command(0xa8);
	Write_IIC_Command(0x3F);
	Write_IIC_Command(0xa4);
	Write_IIC_Command(0xd3);
	Write_IIC_Command(0x00);
	Write_IIC_Command(0xd5);
	Write_IIC_Command(0xf0);
	Write_IIC_Command(0xd9);
	Write_IIC_Command(0x22);
	Write_IIC_Command(0xda);
	Write_IIC_Command(0x12);
	Write_IIC_Command(0xdb);
	Write_IIC_Command(0x20);
	Write_IIC_Command(0x8d);
	Write_IIC_Command(0x14);
	Write_IIC_Command(0xaf);
}	
void OLED_Clear(void)  
{  
	u8 i,n;		    
	for(i=0;i<8;i++)  
	{  
		Write_IIC_Command(0xb0+i);  
		Write_IIC_Command(0x00);
		Write_IIC_Command(0x10);   
		for(n=0;n<128;n++)Write_IIC_Data(0); 
	}
}	
//x的取值范围0-127
//y的取值范围0-7
void OLED_Set_Pos(unsigned char x, unsigned char y) 
{ Write_IIC_Command(0xb0+y);
	Write_IIC_Command(((x&0xf0)>>4)|0x10);
	Write_IIC_Command(x&0x0f); 
} 
void OLED_ShowNum(uint8_t x,uint8_t y,uint8_t chr,uint8_t size)
{
	uint8_t zhengshu,xiaoshu;
	xiaoshu=chr%10;zhengshu=(chr-xiaoshu)/10;
	OLED_Set_Pos(x,y);
	if(size==6)
	{
				for(uint8_t i=0;i<6;i++)
				{
					Write_IIC_Data(F6x8[chr-32][i]);
				}
	}
	if(size==16)
	{
		uint8_t t;
		OLED_Set_Pos(x,y);	
    for(t=0;t<8;t++)
		{
			Write_IIC_Data(F8X16[chr-32][t]);
    }	
		OLED_Set_Pos(x,y+1);	
    for(t=8;t<16;t++)
		{
			Write_IIC_Data(F8X16[chr-32][t]);
    }				
	}
}
void OLED_ShowString(u8 x,u8 y,u8 *OLED_String,u8 size)
{
	uint8_t i,c;
	uint8_t num=0;
	uint8_t a=0;
	OLED_Set_Pos(x,y);
	while(OLED_String[a]!='\0')
	{
		c=OLED_String[a]-32;
			if(size==6)
		{
			for(i=0;i<6;i++)
			{
				Write_IIC_Data(F6x8[c][i]);
			}
			a++;
		}
		if(size==16)
		{
			for(i=0;i<8;i++)
			{
				Write_IIC_Data(F8X16[c][i]);
			}
		OLED_Set_Pos(x+num,y+1);
			for(i=8;i<16;i++)
			{
				Write_IIC_Data(F8X16[c][i]);
			}
			a++;
			num=num+8;
			OLED_Set_Pos(x+num,y);
		}
	}
}
void oled_Config(void)
{
	OLED_GPIO_Config();
	OLED_Init();
	OLED_Clear();
}
void OLED_ShowCHinese(uint8_t x,uint8_t y,uint8_t hanziku[32])
{    			    
	u8 t;
	OLED_Set_Pos(x,y);	
    for(t=0;t<16;t++)
		{
			Write_IIC_Data(hanziku[t]);
    }	
		OLED_Set_Pos(x,y+1);	
    for(t=16;t<32;t++)
		{
			Write_IIC_Data(hanziku[t]);
    }				
}
