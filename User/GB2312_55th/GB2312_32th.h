/*第六区
32 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 馈 愧 溃 坤 昆 捆 困 括 扩
１ 廓 阔 垃 拉 喇 蜡 腊 辣 啦 莱
２ 来 赖 蓝 婪 栏 拦 篮 阑 兰 澜
３ 谰 揽 览 懒 缆 烂 滥 琅 榔 狼
４ 廊 郎 朗 浪 捞 劳 牢 老 佬 姥
５ 酪 烙 涝 勒 乐 雷 镭 蕾 磊 累
６ 儡 垒 擂 肋 类 泪 棱 楞 冷 厘
７ 梨 犁 黎 篱 狸 离 漓 理 李 里
８ 鲤 礼 莉 荔 吏 栗 丽 厉 励 砾
９ 历 利 傈 例 俐
32 th           0x00c800-0x00d47f               51200-54399
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0xc800
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x40,0x30,0x8F,0x08,0x28,0x18,0x40,0x5C,0x54,0x54,0x7F,0x54,0x54,0x5C,0x40,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x08,0x80,0x9F,0x41,0x21,0x1D,0x21,0x41,0x9F,0x00,0x00},/*"馈",0*/
{0xE0,0x00,0xFF,0x10,0x20,0xFC,0x24,0x24,0xA6,0x7D,0x24,0x24,0x24,0xFC,0x00,0x00},
{0x01,0x00,0xFF,0x80,0x40,0x21,0x11,0x0D,0x03,0x7D,0x99,0x95,0x91,0x99,0xE0,0x00},/*"愧",1*/
{0x10,0x60,0x02,0x8C,0x40,0x40,0x5C,0x54,0x54,0x7F,0x54,0x54,0x5C,0x40,0x40,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x80,0x9F,0x41,0x21,0x1D,0x21,0x41,0x9F,0x00,0x00,0x00},/*"溃",2*/
{0x20,0x20,0x20,0xFF,0x20,0x20,0x00,0xF8,0x88,0x88,0xFF,0x88,0x88,0xF8,0x00,0x00},
{0x10,0x30,0x10,0x0F,0x08,0x08,0x00,0x1F,0x08,0x08,0xFF,0x08,0x08,0x1F,0x00,0x00},/*"坤",3*/
{0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0xFE,0x88,0x88,0x48,0x48,0x00,0x7E,0x90,0x90,0x88,0x88,0xE4,0x00,0x00},/*"昆",4*/
{0x10,0x10,0xFF,0x10,0x90,0xFE,0x22,0x22,0xA2,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x42,0x82,0x7F,0x01,0x00,0xFF,0x44,0x42,0x41,0x5F,0x41,0x42,0x40,0xFF,0x00,0x00},/*"捆",5*/
{0x00,0xFE,0x02,0x22,0x22,0x22,0xA2,0xFE,0xA2,0x22,0x22,0x22,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x40,0x48,0x44,0x42,0x41,0x7F,0x40,0x41,0x42,0x4C,0x40,0xFF,0x00,0x00},/*"困",6*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x24,0x24,0x24,0xFE,0x22,0x23,0x22,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0xFE,0x42,0x42,0x43,0x42,0x42,0xFE,0x00,0x00},/*"括",7*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xF8,0x08,0x08,0x09,0x0E,0x08,0x08,0x08,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"扩",8*/
{0x00,0x00,0xFE,0x0A,0xEA,0xAA,0xAE,0xAA,0xEB,0x02,0xFA,0x0A,0xCA,0x3A,0x02,0x00},
{0x40,0x30,0x0F,0x10,0x52,0x92,0x7A,0x0E,0x0A,0x08,0xFF,0x08,0x10,0x0F,0x00,0x00},/*"廓",9*/
{0x00,0xF8,0x21,0xC2,0x08,0x32,0x02,0x92,0x92,0xF2,0x8A,0x8A,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x04,0x04,0x3E,0x01,0x00,0x3C,0x24,0x27,0x24,0x3C,0x80,0xFF,0x00,0x00},/*"阔",10*/
{0x20,0x20,0x20,0xFF,0x20,0x20,0x10,0x90,0x11,0x16,0x10,0x10,0xD0,0x10,0x00,0x00},
{0x10,0x30,0x10,0x0F,0x08,0x48,0x40,0x41,0x5E,0x40,0x70,0x4E,0x41,0x40,0x40,0x00},/*"垃",11*/
{0x10,0x10,0x10,0xFF,0x90,0x40,0x10,0x90,0x10,0x11,0x16,0x10,0x10,0xD0,0x10,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x40,0x40,0x41,0x5E,0x40,0x40,0x70,0x4E,0x41,0x40,0x00},/*"拉",12*/
{0x00,0xFC,0x04,0xFC,0x00,0xE4,0x24,0xFF,0x24,0xE4,0x00,0xF0,0x00,0xFF,0x00,0x00},
{0x00,0x0F,0x04,0x0F,0x10,0x09,0x05,0xFF,0x05,0x19,0x00,0x4F,0x80,0x7F,0x00,0x00},/*"喇",13*/
{0x00,0xF8,0x08,0xFF,0x08,0xF8,0x00,0x48,0x48,0x7F,0x48,0x48,0x7F,0x48,0x48,0x00},
{0x20,0x63,0x21,0x1F,0x11,0x19,0x30,0x00,0xFF,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"蜡",14*/
{0x00,0xFE,0x22,0x22,0xFE,0x40,0x48,0x48,0x7F,0x48,0x48,0x48,0x7F,0x48,0x48,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"腊",15*/
{0x88,0xA8,0xC9,0x8E,0xC8,0xA8,0x00,0xE4,0x24,0x24,0xFF,0x24,0x24,0xE4,0x00,0x00},
{0x84,0x44,0x34,0x0F,0x04,0x04,0x20,0x11,0x09,0x05,0xFF,0x05,0x09,0x11,0x20,0x00},/*"辣",16*/
{0x00,0xFC,0x04,0xFC,0x00,0x10,0x10,0xFF,0x90,0xC8,0x09,0x0E,0x08,0xE8,0x08,0x00},
{0x00,0x0F,0x04,0x0F,0x00,0x44,0x82,0x7F,0x00,0x40,0x4F,0x60,0x5C,0x43,0x40,0x00},/*"啦",17*/
{0x04,0x04,0x24,0xA4,0x2F,0x24,0x24,0xFC,0x24,0x24,0x2F,0xA4,0x24,0x04,0x04,0x00},
{0x40,0x42,0x22,0x22,0x13,0x0A,0x06,0xFF,0x06,0x0A,0x13,0x22,0x22,0x42,0x40,0x00},/*"莱",18*/
{0x00,0x08,0x08,0x28,0xC8,0x08,0x08,0xFF,0x08,0x08,0x88,0x68,0x08,0x08,0x00,0x00},
{0x21,0x21,0x11,0x11,0x09,0x05,0x03,0xFF,0x03,0x05,0x09,0x11,0x11,0x21,0x21,0x00},/*"来",19*/
{0x04,0xE4,0x24,0xFF,0x24,0xE4,0x14,0xE8,0x27,0x24,0xA4,0x34,0x2C,0xE0,0x00,0x00},
{0x20,0x13,0x0A,0xFF,0x0A,0x13,0x80,0x4F,0x20,0x10,0x0F,0x10,0x20,0x4F,0x80,0x00},/*"赖",20*/
{0x04,0x04,0xE4,0x04,0x0F,0xF4,0x04,0x04,0xF4,0x44,0xCF,0x44,0x44,0x44,0x04,0x00},
{0x40,0x40,0x7D,0x44,0x44,0x7D,0x44,0x45,0x44,0x7C,0x44,0x45,0x7C,0x40,0x40,0x00},/*"蓝",21*/
{0x40,0x44,0x24,0x14,0xFF,0x14,0x24,0x40,0x24,0x14,0xFF,0x0C,0x14,0x24,0x40,0x00},
{0x00,0x02,0x82,0x92,0x9B,0x56,0x63,0x22,0x32,0x4A,0x47,0x42,0x82,0x02,0x00,0x00},/*"婪",22*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x20,0x22,0x2C,0x20,0x20,0x28,0x26,0x20,0x20,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x40,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x40,0x00},/*"栏",23*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x22,0x2C,0x20,0x20,0x28,0x26,0x20,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x40,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x40,0x00},/*"拦",24*/
{0x08,0x04,0xE3,0x02,0x06,0xFA,0x02,0x0A,0xF4,0x43,0xC2,0x46,0x4A,0x42,0x02,0x00},
{0x40,0x40,0x7D,0x44,0x44,0x7D,0x44,0x45,0x44,0x7C,0x44,0x45,0x7C,0x40,0x40,0x00},/*"篮",25*/
{0x00,0xF8,0x01,0xD2,0x50,0x52,0x52,0xFE,0x52,0x52,0x52,0xD2,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x27,0x14,0x0D,0x06,0xFF,0x06,0x0D,0x34,0x07,0x80,0xFF,0x00,0x00},/*"阑",26*/
{0x00,0x20,0x20,0x21,0x22,0x2C,0x20,0x20,0x20,0x28,0x24,0x23,0x20,0x20,0x00,0x00},
{0x40,0x40,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x40,0x40,0x00},/*"兰",27*/
{0x10,0x60,0x02,0x8C,0x00,0xFC,0x01,0xD6,0x50,0xFA,0x52,0xD2,0x02,0xFE,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0xFF,0x00,0x2F,0x1A,0xFF,0x19,0x2F,0x80,0xFF,0x00,0x00},/*"澜",28*/
{0x40,0x42,0xCC,0x00,0x00,0xFC,0x01,0xD6,0x50,0xFA,0x52,0xD2,0x02,0xFE,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0xFF,0x00,0x2F,0x1A,0xFF,0x19,0x2F,0x80,0xFF,0x00,0x00},/*"谰",29*/
{0x10,0x10,0x10,0xFF,0x90,0x40,0x1E,0xC0,0x7F,0x50,0x48,0x47,0x4C,0xD4,0x04,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x80,0x80,0x4F,0x20,0x18,0x07,0x78,0x80,0x8F,0xC0,0x00},/*"揽",30*/
{0x00,0x00,0x1E,0xC0,0x40,0x7F,0x40,0x50,0x48,0x47,0x44,0xCC,0x14,0x04,0x00,0x00},
{0x00,0x80,0x80,0x4F,0x40,0x20,0x18,0x07,0x78,0x80,0x80,0x8F,0x80,0xE0,0x00,0x00},/*"览",31*/
{0xE0,0x00,0xFF,0x10,0xE4,0x24,0xFF,0x24,0xE4,0x10,0xE8,0x27,0xB4,0x2C,0xE0,0x00},
{0x01,0x00,0xFF,0x10,0x09,0x05,0xFF,0x05,0x19,0x80,0x4F,0x20,0x1F,0x20,0xCF,0x00},/*"懒",32*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x1E,0xC0,0x7F,0x50,0x48,0x47,0x4C,0xD4,0x04,0x00},
{0x22,0x67,0x22,0x12,0x12,0x80,0x80,0x4F,0x20,0x18,0x07,0x78,0x80,0x8F,0xC0,0x00},/*"缆",33*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0x20,0x22,0x2C,0x20,0x20,0x28,0x26,0x20,0x20,0x00},
{0x80,0x60,0x18,0x07,0x08,0x10,0x40,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x40,0x00},/*"烂",34*/
{0x10,0x60,0x02,0x8C,0x00,0x7E,0x00,0x00,0xFF,0x40,0x30,0x0F,0x14,0x64,0x04,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x7E,0x42,0x42,0x7E,0x42,0x7E,0x42,0x42,0x7E,0x40,0x00},/*"滥",35*/
{0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xFC,0x24,0x25,0x26,0x24,0x24,0xFC,0x00,0x00},
{0x20,0x60,0x20,0x1F,0x10,0x10,0x00,0xFF,0x41,0x21,0x07,0x09,0x11,0x29,0x44,0x00},/*"琅",36*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0xFC,0x25,0x26,0xFC,0x00,0xFE,0x42,0xB2,0x0E,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x7F,0x21,0x15,0x39,0x00,0xFF,0x08,0x10,0x0F,0x00},/*"榔",37*/
{0x40,0x22,0x14,0x08,0xF4,0x02,0x00,0xFC,0x24,0x25,0x26,0x24,0x24,0xFC,0x00,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x00,0xFF,0x41,0x21,0x07,0x09,0x11,0x29,0x44,0x00},/*"狼",38*/
{0x00,0x00,0xFC,0x04,0xE4,0xA4,0xAC,0xB5,0xE6,0x04,0xE4,0x24,0x24,0xA4,0x64,0x00},
{0x80,0x60,0x1F,0x00,0x7F,0x22,0x16,0x0A,0x33,0x00,0xFF,0x00,0x11,0x22,0x1C,0x00},/*"廊",39*/
{0x00,0x00,0xFC,0x24,0x25,0x26,0x24,0xFC,0x00,0x00,0xFE,0x02,0x22,0xDA,0x06,0x00},
{0x00,0x00,0xFF,0x41,0x21,0x15,0x09,0x31,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00},/*"郎",40*/
{0x00,0xFC,0x24,0x25,0x26,0x24,0xFC,0x00,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x00,0x7F,0x21,0x11,0x15,0x09,0xB1,0x40,0x30,0x0F,0x02,0x42,0x82,0x7F,0x00,0x00},/*"朗",41*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xFC,0x24,0x25,0x26,0x24,0x24,0xFC,0x00,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x00,0xFF,0x41,0x21,0x07,0x09,0x11,0x29,0x44,0x40,0x00},/*"浪",42*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x64,0x24,0x2F,0xA4,0x24,0x24,0x2F,0xA4,0x64,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x42,0x22,0x1A,0x07,0x42,0x82,0x42,0x3E,0x00,0x00},/*"捞",43*/
{0x84,0x64,0x24,0x24,0x2F,0x24,0xE4,0x24,0x24,0x24,0x2F,0x24,0x24,0xA4,0x64,0x00},
{0x00,0x00,0x81,0x41,0x21,0x19,0x07,0x01,0x41,0x81,0x41,0x3F,0x00,0x00,0x00,0x00},/*"劳",44*/
{0x10,0x0C,0x04,0xE4,0x84,0x84,0x85,0xF6,0x84,0x84,0x84,0x84,0x84,0x14,0x0C,0x00},
{0x08,0x0A,0x09,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},/*"牢",45*/
{0x20,0x20,0x24,0x24,0x24,0x24,0xBF,0x64,0x24,0x34,0x28,0x24,0x22,0x20,0x20,0x00},
{0x10,0x08,0x04,0x02,0x3F,0x45,0x44,0x44,0x42,0x42,0x42,0x41,0x78,0x00,0x00,0x00},/*"老",46*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x48,0x48,0x48,0xFF,0x48,0x68,0x50,0x4C,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x10,0x08,0x04,0x02,0x3F,0x48,0x48,0x44,0x44,0x42,0x70,0x00},/*"佬",47*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x40,0x48,0x48,0xFF,0x48,0x68,0x50,0x4C,0x40,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x04,0x02,0x3F,0x48,0x48,0x44,0x44,0x42,0x70,0x00},/*"姥",48*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0x10,0x88,0x57,0x24,0x54,0x8C,0x00,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x01,0xFE,0x42,0x42,0x42,0xFE,0x01,0x00},/*"酪",0*/
{0x80,0x70,0x00,0xFF,0x10,0x28,0x10,0x18,0xA7,0x44,0xA4,0x14,0x0C,0x00,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0x34,0x02,0xFD,0x44,0x44,0x44,0x45,0xFD,0x02,0x02,0x00},/*"烙",1*/
{0x10,0x60,0x02,0xCC,0x80,0x64,0x24,0x2F,0xA4,0x24,0x24,0x24,0x2F,0xA4,0x64,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x42,0x22,0x1A,0x07,0x02,0x42,0x82,0x42,0x3E,0x00,0x00},/*"涝",2*/
{0x04,0xC4,0x5F,0x54,0xF4,0x54,0x5F,0xC4,0x14,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x08,0x0B,0x0A,0x0A,0xFF,0x0A,0x8A,0x4B,0x28,0x18,0x47,0x80,0x40,0x3F,0x00,0x00},/*"勒",3*/
{0x00,0x00,0xE0,0x9C,0x84,0x84,0x84,0xF4,0x82,0x82,0x83,0x82,0x80,0x80,0x00,0x00},
{0x00,0x20,0x10,0x08,0x06,0x40,0x80,0x7F,0x00,0x00,0x02,0x04,0x08,0x30,0x00,0x00},/*"乐",4*/
{0x20,0x18,0x0A,0xAA,0xAA,0xAA,0x0A,0xFE,0x0A,0xAA,0xAA,0xAA,0x0A,0x28,0x18,0x00},
{0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},/*"雷",5*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x18,0xAA,0xAA,0x0A,0xFE,0x0A,0xAA,0xAA,0x18,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00},/*"镭",6*/
{0x82,0x62,0x2A,0xAA,0xAF,0xAA,0x2A,0xFA,0x2A,0xAA,0xAF,0xAA,0x2A,0xA2,0x62,0x00},
{0x00,0x00,0xF8,0xAA,0xAA,0xAA,0xA8,0xFB,0xA8,0xAA,0xAA,0xAA,0xF8,0x00,0x00,0x00},/*"蕾",7*/
{0x40,0x21,0x11,0x09,0x7D,0x4B,0x49,0x49,0x49,0x49,0x49,0x79,0x01,0x01,0x00,0x00},
{0x10,0x09,0xFD,0x4B,0x49,0x49,0xF9,0x10,0x09,0xFD,0x4B,0x49,0x49,0xF9,0x01,0x00},/*"磊",8*/
{0x00,0x00,0x3E,0x2A,0x2A,0xAA,0x6A,0x3E,0x2A,0x2A,0xAA,0x2A,0x3E,0x00,0x00,0x00},
{0x00,0x80,0x48,0x29,0x09,0x4D,0x8D,0x7B,0x0B,0x09,0x28,0x4C,0x98,0x00,0x00,0x00},/*"累",9*/
{0x80,0x60,0xF8,0x07,0x00,0x00,0x7F,0x49,0x49,0x7F,0x49,0x49,0x7F,0x00,0x00,0x00},
{0x00,0x00,0xFF,0x00,0xFF,0x49,0x7F,0x49,0xFF,0x00,0xFF,0x49,0x7F,0x49,0xFF,0x00},/*"儡",10*/
{0x00,0x80,0xC8,0xAC,0x9A,0xC9,0x88,0x08,0x88,0xC8,0xAA,0x9C,0xC8,0x80,0x00,0x00},
{0x40,0x40,0x48,0x48,0x48,0x48,0x49,0x7E,0x48,0x48,0x48,0x48,0x48,0x41,0x40,0x00},/*"垒",11*/
{0x10,0x10,0xFF,0x10,0x98,0x0A,0xAA,0xAA,0x0A,0xFE,0x0A,0xAA,0xAA,0x0A,0x18,0x00},
{0x42,0x82,0x7F,0x01,0x00,0xFE,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0xFE,0x00,0x00},/*"擂",12*/
{0x00,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00},
{0x80,0x60,0x1F,0x02,0x42,0x82,0x7F,0x80,0x60,0x1C,0x03,0x40,0x80,0x40,0x3F,0x00},/*"肋",13*/
{0x00,0x10,0x10,0x92,0x54,0x30,0x10,0xFF,0x10,0x30,0x54,0x92,0x10,0x10,0x00,0x00},
{0x84,0x85,0x45,0x44,0x24,0x14,0x0C,0x06,0x0C,0x14,0x24,0x44,0x45,0x84,0x84,0x00},/*"类",14*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xFE,0x22,0x22,0x22,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x00,0xFF,0x42,0x42,0x42,0x42,0x42,0x42,0xFF,0x00,0x00},/*"泪",15*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x20,0xA4,0x64,0xA4,0x3F,0x24,0x64,0xA4,0x20,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x83,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"棱",16*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x3E,0x22,0x7E,0xA2,0x22,0x3E,0x22,0x3E,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x83,0x41,0x31,0x0F,0x05,0x45,0x85,0x7D,0x01,0x01,0x00},/*"楞",17*/
{0x00,0x02,0x0C,0xC0,0x00,0x40,0x20,0x10,0x0C,0x23,0xCC,0x10,0x20,0x40,0x40,0x00},
{0x02,0x02,0x7F,0x00,0x00,0x00,0x01,0x09,0x11,0x21,0xD1,0x0D,0x03,0x00,0x00,0x00},/*"冷",18*/
{0x00,0x00,0xFE,0x02,0x02,0xFA,0x4A,0x4A,0x4A,0xFA,0x4A,0x4A,0x4A,0xFA,0x02,0x00},
{0x80,0x60,0x1F,0x00,0x80,0x93,0x92,0x92,0x92,0xFF,0x92,0x92,0x92,0x93,0x80,0x00},/*"厘",19*/
{0x00,0x88,0x4A,0x2A,0x1A,0xFE,0x29,0x49,0x00,0x3C,0x80,0x00,0xFF,0x00,0x00,0x00},
{0x44,0x44,0x24,0x24,0x14,0x0D,0x04,0xFF,0x04,0x0C,0x14,0x25,0x24,0x44,0x44,0x00},/*"梨",20*/
{0x00,0x88,0x4A,0x2A,0x1A,0xFE,0x29,0x49,0x00,0x3C,0x80,0x00,0xFF,0x00,0x00,0x00},
{0x20,0x20,0x28,0x26,0x24,0x25,0x24,0xFF,0x24,0x24,0x24,0x25,0x24,0x20,0x20,0x00},/*"犁",21*/
{0x00,0x48,0x2A,0x1A,0x7E,0x19,0xA9,0x40,0xA4,0x13,0x0A,0x26,0x42,0x3E,0x00,0x00},
{0x04,0x04,0x42,0x22,0x15,0x49,0x80,0x7E,0x00,0x09,0x15,0x22,0x42,0x04,0x04,0x00},/*"黎",22*/
{0x28,0x24,0x23,0xA2,0x26,0x6A,0xA2,0xAA,0xB4,0x63,0x22,0xA6,0x2A,0x22,0x22,0x00},
{0x00,0xF8,0x08,0x0B,0x2A,0x7B,0x2A,0x2E,0x2A,0x3B,0x6A,0x0B,0x88,0xF8,0x00,0x00},/*"篱",23*/
{0x40,0x22,0x14,0x08,0xF4,0x02,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"狸",24*/
{0x04,0x04,0x04,0xF4,0x84,0xD4,0xA5,0xA6,0xA4,0xD4,0x84,0xF4,0x04,0x04,0x04,0x00},
{0x00,0xFE,0x02,0x02,0x12,0x3A,0x16,0x13,0x12,0x1A,0x32,0x42,0x82,0x7E,0x00,0x00},/*"离",25*/
{0x10,0x60,0x02,0x8C,0x00,0x04,0xF4,0x84,0xD5,0xA6,0xD4,0x84,0xF4,0x04,0x04,0x00},
{0x04,0x04,0x7E,0x01,0x00,0xFE,0x02,0x1A,0x16,0x13,0x1A,0x32,0x82,0xFE,0x00,0x00},/*"漓",26*/
{0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00},
{0x20,0x60,0x20,0x1F,0x10,0x10,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"理",27*/
{0x80,0x84,0x44,0x44,0x24,0x14,0x0C,0xFF,0x0C,0x14,0x24,0x44,0x44,0x84,0x80,0x00},
{0x08,0x08,0x08,0x08,0x09,0x49,0x89,0x79,0x0D,0x0B,0x09,0x08,0x08,0x08,0x08,0x00},/*"李",28*/
{0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x40,0x40,0x44,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},/*"里",29*/
{0x10,0xEC,0x27,0xE4,0x34,0xEC,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00},
{0x40,0xCF,0x49,0x2F,0x29,0x2F,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"鲤",30*/
{0x08,0x08,0x89,0xEE,0x98,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x03,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x78,0x00,0x00},/*"礼",31*/
{0x04,0x44,0x44,0x44,0xC4,0x2F,0x24,0x04,0x04,0x8F,0x04,0x04,0xE4,0x04,0x04,0x00},
{0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x00,0x1F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"莉",32*/
{0x02,0x82,0x92,0x52,0x57,0x32,0x1E,0x12,0x52,0x92,0x57,0x32,0x02,0x02,0x02,0x00},
{0x80,0x44,0x34,0x0F,0x44,0x84,0x7C,0x80,0x44,0x34,0x0F,0x44,0x84,0x7C,0x00,0x00},/*"荔",33*/
{0x04,0x04,0xE4,0x24,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x00},
{0x80,0x80,0x83,0x46,0x4A,0x32,0x12,0x2F,0x22,0x42,0x42,0x42,0x83,0x80,0x80,0x00},/*"吏",34*/
{0x00,0x02,0xF2,0x92,0x92,0xFE,0x92,0x92,0x92,0xFE,0x92,0x92,0xF2,0x02,0x00,0x00},
{0x44,0x44,0x24,0x24,0x14,0x0C,0x04,0xFF,0x04,0x0C,0x14,0x24,0x24,0x44,0x44,0x00},/*"栗",35*/
{0x02,0x02,0xF2,0x12,0x12,0x12,0xF2,0x02,0xF2,0x12,0x12,0x12,0xF2,0x02,0x02,0x00},
{0x00,0x00,0xFF,0x01,0x46,0x80,0x7F,0x00,0xFF,0x01,0x46,0x80,0x7F,0x00,0x00,0x00},/*"丽",36*/
{0x00,0x00,0xFE,0x02,0x12,0x12,0x12,0xF2,0x92,0x92,0x92,0x92,0x92,0x12,0x12,0x00},
{0x80,0x60,0x1F,0x80,0x40,0x20,0x18,0x07,0x00,0x40,0x80,0x40,0x3F,0x00,0x00,0x00},/*"厉",37*/
{0x00,0xFE,0x02,0x12,0xF2,0x92,0x92,0x92,0x02,0x12,0x10,0xFF,0x10,0x10,0xF0,0x00},
{0x40,0x3F,0x80,0x60,0x1F,0x40,0x80,0x7F,0x00,0x80,0x60,0x1F,0x40,0x80,0x7F,0x00},/*"励",38*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0xFC,0x84,0x84,0xF4,0x82,0x83,0x82,0x80,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x20,0x10,0x4C,0x80,0x7F,0x00,0x04,0x08,0x30,0x00},/*"砾",39*/
{0x00,0x00,0xFE,0x02,0x42,0x42,0x42,0x42,0xFA,0x42,0x42,0x42,0x42,0xC2,0x02,0x00},
{0x80,0x60,0x1F,0x80,0x40,0x20,0x18,0x06,0x01,0x00,0x40,0x80,0x40,0x3F,0x00,0x00},/*"历",40*/
{0x40,0x44,0x44,0x44,0xC4,0xFE,0x42,0x43,0x42,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x20,0x10,0x0C,0x03,0x00,0xFF,0x01,0x02,0x04,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"利",41*/
{0x80,0x60,0xF8,0x07,0x00,0xF2,0x92,0x92,0xFE,0x92,0xFE,0x92,0x92,0xF2,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x40,0x44,0x24,0x14,0x0C,0xFF,0x0C,0x14,0x24,0x44,0x40,0x00},/*"傈",42*/
{0x80,0x60,0xF8,0x07,0x00,0x84,0x7C,0x24,0x24,0xE4,0x00,0xF8,0x00,0xFF,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x84,0x43,0x21,0x12,0x0C,0x03,0x00,0x4F,0x80,0x7F,0x00,0x00},/*"例",43*/
{0x80,0x60,0xF8,0x07,0x40,0x44,0x44,0xFE,0x43,0x42,0x00,0xF8,0x00,0xFF,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x10,0x0C,0x03,0xFF,0x02,0x04,0x00,0x47,0x80,0x7F,0x00,0x00},/*"俐",44*/
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