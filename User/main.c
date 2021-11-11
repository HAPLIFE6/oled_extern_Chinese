#include "stm32f10x.h"
#include "bsp_oled.h"
//#include "7th.h"
u8 tt[]="刽呼空乃";
u8 bb[]="衫问铀八";
int main(void)
{
	SysTick_Init(80);
	oled_Config();
	SPI_FLASH_Init();	
/* 擦除操作，在擦除之后，一定一定要把他注释掉 */
	//for(int i=0;i<32;i++)
	//{SPI_FLASH_Sector_Erase(0x00000+i*4096);}
//后面一定一定记得要把这段注释掉，要不会把原来的擦除掉
	
	//下面是写操作
//	for(uint32_t i=0;i<1000;i++)
//	{SPI_Page_Write(start_addr+16*i,hzk[i],16);}
	
	//验证性的实验
	show_Chinese(tt,0,0,4);
	show_Chinese(bb,0,3,4);
}
/*
详细操作请读左面doc下的readme.txt.
*/
