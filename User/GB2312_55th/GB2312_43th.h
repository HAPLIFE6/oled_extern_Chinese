/*第六区
   
43 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 恕 刷 耍 摔 衰 甩 帅 栓 拴
１ 霜 双 爽 谁 水 睡 税 吮 瞬 顺
２ 舜 说 硕 朔 烁 斯 撕 嘶 思 私
３ 司 丝 死 肆 寺 嗣 四 伺 似 饲
４ 巳 松 耸 怂 颂 送 宋 讼 诵 搜
５ 艘 擞 嗽 苏 酥 俗 素 速 粟 僳
６ 塑 溯 宿 诉 肃 酸 蒜 算 虽 隋
７ 随 绥 髓 碎 岁 穗 遂 隧 祟 孙
８ 损 笋 蓑 梭 唆 缩 琐 索 锁 所
９ 塌 他 它 她 塔
43 th           0x015180-0x015dff               86400-89599
*/
//恕 刷 耍 摔 衰 甩 帅 栓 拴 霜 双 爽 谁 水 睡 税 吮 瞬 顺舜 说 硕 朔 烁 斯 撕 嘶 思 私 司 丝 死 肆 寺 嗣 四 伺 似 饲 巳 松 耸 怂 颂 送 宋 讼 诵 搜
//艘 擞 嗽 苏 酥 俗 素 速 粟 僳 塑 溯 宿 诉 肃 酸 蒜 算 虽 隋 随 绥 髓 碎 岁 穗 遂 隧 祟 孙 损 笋 蓑 梭 唆 缩 琐 索 锁 所 塌 他 它 她 塔
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x015180
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x04,0x14,0x2C,0xA7,0x44,0xB4,0x0C,0x00,0x00,0xFC,0x84,0x84,0x84,0xFC,0x00,0x00},
{0x42,0x32,0x01,0x00,0x38,0x40,0x41,0x44,0x58,0x41,0x40,0x70,0x00,0x09,0x30,0x00},/*"恕",0*/
{0x00,0x00,0xFE,0x12,0x12,0x12,0xF2,0x12,0x12,0x1E,0x00,0xF0,0x00,0x00,0xFF,0x00},
{0x10,0x0E,0x01,0x3F,0x01,0x01,0xFF,0x11,0x21,0x1F,0x00,0x0F,0x40,0x80,0x7F,0x00},/*"刷",1*/
{0x02,0x02,0xF2,0x12,0x12,0xFA,0x16,0x12,0xF2,0x12,0x92,0x12,0xF2,0x02,0x02,0x00},
{0x04,0x84,0x85,0x94,0x5C,0x54,0x27,0x24,0x24,0x54,0x4C,0x45,0x84,0x04,0x04,0x00},/*"耍",2*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0xA4,0x44,0x24,0xB5,0x6E,0xA4,0x14,0x44,0xA4,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x08,0x08,0x09,0x09,0xFD,0x09,0x0B,0x08,0x08,0x00},/*"摔",3*/
{0x44,0x44,0x44,0xF4,0x54,0x54,0x55,0x56,0x54,0x54,0x54,0xF4,0x44,0x44,0x44,0x00},
{0x20,0x20,0x10,0x11,0x09,0xFD,0x43,0x21,0x03,0x05,0x09,0x11,0x28,0x44,0x40,0x00},/*"衰",4*/
{0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x80,0x60,0x1F,0x02,0x02,0x02,0x02,0x7F,0x82,0x82,0x92,0xA2,0x9F,0x80,0xE0,0x00},/*"甩",5*/
{0x00,0xFC,0x00,0x00,0xFF,0x00,0x00,0xF0,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x00,0x87,0x40,0x30,0x0F,0x00,0x00,0x1F,0x00,0x00,0xFF,0x08,0x10,0x0F,0x00,0x00},/*"帅",6*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x20,0x50,0x48,0x44,0xC3,0x44,0x48,0x50,0x20,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"栓",7*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x50,0x48,0x44,0xC3,0x44,0x48,0x50,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"拴",8*/
{0x10,0x0C,0x05,0x55,0x55,0x55,0x05,0x7F,0x05,0x55,0x55,0x55,0x05,0x14,0x0C,0x00},
{0x20,0x12,0x0A,0x06,0xFF,0x0A,0x12,0x00,0xFF,0x55,0x55,0x55,0x55,0xFF,0x00,0x00},/*"霜",9*/
{0x04,0x34,0xC4,0x04,0xC4,0x3C,0x00,0x04,0xFC,0x04,0x04,0x04,0xC4,0x3C,0x00,0x00},
{0x40,0x30,0x0C,0x03,0x0C,0x30,0x80,0x40,0x20,0x13,0x0C,0x13,0x20,0x40,0x80,0x00},/*"双",10*/
{0x00,0x04,0x54,0x24,0x54,0x04,0x04,0xFF,0x04,0x04,0x54,0x24,0x54,0x04,0x00,0x00},
{0x80,0x80,0x45,0x42,0x25,0x10,0x0C,0x03,0x0C,0x10,0x25,0x42,0x45,0x80,0x80,0x00},/*"爽",11*/
{0x40,0x42,0xCC,0x00,0x40,0x20,0xF8,0x4F,0x48,0x49,0xFE,0x48,0x48,0x48,0x08,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x22,0x22,0x22,0x3F,0x22,0x22,0x22,0x20,0x00},/*"谁",12*/
{0x00,0x20,0x20,0x20,0xA0,0x60,0x00,0xFF,0x60,0x80,0x40,0x20,0x18,0x00,0x00,0x00},
{0x20,0x10,0x08,0x06,0x01,0x40,0x80,0x7F,0x00,0x01,0x02,0x04,0x08,0x10,0x10,0x00},/*"水",13*/
{0xFC,0x24,0x24,0xFC,0x00,0x20,0xE4,0x24,0x24,0xFE,0x22,0x23,0xE2,0x20,0x00,0x00},
{0x3F,0x11,0x11,0x3F,0x00,0x49,0x4F,0x49,0x49,0x7F,0x49,0x49,0x4F,0x49,0x01,0x00},/*"睡",14*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0xF1,0x16,0x10,0x10,0x18,0x14,0xF3,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x86,0x40,0x21,0x19,0x07,0x01,0x3F,0x41,0x41,0x70,0x00},/*"税",15*/
{0x00,0xFC,0x04,0x04,0xFC,0x20,0x30,0xAC,0x23,0x20,0xA0,0x28,0x30,0x60,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x8F,0x40,0x30,0x0F,0x00,0x00,0x3F,0x40,0x40,0x40,0x70,0x00},/*"吮",16*/
{0xFC,0x24,0x24,0xFC,0x80,0x62,0xAA,0x32,0x22,0x26,0x29,0x21,0xB1,0x2D,0x60,0x00},
{0x3F,0x11,0x11,0x3F,0x88,0x44,0x2B,0x12,0x0E,0x00,0x1A,0x12,0xFF,0x12,0x12,0x00},/*"瞬",17*/
{0x00,0xFE,0x00,0xFC,0x00,0xFF,0x00,0xF2,0x12,0x1A,0xD6,0x12,0x12,0xF2,0x02,0x00},
{0x40,0x3F,0x00,0x3F,0x00,0xFF,0x80,0x4F,0x20,0x18,0x07,0x10,0x20,0x4F,0x80,0x00},/*"顺",18*/
{0x00,0x60,0x22,0x2A,0xF2,0x22,0x22,0x26,0x3A,0x21,0x21,0xF1,0x2D,0x21,0x60,0x00},
{0x00,0x84,0x42,0x25,0x19,0x09,0x07,0x00,0x1D,0x11,0x11,0xFF,0x11,0x11,0x10,0x00},/*"舜",19*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0xF1,0x16,0x10,0x10,0x18,0x14,0xF3,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x90,0x48,0x21,0x19,0x07,0x01,0x3F,0x41,0x41,0x40,0x70,0x00},/*"说",20*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x02,0xF2,0x12,0x1A,0x96,0x12,0x12,0xF2,0x02,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x80,0x4F,0x20,0x18,0x07,0x10,0x20,0xCF,0x00,0x00},/*"硕",21*/
{0x08,0xC9,0x0E,0x08,0xF8,0x0C,0x0B,0xC8,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x80,0x43,0x22,0x1A,0x07,0x02,0x82,0x47,0x30,0x0F,0x02,0x42,0x82,0x7F,0x00,0x00},/*"朔",22*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x00,0xFC,0x84,0x84,0xF4,0x82,0x83,0x82,0x80,0x00},
{0x80,0x60,0x18,0x07,0x08,0x30,0x20,0x10,0x4C,0x80,0x7F,0x00,0x04,0x08,0x30,0x00},/*"烁",23*/
{0x00,0x04,0xFF,0x24,0x24,0x24,0xFF,0x04,0x00,0xFC,0x44,0x44,0xC4,0x42,0x40,0x00},
{0x88,0x48,0x2F,0x09,0x09,0x19,0x2F,0xC8,0x60,0x1F,0x00,0x00,0xFF,0x00,0x00,0x00},/*"斯",24*/
{0x10,0x10,0xFF,0x10,0x08,0xFF,0xA8,0xA8,0xFF,0x08,0x00,0xFC,0x44,0xC4,0x42,0x00},
{0x42,0x82,0x7F,0x41,0x24,0x17,0x04,0x14,0x27,0x84,0x60,0x1F,0x00,0xFF,0x00,0x00},/*"撕",25*/
{0xFC,0x04,0xFC,0x00,0x08,0xFF,0xA8,0xA8,0xFF,0x08,0x00,0xFC,0x44,0xC4,0x42,0x00},
{0x0F,0x04,0x0F,0x40,0x24,0x17,0x04,0x14,0x27,0x84,0x60,0x1F,0x00,0xFF,0x00,0x00},/*"嘶",26*/
{0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x40,0x38,0x01,0x00,0x3C,0x40,0x40,0x42,0x4C,0x40,0x40,0x70,0x05,0x08,0x30,0x00},/*"思",27*/
{0x20,0x24,0x24,0xA4,0xFE,0x23,0x22,0x20,0x00,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00},
{0x10,0x08,0x06,0x01,0xFF,0x01,0x06,0x10,0x3C,0x13,0x10,0x10,0x12,0x1C,0x70,0x00},/*"私",28*/
{0x00,0x10,0x12,0x92,0x92,0x92,0x92,0x92,0x92,0x12,0x12,0x02,0xFE,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x10,0x10,0x10,0x3F,0x00,0x40,0x80,0x7F,0x00,0x00,0x00},/*"司",29*/
{0x00,0x60,0x50,0x4C,0x43,0xC0,0x30,0x00,0x60,0x50,0x4C,0x43,0xC0,0x30,0x00,0x00},
{0x40,0x48,0x4C,0x4A,0x49,0x48,0x48,0x40,0x48,0x4C,0x4A,0x49,0x48,0x48,0x40,0x00},/*"丝",30*/
{0x02,0x02,0xC2,0x3E,0x22,0x22,0xE2,0x02,0xFE,0x02,0x82,0x42,0x22,0x12,0x00,0x00},
{0x02,0x81,0x40,0x21,0x1A,0x06,0x01,0x00,0x3F,0x41,0x40,0x40,0x40,0x78,0x00,0x00},/*"死",31*/
{0x00,0x00,0xFE,0x92,0x92,0x92,0x02,0x10,0x54,0x54,0xFF,0x54,0x54,0x7C,0x10,0x00},
{0x44,0xE4,0x5F,0x44,0x44,0x54,0xE4,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"肆",32*/
{0x40,0x40,0x48,0x48,0x48,0x48,0x48,0x7F,0x48,0x48,0xC8,0x48,0x48,0x40,0x40,0x00},
{0x00,0x02,0x02,0x02,0x06,0x1A,0x02,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00,0x00},/*"寺",33*/
{0x00,0xC0,0x5E,0xD2,0x52,0xD2,0x5E,0xC0,0x10,0x92,0x92,0x92,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x04,0x7F,0x04,0x3F,0x84,0xFF,0x00,0x1F,0x10,0x5F,0x80,0x7F,0x00,0x00},/*"嗣",34*/
{0x00,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x00,0x7F,0x28,0x24,0x23,0x20,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x7F,0x00,0x00},/*"四",35*/
{0x00,0x80,0x60,0xF8,0x07,0x10,0x92,0x92,0x92,0x92,0x92,0x12,0x02,0xFE,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x0F,0x08,0x08,0x08,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"伺",36*/
{0x80,0x60,0xF8,0x07,0x00,0xF8,0x00,0x02,0x04,0x18,0x00,0x00,0xFF,0x00,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x00,0x3F,0x10,0x88,0x40,0x20,0x18,0x07,0x08,0x30,0xC0,0x00},/*"似",37*/
{0x40,0x30,0xCF,0x08,0x28,0x18,0x92,0x92,0x92,0x92,0x92,0x12,0x02,0xFE,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0x0F,0x08,0x08,0x08,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"饲",38*/
{0x00,0x00,0xFE,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00},/*"巳",39*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x80,0x60,0x1E,0x00,0xE0,0x07,0x18,0x60,0x80,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x20,0x70,0x2C,0x23,0x20,0x20,0x24,0x38,0x60,0x00},/*"松",40*/
{0x00,0x50,0x48,0xC4,0x43,0x44,0x48,0x50,0x48,0x44,0x43,0xC4,0x48,0x50,0x00,0x00},
{0x20,0x20,0x20,0x3F,0x25,0x25,0x25,0x25,0x25,0x25,0x15,0xFF,0x10,0x10,0x10,0x00},/*"耸",41*/
{0x00,0x00,0xC0,0x30,0x0F,0x10,0x60,0x00,0xC0,0x30,0x0F,0x30,0xC0,0x00,0x00,0x00},
{0x42,0x31,0x00,0x00,0x38,0x40,0x42,0x45,0x58,0x40,0x40,0x70,0x00,0x09,0x32,0x00},/*"怂",42*/
{0x40,0x30,0x0E,0xE0,0x02,0x0C,0x30,0x00,0xF2,0x1A,0x16,0xD2,0x12,0xF2,0x02,0x00},
{0x10,0x3C,0x13,0x10,0x14,0x38,0x80,0x80,0x4F,0x20,0x18,0x17,0x20,0x4F,0x80,0x00},/*"颂",43*/
{0x40,0x40,0x42,0xCC,0x00,0x88,0x89,0x8E,0x88,0xF8,0x88,0x8C,0x8B,0x88,0x80,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x50,0x48,0x46,0x41,0x42,0x44,0x58,0x40,0x40,0x00},/*"送",44*/
{0x10,0x8C,0x84,0x84,0x84,0x84,0x85,0xF6,0x84,0x84,0x84,0x84,0x84,0x94,0x0C,0x00},
{0x20,0x20,0x10,0x08,0x04,0x02,0x01,0xFF,0x01,0x02,0x04,0x08,0x10,0x20,0x20,0x00},/*"宋",45*/
{0x40,0x40,0x42,0xCC,0x00,0x80,0x60,0x1E,0x00,0xE0,0x07,0x18,0x60,0x80,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x11,0x28,0x70,0x2C,0x23,0x20,0x20,0x24,0x38,0x60,0x01,0x00},/*"讼",46*/
{0x40,0x42,0xCC,0x00,0x00,0xE2,0x22,0x2A,0x2A,0xF2,0x2A,0x26,0x22,0xE0,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0xFF,0x09,0x09,0x09,0x7F,0x09,0x49,0x89,0x7F,0x00,0x00},/*"诵",47*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFE,0x91,0x80,0xFF,0x80,0x92,0xFE,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x80,0x82,0x46,0x2A,0x13,0x2A,0x46,0x82,0x80,0x00},/*"搜",48*/
{0x80,0xFC,0x96,0xE5,0x84,0xFC,0x00,0xFE,0x91,0x80,0xFF,0x80,0x92,0xFE,0x00,0x00},
{0x80,0x7F,0x02,0x4C,0x80,0x7F,0x80,0x82,0x46,0x2A,0x13,0x2A,0x46,0x82,0x80,0x00},/*"艘",0*/
{0x10,0x10,0xFF,0x10,0x92,0x54,0xFF,0x54,0xD2,0x20,0xD8,0x17,0x10,0xF0,0x10,0x00},
{0x42,0x82,0x7F,0x01,0x8A,0x56,0x23,0x52,0x8E,0x40,0x33,0x0C,0x33,0x40,0x80,0x00},/*"擞",1*/
{0xFC,0x04,0x04,0xFC,0x00,0xE4,0x24,0xFF,0x24,0xE4,0x40,0x30,0x1F,0x50,0x30,0x00},
{0x0F,0x04,0x04,0x0F,0x10,0x09,0x05,0xFF,0x05,0x99,0x40,0x30,0x0F,0x70,0x80,0x00},/*"嗽",2*/
{0x04,0x44,0x44,0x44,0x5F,0x44,0xF4,0x44,0x44,0x44,0x5F,0xC4,0x04,0x04,0x04,0x00},
{0x00,0x10,0x8E,0x40,0x20,0x18,0x07,0x00,0x40,0x80,0x40,0x3F,0x00,0x01,0x0E,0x00},/*"苏",3*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0x44,0x44,0x44,0xFE,0x42,0x43,0x42,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x10,0x0C,0x03,0xFF,0x01,0x06,0x08,0x00},/*"酥",4*/
{0x00,0x80,0x60,0xF8,0x07,0x08,0x84,0x43,0x20,0x18,0x20,0x41,0x82,0x0C,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x01,0x01,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x01,0x01,0x00},/*"俗",5*/
{0x20,0x20,0x22,0x2A,0x2A,0xAA,0x6A,0x3F,0x2A,0x2A,0xAA,0x2A,0x22,0x20,0x20,0x00},
{0x00,0x80,0x48,0x29,0x09,0x4D,0x8D,0x7B,0x0B,0x09,0x28,0x4C,0x98,0x00,0x00,0x00},/*"素",6*/
{0x40,0x40,0x42,0xCC,0x00,0x04,0xF4,0x94,0x94,0xFF,0x94,0x94,0xF4,0x04,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x48,0x44,0x42,0x41,0x5F,0x41,0x42,0x44,0x48,0x40,0x00},/*"速",7*/
{0x00,0x01,0x79,0x49,0x49,0x7F,0x49,0x49,0x49,0x7F,0x49,0x49,0x79,0x01,0x00,0x00},
{0x40,0x44,0x24,0x25,0x16,0x0C,0x04,0xFF,0x04,0x0C,0x16,0x25,0x24,0x44,0x40,0x00},/*"粟",8*/
{0x80,0x60,0xF8,0x07,0x00,0xF2,0x92,0x92,0xFE,0x92,0xFE,0x92,0x92,0xF2,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x40,0x44,0x25,0x16,0x0C,0xFF,0x0C,0x16,0x25,0x44,0x40,0x00},/*"僳",9*/
{0x04,0x74,0x45,0x46,0xFC,0x46,0x45,0x74,0x00,0xFE,0x2A,0x2A,0x2A,0xFE,0x00,0x00},
{0x40,0x44,0x4A,0x49,0x48,0x48,0x48,0x7E,0x49,0x48,0x48,0x49,0x4A,0x41,0x40,0x00},/*"塑",10*/
{0x20,0xC2,0x0C,0x80,0x00,0xD1,0x16,0xF0,0x14,0xD3,0x00,0xFE,0x22,0x22,0xFE,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x43,0x32,0x0F,0x02,0x87,0x60,0x1F,0x42,0x82,0x7F,0x00},/*"溯",11*/
{0x10,0x0C,0x84,0xC4,0x34,0x24,0x25,0x26,0xA4,0x64,0x24,0x24,0x24,0x34,0x0C,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"宿",12*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFC,0x44,0x44,0x44,0xC2,0x43,0x42,0x40,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x88,0x60,0x1F,0x00,0x00,0x02,0xFF,0x04,0x08,0x10,0x00},/*"诉",13*/
{0x10,0x10,0x54,0x54,0x54,0x54,0x54,0xFF,0x54,0x54,0x54,0x54,0x7C,0x10,0x10,0x00},
{0x80,0x60,0x1F,0x00,0x10,0x0E,0x00,0xFF,0x00,0x02,0x1C,0x00,0xFF,0x00,0x00,0x00},/*"肃",14*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0x90,0x58,0xB4,0x13,0x30,0x58,0x90,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x88,0x46,0x29,0x11,0x29,0x47,0x80,0x00},/*"酸",15*/
{0x04,0x24,0x24,0x24,0x2F,0x24,0x04,0x04,0x04,0x24,0x2F,0x24,0x24,0x24,0x04,0x00},
{0x21,0x59,0x81,0x7F,0x01,0x09,0x31,0x00,0x21,0x59,0x81,0x7F,0x01,0x09,0x31,0x00},/*"蒜",16*/
{0x08,0x04,0xF3,0x52,0x56,0x52,0x52,0x50,0x54,0x53,0x52,0x56,0xF2,0x02,0x02,0x00},
{0x10,0x10,0x97,0x55,0x3D,0x15,0x15,0x15,0x15,0x15,0xFD,0x15,0x17,0x10,0x10,0x00},/*"算",17*/
{0x00,0x00,0x80,0x9E,0x92,0x92,0x92,0xF2,0x92,0x92,0x92,0x9E,0x80,0x00,0x00,0x00},
{0x00,0x40,0xC7,0x44,0x44,0x44,0x44,0x7F,0x24,0x24,0x2C,0x34,0x27,0xC0,0x00,0x00},/*"虽",18*/
{0x00,0xFE,0x22,0x5A,0x86,0x40,0x24,0x54,0x5C,0x57,0x74,0x54,0x54,0x54,0x44,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x00,0x00,0xFF,0x15,0x15,0x15,0x55,0x95,0x7F,0x00,0x00},/*"隋",19*/
{0x00,0xFE,0x22,0x5A,0x86,0x08,0x10,0x44,0x24,0xF4,0x2C,0x27,0x24,0xE4,0x04,0x00},
{0x00,0xFF,0x04,0x08,0x87,0x41,0x3F,0x40,0x80,0xBF,0x85,0x95,0xA5,0x9F,0x80,0x00},/*"随",20*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x14,0x64,0x04,0x8C,0x32,0x02,0x23,0x1A,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x80,0x89,0x4D,0x4B,0x31,0x11,0x29,0x47,0x81,0x01,0x00},/*"绥",21*/
{0x60,0xBE,0xAA,0xBA,0xA2,0xBE,0x60,0x84,0xB8,0x12,0xAE,0xAB,0xBA,0xAA,0x22,0x00},
{0x00,0xFF,0x0A,0x4A,0x8A,0x7F,0x80,0x40,0x3F,0x40,0xBF,0x8A,0xAA,0xBF,0x80,0x00},/*"髓",22*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x80,0x44,0x34,0x45,0x86,0x44,0x34,0x44,0x84,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x04,0x04,0x04,0x04,0xFE,0x04,0x04,0x04,0x04,0x00},/*"碎",23*/
{0x00,0x00,0x1E,0x10,0x10,0x90,0xF0,0x9F,0x90,0x90,0x90,0x90,0x1E,0x00,0x00,0x00},
{0x80,0x80,0x84,0x42,0x41,0x42,0x24,0x28,0x10,0x08,0x04,0x03,0x00,0x00,0x00,0x00},/*"岁",24*/
{0x24,0x24,0xA4,0xFE,0xA3,0x22,0x04,0xF4,0x54,0x54,0xFF,0x54,0x54,0xF4,0x04,0x00},
{0x08,0x06,0x01,0xFF,0x00,0x81,0x64,0x05,0x65,0x8D,0xB7,0x85,0xC5,0x15,0x6E,0x00},/*"穗",25*/
{0x40,0x40,0x42,0xCC,0x00,0x48,0x48,0x29,0x9E,0x68,0xCC,0x8B,0x48,0x28,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x52,0x52,0x49,0x54,0x62,0x5F,0x40,0x43,0x4C,0x40,0x00},/*"遂",26*/
{0x00,0xFE,0x22,0x5A,0x86,0x42,0xC4,0x00,0x49,0x2E,0x98,0xEC,0x8B,0x48,0x00,0x00},
{0x00,0xFF,0x04,0x08,0x87,0x40,0x3F,0x40,0x52,0x49,0x64,0x5F,0x42,0x4C,0x40,0x00},/*"隧",27*/
{0x00,0x70,0x40,0x4E,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x4E,0x40,0x70,0x00,0x00},
{0x04,0x44,0x25,0x15,0x05,0x45,0x85,0x7D,0x05,0x05,0x05,0x15,0x25,0x44,0x04,0x00},/*"祟",28*/
{0x00,0x02,0x02,0x02,0xF2,0x8A,0x46,0x00,0xE0,0x00,0xFF,0x00,0x20,0xC0,0x00,0x00},
{0x02,0x02,0x41,0x81,0x7F,0x00,0x04,0x03,0x40,0x80,0x7F,0x00,0x00,0x00,0x07,0x00},/*"孙",29*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xC0,0x5E,0x52,0x52,0x52,0x5E,0xC0,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x80,0x8F,0x40,0x30,0x0F,0x10,0x20,0xCF,0x00,0x00},/*"损",30*/
{0x10,0x08,0x24,0x27,0x2C,0x34,0xE4,0x34,0x28,0x27,0x24,0xEC,0x14,0x04,0x04,0x00},
{0x81,0x81,0x49,0x29,0x19,0x0D,0x0B,0x09,0x09,0x09,0x09,0x1F,0x01,0x01,0x01,0x00},/*"笋",31*/
{0x02,0x12,0x12,0xD2,0x57,0x52,0x52,0x5A,0x52,0x52,0x57,0xD2,0x12,0x12,0x02,0x00},
{0x41,0x41,0x21,0x27,0xF5,0x8D,0x45,0x45,0x0D,0x15,0x25,0x57,0x49,0x81,0x81,0x00},/*"蓑",32*/
{0x10,0x10,0xD0,0xFF,0x90,0x00,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x81,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"梭",33*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x80,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"唆",34*/
{0x20,0x38,0xE7,0x30,0x00,0x8C,0xC4,0x34,0x24,0x25,0xA6,0x64,0x24,0x24,0x2C,0x00},
{0x22,0x27,0x12,0x12,0x01,0x00,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0xFF,0x00,0x00},/*"缩",35*/
{0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xE2,0x2C,0x20,0xBF,0x20,0x28,0xE6,0x00,0x00},
{0x20,0x60,0x20,0x1F,0x10,0x10,0x80,0x4F,0x20,0x10,0x0F,0x10,0x20,0x4F,0x80,0x00},/*"琐",36*/
{0x80,0x60,0x24,0x24,0x24,0xA4,0x64,0x3F,0x24,0x24,0xA4,0x24,0x24,0xA0,0x60,0x00},
{0x00,0x80,0x48,0x29,0x09,0x4D,0x8D,0x7B,0x0B,0x09,0x28,0x4C,0x98,0x00,0x00,0x00},/*"索",37*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xE2,0x2C,0x20,0xBF,0x20,0x28,0xE6,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x80,0x4F,0x20,0x10,0x0F,0x10,0x20,0x4F,0x80,0x00},/*"锁",38*/
{0x00,0x00,0xFC,0x24,0x24,0x22,0xE3,0x02,0xFC,0x44,0x44,0x42,0xC3,0x42,0x40,0x00},
{0x40,0x30,0x0F,0x02,0x02,0x82,0x43,0x30,0x0F,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"所",39*/
{0x20,0x20,0xFF,0x20,0x20,0x00,0x3E,0x2A,0x2A,0x2A,0x2A,0x2A,0x3E,0x00,0x00,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x15,0x49,0x81,0x7F,0x00,0x15,0x49,0x81,0x7F,0x00,0x00},/*"塌",40*/
{0x00,0x80,0x60,0xF8,0x87,0x80,0xFC,0x40,0x20,0xFF,0x10,0x08,0xF8,0x00,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x3F,0x40,0x40,0x4F,0x40,0x44,0x47,0x40,0x78,0x00},/*"他",41*/
{0x10,0x0C,0x04,0x04,0xE4,0x04,0x05,0x06,0x04,0x04,0x84,0x84,0x44,0x14,0x0C,0x00},
{0x00,0x00,0x00,0x00,0x3F,0x42,0x42,0x41,0x41,0x41,0x40,0x40,0x40,0x78,0x00,0x00},/*"它",42*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x80,0xF8,0x80,0x40,0xFF,0x20,0x10,0xF0,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x00,0x3F,0x40,0x40,0x5F,0x42,0x44,0x43,0x78,0x00},/*"她",43*/
{0x20,0x20,0xFF,0x20,0x20,0x04,0x84,0x4F,0x24,0x14,0x24,0x4F,0x84,0x04,0x00,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x01,0xF8,0x49,0x49,0x49,0x49,0x49,0xF8,0x01,0x01,0x00},/*"塔",44*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
};
#endif
