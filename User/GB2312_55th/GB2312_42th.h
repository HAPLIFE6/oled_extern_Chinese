/*第六区
42 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 省 盛 剩 胜 圣 师 失 狮 施
１ 湿 诗 尸 虱 十 石 拾 时 什 食
２ 蚀 实 识 史 矢 使 屎 驶 始 式
３ 示 士 世 柿 事 拭 誓 逝 势 是
４ 嗜 噬 适 仕 侍 释 饰 氏 市 恃
５ 室 视 试 收 手 首 守 寿 授 售
６ 受 瘦 兽 蔬 枢 梳 殊 抒 输 叔
７ 舒 淑 疏 书 赎 孰 熟 薯 暑 曙
８ 署 蜀 黍 鼠 属 术 述 树 束 戍
９ 竖 墅 庶 数 漱
42 th           0x014500-0x01517f               83200-86399
*/
//省 盛 剩 胜 圣 师 失 狮 施 湿 诗 尸 虱 十 石 拾 时 什 食 蚀 实 识 史 矢 使 屎 驶 始 式 示 士 世 柿 事 拭 誓 逝 势 是 嗜 噬 适 仕 侍 释 饰 氏 市 恃
//室 视 试 收 手 首 守 寿 授 售 受 瘦 兽 蔬 枢 梳 殊 抒 输 叔 舒 淑 疏 书 赎 孰 熟 薯 暑 曙 署 蜀 黍 鼠 属 术 述 树 束 戍 竖 墅 庶 数 漱
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x014500
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x10,0x88,0x86,0xC0,0xC0,0xA0,0xAF,0x90,0x90,0x88,0x82,0x84,0x08,0x00,0x00},
{0x01,0x01,0x00,0xFF,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0xFF,0x00,0x00,0x00},/*"省",0*/
{0x00,0x00,0xFC,0x24,0x24,0x24,0xE4,0x04,0x1F,0x64,0x84,0x45,0x36,0x84,0x00,0x00},
{0x44,0x43,0x78,0x48,0x49,0x7A,0x49,0x4C,0x4A,0x79,0x48,0x49,0x7A,0x47,0x40,0x00},/*"盛",1*/
{0x48,0x4A,0xFA,0x0A,0xFE,0x09,0xF9,0x49,0xA8,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00},
{0x22,0x11,0x0B,0x04,0xFF,0x04,0x09,0x12,0x23,0x00,0x00,0x0F,0x40,0x80,0x7F,0x00},/*"剩",2*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x40,0x3C,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x40,0x42,0x42,0x42,0x7F,0x42,0x42,0x42,0x40,0x00},/*"胜",3*/
{0x00,0x00,0x02,0x82,0x86,0x4A,0x52,0x22,0x52,0x4A,0x86,0x82,0x00,0x00,0x00,0x00},
{0x01,0x41,0x41,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x41,0x41,0x01,0x00},/*"圣",4*/
{0x00,0xFC,0x00,0x00,0xFF,0x00,0x02,0xE2,0x22,0x22,0xFE,0x22,0x22,0xE2,0x02,0x00},
{0x00,0x87,0x40,0x30,0x0F,0x00,0x00,0x1F,0x00,0x00,0xFF,0x08,0x10,0x0F,0x00,0x00},/*"师",5*/
{0x00,0x40,0x30,0x1E,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00},
{0x81,0x81,0x41,0x21,0x11,0x0D,0x03,0x01,0x03,0x0D,0x11,0x21,0x41,0x81,0x81,0x00},/*"失",6*/
{0x22,0x14,0x08,0xF4,0x02,0xF8,0x00,0xFF,0x02,0xF2,0x12,0xFE,0x12,0xF2,0x02,0x00},
{0x44,0x82,0x41,0x3F,0x80,0x47,0x30,0x0F,0x00,0x1F,0x00,0xFF,0x10,0x1F,0x00,0x00},/*"狮",7*/
{0x10,0x10,0xF1,0x96,0x90,0x90,0x10,0xE8,0x07,0x84,0xFC,0x84,0x44,0xC4,0x04,0x00},
{0x80,0x60,0x1F,0x40,0x80,0x7F,0x01,0x3F,0x41,0x40,0x5F,0x44,0x48,0x47,0x78,0x00},/*"施",8*/
{0x10,0x60,0x02,0x8C,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x44,0x48,0x50,0x7F,0x40,0x40,0x7F,0x50,0x48,0x44,0x40,0x00},/*"湿",9*/
{0x40,0x40,0x42,0xCC,0x00,0x40,0x48,0x48,0x48,0x7F,0x48,0xC8,0x48,0x48,0x40,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x12,0x0A,0x32,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00},/*"诗",10*/
{0x00,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00},
{0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"尸",11*/
{0x00,0x12,0xD2,0x52,0x52,0xF2,0x4A,0x4A,0xCE,0x0A,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x40,0xC7,0x44,0x44,0x3F,0x24,0x24,0x37,0x60,0x00,0x0F,0x30,0x40,0xF8,0x00},/*"虱",12*/
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"十",13*/
{0x02,0x02,0x02,0x02,0xC2,0xB2,0x8E,0x82,0x82,0x82,0x82,0x82,0x82,0x02,0x02,0x00},
{0x08,0x04,0x02,0x01,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x00,0x00,0x00},/*"石",14*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x50,0x48,0x44,0x43,0x44,0x48,0x50,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"拾",15*/
{0x00,0xFC,0x84,0x84,0x84,0xFC,0x00,0x10,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x00},
{0x00,0x3F,0x10,0x10,0x10,0x3F,0x00,0x00,0x01,0x06,0x40,0x80,0x7F,0x00,0x00,0x00},/*"时",16*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"什",17*/
{0x20,0x20,0x10,0xF0,0xA8,0xA4,0xAA,0xB1,0xA2,0xA4,0xA8,0xF0,0x10,0x20,0x20,0x00},
{0x00,0x00,0x00,0xFF,0x82,0x42,0x22,0x0A,0x0A,0x12,0x12,0x2B,0x44,0x80,0x00,0x00},/*"食",18*/
{0x40,0x30,0xCF,0x08,0x28,0x18,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0x20,0x63,0x21,0x21,0x3F,0x21,0x29,0x33,0x60,0x00},/*"蚀",19*/
{0x10,0x0C,0x04,0x84,0x14,0x64,0x05,0x06,0xF4,0x04,0x04,0x04,0x04,0x14,0x0C,0x00},
{0x04,0x84,0x84,0x44,0x47,0x24,0x14,0x0C,0x07,0x0C,0x14,0x24,0x44,0x84,0x04,0x00},/*"实",20*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x88,0x40,0x23,0x19,0x01,0x01,0x09,0x11,0x23,0xC0,0x00},/*"识",21*/
{0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0xF8,0x00,0x00,0x00},
{0x80,0x80,0x81,0x44,0x48,0x30,0x10,0x2F,0x20,0x40,0x40,0x40,0x81,0x80,0x80,0x00},/*"史",22*/
{0x00,0x40,0x20,0x18,0x0F,0x08,0x08,0xF8,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00},
{0x81,0x81,0x41,0x41,0x21,0x11,0x0D,0x03,0x0D,0x11,0x21,0x41,0x41,0x81,0x81,0x00},/*"矢",23*/
{0x80,0x60,0xF8,0x07,0x04,0xE4,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0xE4,0x04,0x00},
{0x00,0x00,0xFF,0x00,0x80,0x81,0x45,0x29,0x11,0x2F,0x41,0x41,0x81,0x81,0x80,0x00},/*"使",24*/
{0x00,0x00,0xFE,0x12,0x12,0x52,0x92,0x12,0xF2,0x12,0x92,0x52,0x12,0x1E,0x00,0x00},
{0x80,0x60,0x1F,0x42,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x42,0x40,0x00},/*"屎",25*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x80,0x41,0x25,0x19,0x1F,0x21,0x41,0x81,0x80,0x00},/*"驶",26*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x40,0xE0,0x58,0x47,0x40,0x50,0x60,0xC0,0x00},
{0x40,0x22,0x15,0x08,0x16,0x21,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"始",27*/
{0x10,0x10,0x90,0x90,0x90,0x90,0x90,0x10,0x10,0xFF,0x10,0x10,0x11,0x16,0x10,0x00},
{0x00,0x20,0x60,0x20,0x3F,0x10,0x10,0x10,0x00,0x03,0x0C,0x10,0x20,0x40,0xF8,0x00},/*"式",28*/
{0x40,0x40,0x42,0x42,0x42,0x42,0x42,0xC2,0x42,0x42,0x42,0x42,0x42,0x40,0x40,0x00},
{0x20,0x10,0x08,0x06,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x02,0x04,0x08,0x30,0x00},/*"示",29*/
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00},
{0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00},/*"士",30*/
{0x20,0x20,0x20,0xFE,0x20,0x20,0xFF,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0x00},
{0x00,0x00,0x00,0x7F,0x40,0x40,0x47,0x44,0x44,0x44,0x47,0x40,0x40,0x40,0x00,0x00},/*"世",31*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x08,0xC8,0x48,0x49,0xFA,0x48,0x48,0xC8,0x08,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0x3F,0x00,0x00,0xFF,0x10,0x20,0x1F,0x00,0x00},/*"柿",32*/
{0x04,0x04,0x74,0x54,0x54,0x54,0x54,0xFF,0x54,0x54,0x54,0x54,0x74,0x04,0x04,0x00},
{0x04,0x04,0x15,0x15,0x15,0x55,0x95,0x7F,0x15,0x15,0x15,0x15,0x1F,0x04,0x04,0x00},/*"事",33*/
{0x10,0x10,0x10,0xFF,0x90,0x40,0x90,0x90,0x90,0x10,0xFF,0x10,0x11,0x16,0x10,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x20,0x60,0x3F,0x10,0x10,0x01,0x0E,0x30,0x40,0xF0,0x00},/*"拭",34*/
{0x00,0x92,0x92,0xD2,0xFF,0x8A,0xAA,0xC0,0xBE,0x8A,0x8A,0x8A,0xF9,0x89,0x08,0x00},
{0x00,0x00,0xEA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xEA,0x00,0x00,0x00},/*"誓",35*/
{0x40,0x42,0xCC,0x00,0x10,0x10,0xFF,0x90,0x50,0xFC,0x24,0x22,0xE3,0x22,0x20,0x00},
{0x40,0x20,0x1F,0x20,0x49,0x51,0x4F,0x60,0x50,0x4F,0x40,0x40,0x5F,0x40,0x40,0x00},/*"逝",36*/
{0x00,0x44,0x44,0x24,0xFF,0x14,0x00,0x24,0xA4,0x7F,0x84,0x04,0xFC,0x00,0xC0,0x00},
{0x00,0x88,0x89,0x4A,0x29,0x18,0x0E,0x0A,0x09,0x48,0x88,0x48,0x38,0x01,0x03,0x00},/*"势",37*/
{0x00,0x00,0x00,0x7F,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00,0x00},
{0x81,0x41,0x21,0x1D,0x21,0x41,0x81,0xFF,0x89,0x89,0x89,0x89,0x89,0x81,0x81,0x00},/*"是",38*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x10,0x94,0xD4,0x7F,0x54,0x5C,0x54,0x12,0x90,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x02,0x01,0xFC,0x54,0x55,0x55,0x55,0x55,0xFD,0x01,0x00},/*"嗜",39*/
{0xFC,0x04,0x04,0xFC,0x10,0x48,0x47,0x4C,0x54,0xC4,0x48,0x47,0x4C,0x54,0x04,0x00},
{0x0F,0x04,0x04,0x0F,0x50,0x48,0x47,0x48,0x50,0x7F,0x50,0x48,0x47,0x48,0x50,0x00},/*"噬",40*/
{0x40,0x40,0x42,0xCC,0x00,0x10,0x92,0x92,0x92,0xFF,0x91,0x91,0x91,0x10,0x10,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x5F,0x48,0x48,0x48,0x48,0x48,0x5F,0x40,0x40,0x00},/*"适",41*/
{0x00,0x80,0x60,0xF8,0x27,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0x20,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,0x20,0x00,0x00},/*"仕",42*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x48,0x48,0x48,0x7F,0x48,0xC8,0x48,0x48,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x02,0x0A,0x32,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00},/*"侍",43*/
{0x42,0x4A,0x52,0xFE,0x51,0x49,0x82,0x86,0x4A,0x52,0xA2,0x52,0x4A,0x86,0x80,0x00},
{0x10,0x0C,0x03,0xFF,0x02,0x04,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"释",44*/
{0x40,0x30,0x8F,0x08,0x28,0x18,0x20,0x90,0x8F,0x88,0xF8,0x88,0x88,0x88,0x08,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x08,0x00,0x3F,0x00,0x00,0xFF,0x10,0x20,0x1F,0x00,0x00},/*"饰",45*/
{0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x44,0xFE,0x42,0x42,0x43,0x42,0x40,0x40,0x00},
{0x00,0x00,0xFF,0x40,0x20,0x00,0x00,0x00,0x01,0x06,0x08,0x10,0x20,0x40,0xF8,0x00},/*"氏",46*/
{0x00,0x08,0x88,0x88,0x88,0x88,0x89,0xFA,0x88,0x88,0x88,0x88,0x88,0x08,0x00,0x00},
{0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x10,0x20,0x1F,0x00,0x00,0x00},/*"市",47*/
{0x80,0x70,0x00,0xFF,0x08,0x50,0x48,0x48,0x48,0x7F,0x48,0xC8,0x48,0x48,0x40,0x00},
{0x00,0x00,0x00,0xFF,0x00,0x02,0x0A,0x32,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00},/*"恃",48*/
{0x10,0x0C,0x24,0x24,0xA4,0x64,0x25,0x26,0x24,0x24,0xA4,0x24,0x24,0x14,0x0C,0x00},
{0x40,0x40,0x48,0x49,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x4B,0x48,0x40,0x40,0x00},/*"室",0*/
{0x08,0x08,0x89,0xEE,0x98,0x00,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x83,0x40,0x23,0x18,0x06,0x01,0x7E,0x80,0x83,0xE0,0x00},/*"视",1*/
{0x40,0x40,0x42,0xCC,0x00,0x90,0x90,0x90,0x90,0x90,0xFF,0x10,0x11,0x16,0x10,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x28,0x60,0x3F,0x10,0x10,0x01,0x0E,0x30,0x40,0xF0,0x00},/*"试",2*/
{0x00,0xFC,0x00,0x00,0xFF,0x00,0x40,0x20,0xD8,0x17,0x10,0x10,0xF0,0x10,0x10,0x00},
{0x00,0x0F,0x04,0x02,0xFF,0x00,0x80,0x40,0x21,0x16,0x08,0x16,0x21,0x40,0x80,0x00},/*"收",3*/
{0x00,0x00,0x24,0x24,0x24,0x24,0x24,0xFC,0x22,0x22,0x22,0x23,0x22,0x00,0x00,0x00},
{0x02,0x02,0x02,0x02,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},/*"手",4*/
{0x04,0x04,0xE4,0x25,0x26,0x34,0x2C,0x24,0x24,0x24,0x26,0x25,0xE4,0x04,0x04,0x00},
{0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"首",5*/
{0x90,0x8C,0x84,0x84,0x84,0x84,0x85,0x86,0x84,0xF4,0x84,0x84,0x84,0x94,0x8C,0x00},
{0x00,0x00,0x00,0x04,0x18,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},/*"守",6*/
{0x40,0x44,0x54,0x54,0xD4,0x74,0x5F,0x54,0x54,0x54,0xD4,0x54,0x54,0x44,0x40,0x00},
{0x20,0x10,0x08,0x06,0x03,0x0A,0x32,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00,0x00},/*"寿",7*/
{0x10,0x10,0x10,0xFF,0x10,0xD0,0x4A,0x72,0x46,0x5A,0x42,0x61,0x51,0x4D,0xC0,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x82,0x4E,0x52,0x22,0x52,0x4A,0x86,0x80,0x80,0x00},/*"授",8*/
{0x20,0x10,0x08,0xFC,0x57,0x54,0x54,0x55,0xFE,0x54,0x54,0x54,0x54,0x04,0x00,0x00},
{0x00,0x00,0x00,0xFB,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xF9,0x01,0x00,0x00},/*"售",9*/
{0x80,0x64,0x2C,0x34,0x24,0x24,0x2C,0x32,0x22,0x22,0x32,0x2E,0x23,0xA2,0x60,0x00},
{0x80,0x80,0x41,0x43,0x25,0x29,0x11,0x11,0x11,0x29,0x25,0x43,0x40,0x80,0x80,0x00},/*"受",10*/
{0x10,0x60,0x00,0xFC,0x04,0xF4,0x54,0x4C,0x05,0xFE,0x04,0x54,0x54,0xF4,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x80,0x85,0x4D,0x55,0x25,0x27,0x25,0x55,0x4D,0x85,0x80,0x00},/*"瘦",11*/
{0x00,0x00,0x7C,0x54,0x55,0x56,0x54,0x7C,0x54,0x56,0x55,0x54,0x7C,0x00,0x00,0x00},
{0x01,0x01,0x01,0xFD,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0xFD,0x01,0x01,0x01,0x00},/*"兽",12*/
{0x02,0x92,0x12,0xD2,0x57,0x32,0x02,0x92,0x92,0xD2,0xB7,0x9A,0xD2,0x92,0x92,0x00},
{0x40,0x7F,0x20,0x3F,0x12,0x92,0x40,0x30,0x0E,0x00,0x7E,0x00,0x7E,0x80,0xF1,0x00},/*"蔬",13*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0xFE,0x02,0x12,0x62,0x82,0x62,0x1A,0x02,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x7F,0x50,0x48,0x46,0x41,0x46,0x58,0x40,0x40,0x00},/*"枢",14*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x44,0x64,0x54,0x4D,0x46,0x54,0x64,0xC4,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x80,0x41,0x30,0x0F,0x00,0x7F,0x00,0x7F,0x80,0x80,0xE0,0x00},/*"梳",15*/
{0x04,0xC4,0x3C,0x24,0x24,0xE4,0xA0,0x9E,0x88,0x88,0xFF,0x88,0x88,0x88,0x80,0x00},
{0x82,0x41,0x21,0x12,0x0C,0x03,0x20,0x18,0x06,0x01,0xFF,0x01,0x06,0x18,0x20,0x00},/*"殊",16*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x40,0x42,0x42,0x4A,0xD2,0x6A,0x46,0x40,0xC0,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x01,0x00,0x00},/*"抒",17*/
{0x88,0x68,0x1F,0xC8,0x08,0x10,0xC8,0x54,0x52,0xD1,0x12,0x94,0x08,0xD0,0x10,0x00},
{0x09,0x19,0x09,0xFF,0x05,0x00,0xFF,0x12,0x92,0xFF,0x00,0x5F,0x80,0x7F,0x00,0x00},/*"输",18*/
{0x40,0x40,0x40,0x40,0x7F,0x44,0x44,0x40,0x04,0x7C,0x84,0x04,0x84,0x7C,0x00,0x00},
{0x10,0x0C,0x40,0x80,0x7F,0x00,0x04,0x98,0x40,0x20,0x13,0x0C,0x33,0x40,0x80,0x00},/*"叔",19*/
{0x10,0x28,0x24,0xE3,0x24,0x28,0x50,0x42,0x42,0x4A,0xD2,0x6A,0x46,0x40,0xC0,0x00},
{0x01,0xF9,0x49,0x4F,0x49,0xF9,0x01,0x00,0x40,0x80,0x7F,0x00,0x00,0x01,0x00,0x00},/*"舒",20*/
{0x10,0x60,0x02,0x8C,0x00,0x40,0x40,0x7F,0x44,0x44,0x00,0xFC,0x04,0xFC,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x10,0x4C,0x80,0x7F,0x04,0x18,0x80,0x63,0x1C,0x63,0x80,0x00},/*"淑",21*/
{0x00,0xC4,0x04,0xE4,0x14,0x0C,0x00,0x44,0x64,0x54,0x4D,0x46,0x54,0x64,0xC4,0x00},
{0x40,0x7F,0x20,0x3F,0x11,0x91,0x40,0x30,0x0F,0x00,0x7F,0x00,0x7F,0x80,0xF0,0x00},/*"疏",22*/
{0x00,0x00,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0xF9,0x02,0x04,0x00,0x00,0x00},
{0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x21,0x41,0x21,0x1F,0x00,0x00},/*"书",23*/
{0x00,0xFE,0x02,0xF2,0x02,0xFE,0x20,0x24,0xA4,0x24,0x3F,0xA4,0x24,0xA4,0x60,0x00},
{0x80,0x47,0x30,0x0F,0x10,0x27,0x88,0x8A,0x4C,0x29,0x18,0x0F,0x18,0x28,0xC8,0x00},/*"赎",24*/
{0x04,0x74,0x54,0x55,0x56,0x54,0x74,0x84,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00,0x00},
{0x10,0x11,0x51,0x91,0x7D,0x0B,0x89,0x40,0x31,0x0F,0x04,0x08,0x3F,0x40,0xF8,0x00},/*"孰",25*/
{0x02,0xBA,0xAA,0xAB,0xAA,0xBA,0x02,0x08,0x48,0xFF,0x08,0x08,0xF8,0x00,0x00,0x00},
{0x82,0x6A,0x12,0x0E,0x23,0xC2,0x0A,0x04,0x23,0xC0,0x03,0x00,0x23,0xC4,0x0F,0x00},/*"熟",26*/
{0x02,0x02,0x3A,0xAA,0xAF,0xBA,0xEA,0xAA,0xAA,0xBA,0x2F,0xAA,0x3A,0x02,0x02,0x00},
{0x22,0x22,0x12,0x12,0xFA,0xAA,0xAF,0xAE,0xAA,0xAA,0xAB,0xFA,0x02,0x02,0x02,0x00},/*"薯",27*/
{0x00,0x00,0x00,0x5F,0x55,0x55,0xF5,0x55,0x55,0x55,0x95,0x5F,0x00,0x00,0x00,0x00},
{0x11,0x11,0x09,0x09,0xFD,0x55,0x57,0x57,0x55,0x55,0x55,0xFD,0x01,0x01,0x01,0x00},/*"暑",28*/
{0x00,0xFC,0x84,0x84,0xFC,0x00,0x1E,0x52,0x52,0x5E,0xF2,0x5E,0xD2,0x72,0x1E,0x00},
{0x00,0x3F,0x10,0x10,0x3F,0x00,0x11,0x09,0xFD,0x55,0x57,0x55,0x55,0xFD,0x01,0x00},/*"曙",29*/
{0x00,0x00,0x1E,0x52,0x52,0x5E,0xF2,0x52,0x52,0x5E,0x92,0x52,0x1E,0x00,0x00,0x00},
{0x11,0x11,0x09,0x09,0xFD,0x55,0x57,0x57,0x55,0x55,0x55,0xFD,0x01,0x01,0x01,0x00},/*"署",30*/
{0x00,0x00,0x9E,0x72,0x52,0x5E,0xD2,0x52,0x52,0x5E,0x52,0x52,0x5E,0xC0,0x00,0x00},
{0x02,0x41,0xC0,0x4F,0x49,0x49,0x3F,0x29,0x29,0x2F,0x30,0x60,0x80,0x7F,0x00,0x00},/*"蜀",31*/
{0x80,0x88,0x4A,0x2A,0x1A,0x8A,0x4A,0x3E,0x49,0x89,0x19,0x29,0x49,0x88,0x00,0x00},
{0x04,0x24,0x22,0x12,0x15,0x48,0x84,0x7F,0x08,0x08,0x15,0x12,0x22,0x04,0x04,0x00},/*"黍",32*/
{0x00,0x00,0x7E,0x4A,0x4A,0x49,0x40,0x40,0x40,0x4A,0x4A,0x4A,0x7E,0x00,0x00,0x00},
{0x00,0x00,0xFF,0x80,0x49,0x12,0x00,0xFF,0x80,0x49,0x12,0x00,0x3F,0x40,0xF0,0x00},/*"鼠",33*/
{0x00,0x00,0xFE,0x0A,0xAA,0xAA,0xAA,0xAA,0xEA,0xAA,0xAA,0xAA,0xAA,0x0E,0x00,0x00},
{0x40,0x30,0x0F,0xF8,0x0B,0x2A,0x2A,0x2A,0x3F,0x2A,0x2A,0x7A,0x8B,0x78,0x00,0x00},/*"属",34*/
{0x00,0x10,0x10,0x10,0x10,0xD0,0x30,0xFF,0x30,0xD0,0x12,0x1C,0x10,0x10,0x00,0x00},
{0x10,0x08,0x04,0x02,0x01,0x00,0x00,0xFF,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00},/*"术",35*/
{0x40,0x40,0x42,0xCC,0x00,0x10,0x10,0x90,0x70,0xFF,0x50,0x92,0x14,0x10,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x44,0x42,0x41,0x40,0x5F,0x40,0x40,0x41,0x46,0x40,0x00},/*"述",36*/
{0x10,0x90,0xFF,0x90,0x10,0x24,0xC4,0x04,0xFC,0x00,0x90,0x10,0x10,0xFF,0x10,0x00},
{0x06,0x01,0xFF,0x00,0x21,0x10,0x0C,0x03,0x1C,0x00,0x00,0x43,0x80,0x7F,0x00,0x00},/*"树",37*/
{0x04,0x04,0xE4,0x24,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x00},
{0x40,0x40,0x27,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x27,0x40,0x40,0x00},/*"束",38*/
{0x00,0x00,0xF8,0x88,0x08,0x08,0x08,0x08,0x08,0xFF,0x08,0x09,0x0A,0xC8,0x08,0x00},
{0x80,0x60,0x1F,0x00,0x01,0x06,0x00,0x80,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00},/*"戍",39*/
{0x00,0xFE,0x00,0x00,0xFF,0x00,0x86,0x8A,0x52,0x22,0x52,0x4A,0x86,0x80,0x00,0x00},
{0x40,0x40,0x44,0x44,0x55,0x64,0x45,0x46,0x44,0x64,0x54,0x44,0x44,0x40,0x40,0x00},/*"竖",40*/
{0x00,0x5F,0x55,0x55,0xFF,0x55,0x55,0x5F,0x00,0x11,0x15,0xF9,0x15,0x53,0x30,0x00},
{0x42,0x42,0x4A,0x4A,0x49,0x49,0x49,0x7D,0x48,0x49,0x4A,0x49,0x48,0x40,0x40,0x00},/*"墅",41*/
{0x00,0x00,0xFC,0x44,0x44,0x44,0xF4,0x45,0x46,0x44,0xF4,0x44,0x44,0x44,0x04,0x00},
{0x40,0x30,0x0F,0x40,0x30,0x00,0x17,0x64,0x04,0x14,0x67,0x00,0x10,0x60,0x00,0x00},/*"庶",42*/
{0x90,0x52,0x34,0x10,0xFF,0x10,0x34,0x52,0x80,0x70,0x8F,0x08,0x08,0xF8,0x08,0x00},
{0x82,0x9A,0x56,0x63,0x22,0x52,0x8E,0x00,0x80,0x40,0x33,0x0C,0x33,0x40,0x80,0x00},/*"数",43*/
{0x10,0x60,0x02,0x8C,0x00,0xE4,0x24,0xFF,0x24,0xE4,0x40,0x30,0x1F,0x50,0x30,0x00},
{0x04,0x04,0x7E,0x01,0x10,0x09,0x05,0xFF,0x05,0x99,0x40,0x30,0x0F,0x70,0x80,0x00},/*"漱",44*/
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
