/*第六区
50 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 摇 尧 遥 窑 谣 姚 咬 舀 药
１ 要 耀 椰 噎 耶 爷 野 冶 也 页
２ 掖 业 叶 曳 腋 夜 液 一 壹 医
３ 揖 铱 依 伊 衣 颐 夷 遗 移 仪
４ 胰 疑 沂 宜 姨 彝 椅 蚁 倚 已
５ 乙 矣 以 艺 抑 易 邑 屹 亿 役
６ 臆 逸 肄 疫 亦 裔 意 毅 忆 义
７ 益 溢 诣 议 谊 译 异 翼 翌 绎
８ 茵 荫 因 殷 音 阴 姻 吟 银 淫
９ 寅 饮 尹 引 隐
50 th           0x01a900-0x01b57f               108800-111999
*/
//摇 尧 遥 窑 谣 姚 咬 舀 药 要 耀 椰 噎 耶 爷 野 冶 也 页 掖 业 叶 曳 腋 夜 液 一 壹 医 揖 铱 依 伊 衣 颐 夷 遗 移 仪 胰 疑 沂 宜 姨 彝 椅 蚁 倚 已
//乙 矣 以 艺 抑 易 邑 屹 亿 役 臆 逸 肄 疫 亦 裔 意 毅 忆 义 益 溢 诣 议 谊 译 异 翼 翌 绎 茵 荫 因 殷 音 阴 姻 吟 银 淫 寅 饮 尹 引 隐
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x01a900
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x10,0x10,0x10,0xFF,0x90,0x00,0x94,0x64,0x44,0x54,0xE2,0x42,0x63,0x5A,0x00,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0x02,0x7A,0x42,0x42,0x7F,0x42,0x42,0xFA,0x02,0x00},/*"摇",0*/
{0x00,0x08,0x88,0x88,0x88,0x48,0x4F,0x58,0x24,0x54,0x4C,0x84,0x84,0xE4,0x00,0x00},
{0x82,0x82,0x42,0x42,0x22,0x1E,0x02,0x02,0x02,0x7E,0x82,0x82,0x82,0x82,0xE2,0x00},/*"尧",1*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x4A,0x32,0x22,0x2A,0xF1,0x21,0x31,0x2D,0x00,0x00},
{0x00,0x80,0x40,0x3F,0x40,0x80,0x81,0xBD,0xA1,0xA1,0xBF,0xA1,0xA1,0xBD,0x81,0x00},/*"遥",2*/
{0x10,0x0C,0x24,0x94,0xCC,0x84,0x85,0x86,0x84,0x84,0x8C,0x94,0xA4,0x14,0x0C,0x00},
{0x04,0x04,0x75,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0xF4,0x04,0x04,0x00},/*"窑",3*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x94,0x64,0x44,0x54,0xE2,0x42,0x63,0x5A,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x02,0x7A,0x42,0x42,0x7F,0x42,0x42,0xFA,0x02,0x00},/*"谣",4*/
{0x10,0xF0,0x1F,0x10,0xF0,0x00,0x08,0x90,0xFF,0x00,0x00,0xFF,0xA0,0x10,0x08,0x00},
{0x41,0x22,0x14,0x0C,0x33,0x82,0x41,0x30,0x0F,0x00,0x00,0x7F,0x80,0x81,0xF2,0x00},/*"姚",5*/
{0xFC,0x04,0x04,0xFC,0x00,0x88,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00,0x00},
{0x0F,0x04,0x04,0x0F,0x80,0x80,0x40,0x23,0x14,0x08,0x14,0x23,0x40,0x80,0x80,0x00},/*"咬",6*/
{0x00,0x02,0x8A,0xB2,0x42,0x42,0x06,0x1A,0x01,0x81,0xA1,0x91,0x8D,0x01,0x00,0x00},
{0x00,0x00,0xFF,0x44,0x44,0x44,0x40,0x40,0x40,0x44,0x44,0x44,0xFF,0x00,0x00,0x00},/*"舀",7*/
{0x04,0x84,0x44,0x34,0x04,0x8F,0x04,0x84,0x74,0x4F,0x44,0x44,0x44,0xC4,0x04,0x00},
{0x49,0xC9,0x4D,0x2B,0x29,0x28,0x01,0x00,0x02,0x0C,0x40,0x80,0x40,0x3F,0x00,0x00},/*"药",8*/
{0x00,0x02,0xF2,0x92,0x92,0xFE,0x92,0x92,0x92,0xFE,0x92,0x92,0xF2,0x02,0x00,0x00},
{0x00,0x02,0x82,0x92,0x9A,0x56,0x63,0x22,0x32,0x4A,0x46,0x42,0x82,0x02,0x00,0x00},/*"要",9*/
{0x44,0x58,0xC0,0x7F,0xD0,0x48,0x00,0x2A,0x12,0xBE,0x00,0x2A,0x92,0x3E,0x00,0x00},
{0x80,0x60,0x1F,0x00,0x7F,0x20,0x14,0x02,0xFF,0x55,0x55,0x7F,0x55,0x55,0x41,0x00},/*"耀",10*/
{0x10,0x90,0xFF,0x90,0x02,0xFE,0x22,0x22,0xFE,0x02,0x00,0xFE,0x42,0xB2,0x0E,0x00},
{0x06,0x01,0xFF,0x00,0x11,0x1F,0x11,0x09,0xFF,0x08,0x00,0xFF,0x08,0x10,0x0F,0x00},/*"椰",11*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x62,0xAA,0xAA,0xAA,0xAF,0xAA,0xAA,0xAA,0x62,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x40,0x5E,0x6A,0x4A,0x4A,0x4A,0x6A,0x5E,0x40,0x00},/*"噎",12*/
{0x02,0x02,0xFE,0x92,0x92,0x92,0xFE,0x02,0x02,0x00,0xFE,0x02,0x22,0xDA,0x06,0x00},
{0x08,0x18,0x0F,0x08,0x08,0x04,0xFF,0x04,0x04,0x00,0xFF,0x08,0x10,0x08,0x07,0x00},/*"耶",13*/
{0x80,0x80,0x48,0x44,0x26,0x29,0x10,0x10,0x28,0x25,0x42,0x44,0x88,0x80,0x80,0x00},
{0x00,0x00,0x00,0x01,0x01,0x01,0xFF,0x01,0x01,0x11,0x21,0x1F,0x00,0x00,0x00,0x00},/*"爷",14*/
{0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x42,0x4A,0xD2,0x6A,0x46,0xC0,0x00},
{0x40,0xC4,0x44,0x44,0x3F,0x24,0x24,0x24,0x00,0x40,0x80,0x7F,0x00,0x01,0x00,0x00},/*"野",15*/
{0x00,0x02,0x0C,0xC0,0x00,0x20,0x30,0x28,0x24,0x23,0x20,0x28,0x30,0x60,0x00,0x00},
{0x02,0x02,0x7F,0x00,0x00,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00,0x00},/*"冶",16*/
{0x80,0x80,0x40,0xFC,0x40,0x20,0x20,0xFF,0x10,0x10,0x08,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x4F,0x40,0x42,0x44,0x43,0x40,0x40,0x78,0x00},/*"也",17*/
{0x00,0x02,0x02,0xF2,0x12,0x1A,0x16,0xD2,0x12,0x12,0x12,0xF2,0x02,0x02,0x00,0x00},
{0x00,0x80,0x80,0x4F,0x40,0x20,0x18,0x07,0x08,0x10,0x20,0x4F,0x80,0x00,0x00,0x00},/*"页",18*/
{0x10,0x10,0x10,0xFF,0x10,0x94,0xE4,0x1C,0x05,0xC6,0xBC,0x24,0x24,0xE4,0x04,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0xFF,0x82,0x41,0x26,0x18,0x29,0x46,0x81,0x80,0x00},/*"掖",19*/
{0x00,0x10,0x60,0x80,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0xC0,0x30,0x00,0x00},
{0x40,0x40,0x40,0x43,0x40,0x7F,0x40,0x40,0x40,0x7F,0x42,0x41,0x40,0x40,0x40,0x00},/*"业",20*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"叶",21*/
{0x00,0x00,0xF8,0x48,0x48,0x48,0x48,0xFF,0x48,0x48,0x48,0x48,0xF8,0x00,0x00,0x00},
{0x80,0x80,0x83,0x82,0x42,0x42,0x42,0x23,0x2E,0x12,0x2A,0x46,0x43,0x80,0xF0,0x00},/*"曳",22*/
{0x00,0xFE,0x22,0x22,0xFE,0x84,0xE4,0x1C,0x05,0xC6,0xBC,0x24,0x24,0xE4,0x04,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0xFF,0x82,0x41,0x26,0x18,0x29,0x46,0x81,0x80,0x00},/*"腋",23*/
{0x04,0x04,0x84,0xE4,0x1C,0x04,0x05,0xC6,0x3C,0xA4,0x24,0x24,0xE4,0x04,0x04,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x82,0x81,0x46,0x28,0x10,0x29,0x46,0x41,0x80,0x80,0x00},/*"夜",24*/
{0x10,0x60,0x02,0x8C,0x00,0x84,0xE4,0x1C,0x05,0xC6,0xBC,0x24,0x24,0xE4,0x04,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0xFF,0x82,0x41,0x26,0x18,0x29,0x46,0x81,0x80,0x00},/*"液",25*/
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"一",26*/
{0x00,0xC4,0x44,0x54,0x54,0x54,0x54,0x5F,0x54,0x54,0x54,0x54,0x44,0x44,0xC0,0x00},
{0x81,0x80,0x80,0x9D,0xB5,0xD5,0x95,0x95,0x95,0xD5,0xB5,0x9D,0x80,0x81,0x80,0x00},/*"壹",27*/
{0x00,0xFE,0x02,0xA2,0x92,0x9E,0x92,0x92,0xF2,0x92,0x92,0x92,0x92,0x82,0x00,0x00},
{0x00,0x7F,0x40,0x50,0x50,0x48,0x44,0x42,0x41,0x42,0x44,0x48,0x50,0x40,0x40,0x00},/*"医",28*/
{0x10,0x10,0x10,0xFF,0x10,0xD0,0x40,0xDE,0x52,0x52,0x52,0x52,0xDE,0x40,0x40,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x20,0x20,0x3F,0x25,0x25,0x15,0x15,0xFF,0x10,0x10,0x00},/*"揖",29*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x08,0x08,0xC8,0x39,0xCE,0x08,0x08,0x08,0x88,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x15,0x02,0x01,0xFF,0x40,0x21,0x06,0x0A,0x11,0x20,0x00},/*"铱",30*/
{0x00,0x80,0x60,0xF8,0x07,0x08,0x08,0xC8,0x39,0xCE,0x08,0x08,0x08,0x88,0x08,0x00},
{0x01,0x00,0x00,0xFF,0x04,0x02,0x01,0xFF,0x40,0x21,0x06,0x0A,0x11,0x20,0x40,0x00},/*"依",31*/
{0x00,0x80,0x60,0xF8,0x07,0x20,0x22,0x22,0xFE,0x22,0x22,0x22,0xFE,0x20,0x20,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x42,0x32,0x0F,0x02,0x02,0x02,0x07,0x00,0x00,0x00},/*"伊",32*/
{0x08,0x08,0x08,0x08,0x08,0xC8,0x39,0xCE,0x08,0x08,0x08,0x08,0x88,0x08,0x08,0x00},
{0x10,0x08,0x04,0x02,0xFF,0x40,0x20,0x00,0x03,0x04,0x0A,0x11,0x20,0x40,0x40,0x00},/*"衣",33*/
{0x00,0xFE,0x02,0xE2,0x3E,0xE2,0x00,0xF2,0x12,0x1A,0xD6,0x12,0x12,0xF2,0x02,0x00},
{0x00,0x3F,0x20,0x23,0x3E,0x23,0xA0,0x4F,0x20,0x18,0x07,0x10,0x20,0x4F,0x80,0x00},/*"颐",34*/
{0x04,0x04,0x94,0x94,0x94,0x94,0x94,0xFF,0x94,0x94,0x94,0x94,0xF4,0x04,0x04,0x00},
{0x80,0x80,0x47,0x44,0x24,0x14,0x0C,0x07,0x0C,0x14,0x24,0x44,0x54,0x9C,0x80,0x00},/*"夷",35*/
{0x40,0x40,0x42,0xCC,0x20,0x20,0xAE,0xAA,0xAA,0xBF,0xAA,0xAA,0xAE,0x20,0x20,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x67,0x50,0x48,0x46,0x48,0x50,0x67,0x40,0x40,0x00},/*"遗",36*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0x10,0x08,0x94,0x67,0x24,0x94,0x0C,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x00,0x89,0x89,0x44,0x4A,0x33,0x12,0x0A,0x06,0x00},/*"移",37*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x1C,0xE0,0x01,0x06,0x00,0xE0,0x1E,0x00,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x40,0x20,0x13,0x0C,0x13,0x20,0x40,0x80,0x80,0x00},/*"仪",38*/
{0x00,0xFE,0x22,0x22,0xFE,0x04,0xD4,0x54,0x54,0xFF,0x54,0x54,0x74,0x04,0x00,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x80,0x41,0x21,0x19,0x07,0x19,0x25,0x49,0x87,0x80,0x00},/*"胰",39*/
{0x00,0xDF,0xA4,0xA4,0xA2,0xBA,0x00,0x22,0x22,0x2A,0xF2,0x2A,0xA6,0x62,0x20,0x00},
{0x85,0x44,0x34,0x0F,0x14,0x64,0x84,0x60,0x1F,0x10,0x3F,0x42,0x42,0x40,0x40,0x00},/*"疑",40*/
{0x10,0x60,0x02,0x8C,0x00,0x00,0xFC,0x44,0x44,0x44,0x42,0xC2,0x43,0x42,0x40,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00},/*"沂",41*/
{0x10,0x0C,0x04,0xE4,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0xE4,0x04,0x14,0x0C,0x00},
{0x40,0x40,0x40,0x7F,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x7F,0x40,0x40,0x40,0x00},/*"宜",42*/
{0x10,0xF0,0x1F,0x10,0xF0,0x04,0xD4,0x54,0x54,0xFF,0x54,0x54,0x74,0x04,0x00,0x00},
{0x41,0x22,0x14,0x0C,0x33,0x80,0x41,0x21,0x19,0x07,0x19,0x25,0x49,0x87,0x80,0x00},/*"姨",43*/
{0x60,0xA0,0x20,0xEC,0x2B,0xAA,0x6A,0x2A,0x2A,0xBA,0xE6,0xA0,0xA0,0x60,0x20,0x00},
{0x29,0x25,0x23,0xAF,0x73,0x25,0x29,0x20,0x2A,0x26,0xF2,0x2F,0x22,0x26,0x2B,0x00},/*"彝",44*/
{0x10,0x90,0xFF,0x90,0x10,0x40,0x64,0x54,0x4C,0x47,0x4C,0x54,0xE4,0x44,0x40,0x00},
{0x06,0x01,0xFF,0x00,0x01,0x00,0x1F,0x11,0x11,0x1F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"椅",45*/
{0x00,0xF8,0x08,0xFF,0x08,0xF8,0x00,0x1C,0xE0,0x01,0x06,0x00,0xE0,0x1E,0x00,0x00},
{0x20,0x63,0x21,0x1F,0x11,0xB9,0x80,0x40,0x20,0x13,0x0C,0x13,0x20,0x40,0x80,0x00},/*"蚁",46*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x64,0x54,0x4C,0x47,0x4C,0x54,0xE4,0x44,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x1F,0x11,0x11,0x1F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"倚",47*/
{0x00,0x00,0xE2,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00},/*"已",48*/
{0x00,0x02,0x02,0x02,0x02,0x82,0x42,0x22,0x12,0x0A,0x06,0x02,0x00,0x00,0x00,0x00},
{0x00,0x00,0x38,0x46,0x41,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00},/*"乙",0*/
{0x00,0x00,0x10,0x98,0xF4,0x92,0x91,0x90,0x90,0x90,0x94,0x98,0x30,0x00,0x00,0x00},
{0x80,0x84,0x45,0x44,0x24,0x14,0x0C,0x07,0x0C,0x14,0x24,0x44,0x44,0x84,0x80,0x00},/*"矣",1*/
{0x00,0x00,0xFC,0x00,0x00,0x02,0x04,0x18,0x00,0x00,0x80,0x7F,0x00,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x10,0x08,0x84,0x40,0x20,0x10,0x0C,0x03,0x08,0x10,0x20,0xC0,0x00},/*"以",2*/
{0x04,0x04,0x44,0x44,0x5F,0x44,0x44,0x44,0xC4,0xC4,0x5F,0x04,0x04,0x04,0x04,0x00},
{0x00,0x00,0x30,0x48,0x44,0x42,0x41,0x41,0x40,0x40,0x40,0x40,0x40,0x70,0x00,0x00},/*"艺",3*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0xFC,0x04,0x02,0x00,0xFC,0x04,0x04,0xFC,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x1F,0x08,0x04,0x00,0xFF,0x04,0x08,0x07,0x00,0x00},/*"抑",4*/
{0x00,0x00,0x00,0x00,0x7F,0xC9,0x49,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00,0x00},
{0x00,0x08,0x04,0x42,0x23,0x12,0x8E,0x42,0x32,0x0E,0x42,0x82,0x42,0x3E,0x00,0x00},/*"易",5*/
{0x00,0x00,0xC0,0x5E,0x52,0x52,0x52,0xD2,0x52,0x52,0x52,0x5E,0xC0,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x44,0x44,0x44,0x44,0x47,0x44,0x44,0x44,0x44,0x4F,0x40,0x70,0x00},/*"邑",6*/
{0x00,0xF0,0x00,0xFF,0x00,0xF0,0x20,0x10,0x4C,0x4B,0x48,0x48,0xC8,0x48,0x08,0x00},
{0x00,0x1F,0x10,0x0F,0x08,0x1F,0x00,0x30,0x48,0x44,0x42,0x41,0x40,0x40,0x70,0x00},/*"屹",7*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x04,0x04,0x84,0x44,0x24,0x14,0x0C,0x04,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x38,0x46,0x41,0x40,0x40,0x40,0x40,0x40,0x78,0x00},/*"亿",8*/
{0x00,0x10,0x88,0xC4,0x33,0x40,0xA0,0x9E,0x82,0x82,0x82,0x9E,0xA0,0x20,0x20,0x00},
{0x02,0x01,0x00,0xFF,0x80,0x80,0x40,0x43,0x2C,0x10,0x28,0x46,0x41,0x80,0x80,0x00},/*"役",9*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x20,0xA4,0xAC,0xB5,0xA6,0xB4,0xAC,0xA4,0x20,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x80,0x60,0x0F,0x6A,0x8A,0x9A,0xAA,0xCA,0x2F,0xC0,0x00},/*"臆",10*/
{0x40,0x42,0xCC,0x00,0x20,0xF0,0x28,0x27,0x24,0xE4,0x34,0x2C,0x20,0xE0,0x00,0x00},
{0x80,0x40,0x3F,0x40,0x80,0xA1,0x91,0x8D,0x83,0x81,0x9F,0xA5,0xA9,0xA1,0xB8,0x00},/*"逸",11*/
{0x00,0xDF,0xA4,0xA4,0xA2,0xBA,0x00,0x10,0x54,0x54,0xFF,0x54,0x54,0x7C,0x10,0x00},
{0x85,0x44,0x34,0x0F,0x14,0x64,0x04,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"肄",12*/
{0x10,0x60,0x00,0xFC,0x04,0x84,0x74,0x14,0x15,0x16,0x14,0x74,0x84,0x84,0x84,0x00},
{0x84,0x42,0x31,0x0F,0x81,0x82,0x86,0x4A,0x52,0x22,0x52,0x4A,0x86,0x80,0x80,0x00},/*"疫",13*/
{0x08,0x08,0xC8,0x08,0x08,0xF8,0x09,0x0E,0x08,0xF8,0x08,0x48,0x88,0x08,0x08,0x00},
{0x08,0x86,0x41,0x20,0x18,0x07,0x00,0x40,0x80,0x7F,0x00,0x00,0x01,0x0E,0x00,0x00},/*"亦",14*/
{0x44,0x44,0x24,0x24,0xF4,0x4C,0x25,0x06,0x0C,0x14,0x24,0x54,0x4C,0x84,0x84,0x00},
{0x00,0x00,0xFF,0x09,0x05,0x3B,0x29,0x29,0x29,0x3B,0x45,0x89,0x7F,0x00,0x00,0x00},/*"裔",15*/
{0x10,0x10,0x12,0xD2,0x56,0x5A,0x52,0x53,0x52,0x5A,0x56,0xD2,0x12,0x10,0x10,0x00},
{0x40,0x30,0x00,0x77,0x85,0x85,0x8D,0xB5,0x85,0x85,0x85,0xE7,0x00,0x10,0x60,0x00},/*"意",16*/
{0x20,0x24,0xAC,0x75,0xA6,0x34,0x2C,0xA4,0xA0,0x9E,0x82,0x82,0x9E,0xA0,0x20,0x00},
{0x49,0x49,0x24,0x52,0x89,0x7F,0x05,0x98,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x00},/*"毅",17*/
{0x00,0xE0,0x00,0xFF,0x10,0x20,0x04,0x04,0x84,0x44,0x24,0x14,0x0C,0x04,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x38,0x46,0x41,0x40,0x40,0x40,0x40,0x40,0x78,0x00},/*"忆",18*/
{0x00,0x00,0x0C,0x30,0xC0,0x00,0x01,0x06,0x00,0x80,0x70,0x0E,0x00,0x00,0x00,0x00},
{0x80,0x80,0x40,0x40,0x20,0x11,0x0A,0x04,0x0A,0x11,0x20,0x40,0x40,0x80,0x80,0x00},/*"义",19*/
{0x08,0x08,0x88,0x49,0x2A,0x08,0x08,0x08,0x08,0x08,0x2A,0x49,0x88,0x08,0x08,0x00},
{0x40,0x41,0x7E,0x42,0x42,0x7E,0x42,0x42,0x42,0x7E,0x42,0x42,0x7E,0x41,0x40,0x00},/*"益",20*/
{0x10,0x60,0x02,0x8C,0x00,0x10,0x91,0x56,0x10,0x10,0x10,0x54,0x93,0x10,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x41,0x7E,0x42,0x7E,0x42,0x7E,0x42,0x7E,0x41,0x40,0x00},/*"溢",21*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0x3F,0x48,0x48,0x44,0x44,0x44,0x42,0x70,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x08,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"诣",22*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x1C,0xE0,0x01,0x06,0x00,0xE0,0x1E,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x90,0x88,0x40,0x20,0x13,0x0C,0x13,0x20,0x40,0x80,0x80,0x00},/*"议",23*/
{0x40,0x40,0x42,0xCC,0x00,0x10,0x0C,0xE4,0x24,0x25,0x26,0x24,0xE4,0x14,0x0C,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x48,0x40,0x7F,0x49,0x49,0x49,0x49,0x7F,0x40,0x40,0x00},/*"谊",24*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x82,0x86,0x4A,0x52,0xA2,0x52,0x4A,0x86,0x80,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x08,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"译",25*/
{0x00,0x00,0x7E,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x9E,0x80,0xE0,0x00,0x00},
{0x08,0x88,0x48,0x28,0x1E,0x08,0x08,0x08,0x08,0x08,0xFE,0x08,0x08,0x08,0x08,0x00},/*"异",26*/
{0x00,0x09,0xEB,0xA5,0xA5,0xA1,0xBF,0xE0,0xA9,0xAB,0xA5,0xA5,0xE1,0x1F,0x00,0x00},
{0x20,0x20,0x2B,0xAA,0x6A,0x3E,0x2A,0x2B,0x2A,0x3E,0x6A,0xAA,0x2B,0x20,0x20,0x00},/*"翼",27*/
{0x00,0x42,0x46,0x2A,0x22,0x12,0x7E,0x80,0x42,0x46,0x2A,0x22,0x12,0x7E,0x00,0x00},
{0x40,0x42,0x42,0x4A,0x52,0x62,0x42,0x42,0x43,0x62,0x52,0x4A,0x42,0x42,0x40,0x00},/*"翌",28*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x82,0x86,0x4A,0x52,0xA2,0x52,0x4A,0x86,0x80,0x00},
{0x22,0x67,0x22,0x12,0x12,0x00,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"绎",29*/
{0x04,0x04,0xE4,0x24,0x24,0x2F,0x24,0xE4,0x24,0x2F,0x24,0x24,0xE4,0x04,0x04,0x00},
{0x00,0x00,0xFF,0x40,0x51,0x49,0x45,0x43,0x45,0x49,0x51,0x40,0xFF,0x00,0x00,0x00},/*"茵",30*/
{0x04,0xE4,0x24,0x24,0xA4,0x6F,0x04,0x04,0xE4,0x2F,0x24,0x24,0x24,0xE4,0x04,0x00},
{0x00,0xFF,0x00,0x11,0x22,0x1C,0x80,0x40,0x3F,0x09,0x09,0x49,0x89,0x7F,0x00,0x00},/*"荫",31*/
{0x00,0xFE,0x02,0x42,0x42,0x42,0x42,0xFA,0x42,0x42,0x42,0x42,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x40,0x50,0x48,0x44,0x43,0x40,0x41,0x42,0x44,0x58,0x40,0xFF,0x00,0x00},/*"因",32*/
{0x00,0x00,0xFE,0xAA,0xAA,0xA9,0xF9,0x00,0xA0,0x9E,0x82,0x82,0x9E,0xA0,0x20,0x00},
{0x40,0x30,0x0F,0x02,0x22,0x42,0x3E,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x00},/*"殷",33*/
{0x40,0x40,0x44,0x44,0x54,0x64,0x45,0x46,0x44,0x64,0x54,0x44,0x44,0x40,0x40,0x00},
{0x00,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00,0x00},/*"音",34*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0xFE,0x22,0x22,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x00,0xFF,0x08,0x10,0x88,0x47,0x30,0x0F,0x02,0x02,0x02,0x42,0x82,0x7F,0x00,0x00},/*"阴",35*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0xFE,0x42,0x42,0xFA,0x42,0x42,0xFE,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0x21,0x00,0xFF,0x48,0x46,0x41,0x42,0x4C,0xFF,0x00,0x00},/*"姻",36*/
{0x00,0xFC,0x04,0x04,0xFC,0x40,0x20,0x10,0x2C,0xC3,0x0C,0x10,0x20,0x40,0x40,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x02,0x02,0x02,0x82,0x62,0x1A,0x06,0x00,0x00,0x00},/*"吟",37*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x40,0x23,0x0C,0x14,0x22,0x41,0x40,0x00},/*"银",38*/
{0x10,0x60,0x02,0x8C,0x00,0x14,0x64,0x04,0x0C,0x34,0x82,0xC2,0xA3,0x9A,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x08,0x49,0x49,0x49,0x49,0x7F,0x48,0x48,0x48,0x48,0x08,0x00},/*"淫",39*/
{0x10,0x0C,0x04,0xD4,0x54,0x54,0x55,0xF6,0x54,0x54,0x54,0xD4,0x04,0x14,0x0C,0x00},
{0x00,0x00,0x00,0x9F,0x52,0x32,0x12,0x1F,0x12,0x32,0x52,0x9F,0x00,0x00,0x00,0x00},/*"寅",40*/
{0x40,0x30,0x0F,0x88,0x28,0x18,0x08,0x40,0x30,0x0F,0xC8,0x08,0x28,0x18,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x88,0x40,0x30,0x0E,0x01,0x0E,0x30,0x40,0x80,0x00},/*"饮",41*/
{0x20,0x20,0x24,0x24,0x24,0xFC,0x24,0x24,0x24,0x24,0x24,0xFC,0x20,0x20,0x20,0x00},
{0x00,0x80,0x41,0x21,0x19,0x07,0x01,0x01,0x01,0x01,0x01,0x03,0x00,0x00,0x00,0x00},/*"尹",42*/
{0x00,0x02,0xE2,0x22,0x22,0x22,0x22,0x3E,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},
{0x00,0x03,0x02,0x02,0x42,0x82,0x42,0x3E,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"引",43*/
{0x00,0xFE,0x42,0xB2,0x0E,0x10,0x28,0xA4,0xA7,0xA4,0xA4,0xB4,0xAC,0xE0,0x00,0x00},
{0x00,0xFF,0x08,0x10,0x8F,0x60,0x02,0x72,0x82,0x8A,0xB2,0x82,0xE2,0x17,0x60,0x00},/*"隐",44*/
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
