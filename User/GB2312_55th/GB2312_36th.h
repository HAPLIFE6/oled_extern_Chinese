/*第六区
36 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 摹 蘑 模 膜 磨 摩 魔 抹 末
１ 莫 墨 默 沫 漠 寞 陌 谋 牟 某
２ 拇 牡 亩 姆 母 墓 暮 幕 募 慕
３ 木 目 睦 牧 穆 拿 哪 呐 钠 那
４ 娜 纳 氖 乃 奶 耐 奈 南 男 难
５ 囊 挠 脑 恼 闹 淖 呢 馁 内 嫩
６ 能 妮 霓 倪 泥 尼 拟 你 匿 腻
７ 逆 溺 蔫 拈 年 碾 撵 捻 念 娘
８ 酿 鸟 尿 捏 聂 孽 啮 镊 镍 涅
９ 您 柠 狞 凝 宁
36 th           0x00fa00-0x01067f               64000-67199
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x00fa00
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x0A,0x26,0x22,0x2B,0xAA,0xFA,0x2A,0x26,0x22,0x26,0x0A,0x12,0x12,0x00},/*"摹",0*/
{0x02,0x02,0xFA,0x0A,0x2F,0xAA,0xFA,0x6A,0xAE,0x0A,0xAF,0xFA,0x6A,0xAA,0x0A,0x00},
{0x20,0x18,0x47,0x24,0x15,0xFC,0x55,0x54,0x54,0x55,0x54,0x55,0xF4,0x04,0x01,0x00},/*"蘑",1*/
{0x10,0x10,0xD0,0xFF,0x90,0x14,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x89,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x80,0x00},/*"模",2*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x04,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x88,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x00},/*"膜",3*/
{0x00,0x00,0xFE,0x02,0x4A,0x2A,0xFE,0x2A,0x43,0x4A,0x2A,0xFE,0x2A,0x4A,0x02,0x00},
{0x40,0x30,0x0F,0x20,0x11,0x09,0xFD,0x4B,0x49,0x49,0x49,0x49,0xF9,0x01,0x00,0x00},/*"磨",4*/
{0x00,0x00,0xFE,0x4A,0x2A,0x7E,0x1A,0x2A,0x03,0x2A,0x9A,0xFE,0x9A,0x2A,0x42,0x00},
{0x80,0x60,0x1F,0x00,0x10,0x15,0x15,0x55,0x95,0x7F,0x14,0x14,0x14,0x10,0x10,0x00},/*"摩",5*/
{0x00,0x00,0xFE,0x4A,0xAA,0xFE,0x9A,0xEA,0x83,0xAA,0x9A,0xFE,0x9A,0x2A,0x42,0x00},
{0x80,0x60,0x9F,0x80,0x4F,0x4A,0x2A,0x1A,0x6F,0xBA,0xAA,0xBA,0xEF,0x80,0xC0,0x00},/*"魔",6*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x08,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x08,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x20,0x18,0x06,0x01,0xFF,0x01,0x06,0x18,0x20,0x00},/*"抹",7*/
{0x08,0x88,0x88,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0x88,0x88,0x08,0x00},
{0x20,0x20,0x10,0x08,0x04,0x02,0x01,0xFF,0x01,0x02,0x04,0x08,0x10,0x20,0x20,0x00},/*"末",8*/
{0x04,0x04,0x04,0xE4,0xAF,0xA4,0xA4,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x04,0x04,0x00},
{0x80,0x88,0x88,0x4B,0x4A,0x2A,0x1A,0x0E,0x1A,0x2A,0x4A,0x4B,0x88,0x88,0x80,0x00},/*"莫",9*/
{0x00,0x00,0x5E,0x52,0x56,0x5A,0x52,0xFE,0x52,0x5A,0x56,0x52,0x5E,0x00,0x00,0x00},
{0x81,0x85,0x93,0x91,0x91,0x93,0x95,0xF9,0x91,0x93,0x95,0x91,0x93,0x85,0x81,0x00},/*"墨",10*/
{0x7E,0x4A,0x52,0xFE,0x52,0x4A,0x7E,0x20,0x20,0x20,0xFF,0x20,0x22,0x2C,0x20,0x00},
{0xE9,0x09,0x69,0x07,0x65,0x05,0xB5,0x40,0x30,0x0E,0x01,0x0E,0x30,0x40,0x80,0x00},/*"默",11*/
{0x10,0x60,0x02,0x0C,0xC0,0x08,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0x08,0x00},
{0x04,0x04,0x7C,0x03,0x20,0x10,0x08,0x04,0x02,0xFF,0x02,0x04,0x08,0x10,0x10,0x00},/*"沫",12*/
{0x10,0x60,0x02,0x0C,0xC0,0x04,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x80,0x88,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x80,0x00},/*"漠",13*/
{0x08,0x06,0x12,0xD2,0x52,0x7A,0x52,0x53,0x52,0x7A,0x52,0xD2,0x12,0x0A,0x06,0x00},
{0x80,0x90,0x90,0x57,0x55,0x35,0x1D,0x15,0x15,0x35,0x55,0x57,0x90,0x90,0x80,0x00},/*"寞",14*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0xE2,0x22,0x32,0x2E,0x22,0x22,0xE2,0x02,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0xFF,0x42,0x42,0x42,0x42,0x42,0xFF,0x00,0x00},/*"陌",15*/
{0x40,0x42,0xCC,0x00,0x04,0x04,0xFF,0x24,0x24,0x24,0x24,0x24,0xFF,0x04,0x04,0x00},
{0x00,0x00,0x7F,0x20,0x54,0x44,0x25,0x15,0x0D,0xFF,0x0D,0x15,0x25,0x44,0x44,0x00},/*"谋",16*/
{0x00,0x00,0x10,0x98,0x14,0x12,0x11,0xD0,0x10,0x10,0x14,0x18,0x30,0x00,0x00,0x00},
{0x08,0x08,0x0A,0x09,0x09,0x09,0x09,0xFF,0x09,0x09,0x09,0x09,0x09,0x08,0x08,0x00},/*"牟",17*/
{0x04,0x04,0x04,0x04,0xFF,0x24,0x24,0x24,0x24,0x24,0xFF,0x04,0x04,0x04,0x04,0x00},
{0x44,0x44,0x24,0x24,0x15,0x0D,0x05,0xFF,0x05,0x0D,0x15,0x24,0x24,0x44,0x44,0x00},/*"某",18*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x80,0xFE,0x82,0x8A,0x92,0x82,0xFE,0x80,0x80,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x1F,0x10,0x12,0x54,0x90,0x50,0x3F,0x10,0x10,0x00},/*"拇",19*/
{0x40,0x3C,0x10,0x10,0xFF,0x10,0x10,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x00,0x00},
{0x02,0x06,0x02,0x02,0xFF,0x01,0x41,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},/*"牡",20*/
{0x08,0x08,0xC8,0x48,0x48,0x48,0x49,0xCE,0x48,0x48,0x48,0x48,0xC8,0x08,0x08,0x00},
{0x00,0x00,0xFF,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0xFF,0x00,0x00,0x00},/*"亩",21*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x80,0x80,0xFE,0x82,0x8A,0x92,0x82,0xFE,0x80,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x00,0x1F,0x10,0x12,0x54,0x90,0x50,0x3F,0x10,0x00},/*"姆",22*/
{0x40,0x40,0xC0,0x7E,0x42,0x42,0x4A,0x72,0x42,0x42,0x42,0xFE,0x40,0x40,0x40,0x00},
{0x00,0x00,0x0F,0x08,0x08,0x08,0x09,0x0E,0x48,0x88,0x48,0x3F,0x08,0x08,0x00,0x00},/*"母",23*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x8A,0x86,0x92,0x93,0x92,0xFA,0x92,0x92,0x92,0x86,0x8A,0x12,0x12,0x00},/*"墓",24*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x0A,0x06,0xFA,0xAB,0xAA,0xAA,0xAA,0xAA,0xFA,0x06,0x0A,0x12,0x12,0x00},/*"暮",25*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x0A,0x7E,0x0A,0x0B,0x0A,0xFE,0x0A,0x2A,0x4A,0x3E,0x0A,0x12,0x12,0x00},/*"幕",26*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x8A,0x96,0x52,0x33,0x1A,0x12,0x12,0x52,0x92,0x76,0x0A,0x12,0x12,0x00},/*"募",27*/
{0x00,0x02,0x02,0xFA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAF,0xAA,0xFA,0x02,0x02,0x00,0x00},
{0x12,0x12,0x4A,0x26,0x52,0x83,0x7E,0x12,0x62,0x02,0x12,0x66,0x0A,0x12,0x12,0x00},/*"慕",28*/
{0x00,0x10,0x10,0x10,0x10,0xD0,0x30,0xFF,0x30,0xD0,0x10,0x10,0x10,0x10,0x00,0x00},
{0x10,0x08,0x04,0x02,0x01,0x00,0x00,0xFF,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00},/*"木",29*/
{0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x00,0x00,0xFF,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0xFF,0x00,0x00,0x00},/*"目",30*/
{0x00,0xFC,0x24,0x24,0xFC,0x00,0x20,0xA4,0x64,0x24,0x3F,0x24,0x64,0xA4,0x20,0x00},
{0x00,0x3F,0x11,0x11,0x3F,0x00,0x41,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x41,0x00},/*"睦",31*/
{0x40,0x3C,0x10,0x10,0xFF,0x10,0x50,0x20,0xD8,0x17,0x10,0x10,0xF0,0x10,0x10,0x00},
{0x02,0x06,0x02,0x02,0xFF,0x01,0x81,0x40,0x21,0x16,0x08,0x16,0x21,0x40,0x80,0x00},/*"牧",32*/
{0x24,0x24,0xA4,0xFE,0xA3,0x22,0x00,0x7C,0x54,0x56,0xD5,0x54,0x54,0x7C,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x00,0x03,0x8A,0xA9,0xA4,0x94,0x53,0x4A,0x28,0x21,0x02,0x00},/*"穆",33*/
{0x08,0x08,0x08,0xE4,0xAC,0xAA,0xAA,0xA9,0xAA,0xAA,0xAC,0xE4,0x08,0x08,0x08,0x00},
{0x00,0x20,0x28,0x2A,0x2A,0x2A,0xAA,0xFE,0x2A,0x2A,0x29,0x28,0x28,0x20,0x00,0x00},/*"拿",34*/
{0x00,0xFC,0x04,0xFC,0x02,0x22,0xFE,0x22,0x22,0xFE,0x00,0xFE,0x42,0xB2,0x0E,0x00},
{0x00,0x0F,0x04,0x0F,0x82,0x62,0x1F,0x42,0x82,0x7F,0x00,0xFF,0x08,0x10,0x0F,0x00},/*"哪",35*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0xFF,0x04,0x03,0x00,0x01,0x46,0x80,0x7F,0x00,0x00},/*"呐",36*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0x08,0xF8,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x04,0x03,0x00,0x01,0x46,0x80,0x7F,0x00},/*"钠",37*/
{0x00,0x22,0x22,0xFE,0x22,0x22,0xFE,0x00,0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0x00},
{0x40,0x21,0x19,0x07,0x21,0x41,0x3F,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0x00},/*"那",38*/
{0x10,0xF0,0x1F,0xF0,0x02,0x22,0xFE,0x22,0x22,0xFE,0x00,0xFE,0x42,0xB2,0x0E,0x00},
{0x82,0x65,0x18,0x67,0x82,0x62,0x1F,0x42,0x82,0x7F,0x00,0xFF,0x08,0x10,0x0F,0x00},/*"娜",39*/
{0x20,0x30,0xAC,0x63,0x10,0x00,0xF0,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00},
{0x22,0x67,0x22,0x12,0x12,0x00,0xFF,0x08,0x04,0x03,0x00,0x01,0x46,0x80,0x7F,0x00},/*"纳",40*/
{0x20,0x10,0x4C,0x47,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0xD4,0x04,0x04,0x00,0x00},
{0x80,0x40,0x31,0x0F,0x01,0x09,0x4D,0x8B,0x48,0x38,0x00,0x0F,0x30,0x40,0xF0,0x00},/*"氖",41*/
{0x00,0x00,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0x62,0x5A,0x46,0x40,0xC0,0x00,0x00},
{0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x40,0x3F,0x00,0x00},/*"乃",42*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x04,0x04,0xFC,0x04,0xC4,0xB4,0x8C,0x80,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0xA1,0x60,0x1C,0x03,0x00,0x40,0x80,0x40,0x3F,0x00,0x00},/*"奶",43*/
{0x02,0xE2,0x22,0xF2,0x2E,0xE2,0x22,0xE2,0x12,0x10,0x10,0x10,0xFF,0x10,0x10,0x00},
{0x00,0xFF,0x00,0x3F,0x00,0x3F,0x80,0xFF,0x00,0x01,0x46,0x80,0x7F,0x00,0x00,0x00},/*"耐",44*/
{0x40,0x44,0x24,0x24,0x54,0x4C,0x47,0x44,0x44,0x4C,0x54,0x24,0x24,0x44,0x40,0x00},
{0x00,0x42,0x22,0x1A,0x02,0x42,0x82,0x7E,0x02,0x02,0x02,0x0A,0x12,0x62,0x00,0x00},/*"奈",45*/
{0x04,0xE4,0x24,0x24,0x64,0xA4,0x24,0x3F,0x24,0xA4,0x64,0x24,0x24,0xE4,0x04,0x00},
{0x00,0xFF,0x00,0x08,0x09,0x09,0x09,0x7F,0x09,0x09,0x09,0x48,0x80,0x7F,0x00,0x00},/*"南",46*/
{0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x80,0x84,0x44,0x44,0x24,0x14,0x0C,0x07,0x04,0x04,0x44,0x84,0x44,0x3C,0x00,0x00},/*"男",47*/
{0x04,0x24,0xC4,0x04,0xE4,0x5C,0x20,0xF8,0x4F,0x48,0x49,0xFA,0x48,0x48,0x08,0x00},
{0x20,0x10,0x0C,0x03,0x04,0x18,0x00,0xFF,0x22,0x22,0x22,0x3F,0x22,0x22,0x20,0x00},/*"难",48*/
{0x60,0x22,0x22,0xEE,0xAA,0xAA,0xEA,0x3F,0xEA,0xAA,0xAA,0xEE,0x22,0x22,0x60,0x00},
{0x88,0x88,0x4A,0x4A,0x2A,0xFF,0x8A,0x4A,0x1A,0x2F,0x4A,0x6A,0x9A,0x88,0x88,0x00},/*"囊",0*/
{0x10,0x10,0x10,0xFF,0x10,0x10,0x88,0x88,0x4F,0x58,0x24,0x54,0x84,0xE4,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x42,0x32,0x0E,0x02,0x02,0x3E,0x42,0x42,0x72,0x00},/*"挠",1*/
{0x00,0xFE,0x22,0x22,0xFE,0x08,0x88,0x08,0x48,0x89,0x0E,0xC8,0x08,0x88,0x08,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x7F,0x40,0x48,0x44,0x43,0x4C,0x40,0xFF,0x00,0x00},/*"脑",2*/
{0x00,0xE0,0x00,0xFF,0x10,0x28,0x88,0x08,0x48,0x89,0x0E,0xC8,0x08,0x88,0x08,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x7F,0x40,0x48,0x44,0x43,0x4C,0x40,0xFF,0x00,0x00},/*"恼",3*/
{0x00,0xF8,0x01,0x22,0x20,0x22,0x2A,0xF2,0x22,0x22,0x22,0x22,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x00,0x1F,0x01,0x01,0x7F,0x09,0x11,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"闹",4*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xF0,0x50,0x50,0x5F,0x54,0x54,0x54,0xF4,0x04,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x08,0x0B,0x09,0x09,0xFF,0x09,0x09,0x09,0x0B,0x08,0x00},/*"淖",5*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0xFE,0x22,0x22,0xA2,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x00,0x0F,0x04,0x84,0x4F,0x30,0x0F,0x00,0x00,0x3F,0x44,0x44,0x42,0x41,0x70,0x00},/*"呢",6*/
{0x40,0x30,0x8F,0x28,0x18,0x00,0x14,0x64,0x04,0x8C,0x32,0x02,0x23,0x1A,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x80,0x89,0x4D,0x4B,0x31,0x11,0x29,0x47,0x81,0x01,0x00},/*"馁",7*/
{0x00,0xF8,0x08,0x08,0x08,0x08,0x88,0x7F,0x88,0x08,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x00,0xFF,0x00,0x08,0x04,0x02,0x01,0x00,0x00,0x01,0x02,0x4C,0x80,0x7F,0x00,0x00},/*"内",8*/
{0x10,0xF0,0x1F,0xF0,0x00,0xE4,0x24,0xFF,0x24,0xE4,0x20,0xD8,0x17,0xF0,0x10,0x00},
{0x82,0x65,0x18,0x67,0x10,0x09,0x05,0xFF,0x05,0x19,0x80,0x67,0x18,0x67,0x80,0x00},/*"嫩",9*/
{0x08,0xCC,0x4A,0x49,0x48,0x4A,0xCC,0x18,0x00,0x7F,0x88,0x88,0x84,0x82,0xE0,0x00},
{0x00,0xFF,0x12,0x12,0x52,0x92,0x7F,0x00,0x00,0x7E,0x88,0x88,0x84,0x82,0xE0,0x00},/*"能",10*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0xFE,0x22,0xA2,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0xA1,0x60,0x1F,0x00,0x3F,0x44,0x44,0x42,0x41,0x70,0x00},/*"妮",11*/
{0x10,0x0C,0x05,0x55,0x55,0xD5,0x85,0x7F,0x05,0x55,0x55,0x55,0x05,0x14,0x0C,0x00},
{0x80,0x80,0x9F,0x55,0x35,0x14,0x10,0x10,0x15,0x75,0x95,0x95,0x9F,0x80,0xE0,0x00},/*"霓",12*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0xFC,0x24,0x24,0x02,0x00,0x24,0x24,0xFC,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x41,0x21,0x1F,0x01,0x01,0x7F,0x81,0x81,0xE0,0x00},/*"倪",13*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xFE,0x22,0x22,0xA2,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x04,0x04,0x7C,0x83,0x40,0x30,0x0F,0x00,0x00,0x3F,0x44,0x44,0x42,0x41,0x70,0x00},/*"泥",14*/
{0x00,0x00,0x00,0xFE,0x22,0x22,0xA2,0x22,0x22,0x22,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x80,0x40,0x30,0x0F,0x00,0x00,0x3F,0x44,0x44,0x44,0x42,0x42,0x41,0x41,0x78,0x00},/*"尼",15*/
{0x10,0x10,0x10,0xFF,0x90,0x00,0xF8,0x00,0x02,0x04,0x18,0x00,0xFF,0x00,0x00,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0x3F,0x10,0x88,0x40,0x30,0x0C,0x0B,0x30,0xC0,0x00},/*"拟",16*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x20,0x18,0x0F,0x08,0xC8,0x08,0x08,0x28,0x18,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x10,0x0C,0x03,0x40,0x80,0x7F,0x00,0x01,0x06,0x18,0x00},/*"你",17*/
{0x00,0xFE,0x92,0x92,0x92,0xBA,0x92,0xD2,0x92,0x92,0x92,0xBA,0x92,0x92,0x90,0x00},
{0x00,0x7F,0x48,0x44,0x42,0x5F,0x52,0x52,0x52,0x52,0x52,0x52,0x5E,0x40,0x40,0x00},/*"匿",18*/
{0x00,0xFE,0x22,0x22,0xFE,0x04,0x54,0x54,0x54,0x54,0x44,0xFF,0x05,0x06,0x04,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x80,0x5F,0x21,0x1D,0x21,0xDF,0x00,0x3F,0x40,0xF0,0x00},/*"腻",19*/
{0x40,0x42,0xCC,0x00,0x08,0xC8,0x09,0x0E,0x08,0xF8,0x08,0x0C,0x0B,0xC8,0x08,0x00},
{0x40,0x20,0x1F,0x20,0x40,0x63,0x52,0x4A,0x46,0x43,0x42,0x42,0x42,0x47,0x40,0x00},/*"逆",20*/
{0x10,0x60,0x02,0x8C,0x00,0xF2,0x92,0x92,0x9E,0x00,0xF2,0x92,0x92,0x9E,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x52,0x8C,0x40,0x3F,0x00,0x52,0x8C,0x40,0x3F,0x00,0x00},/*"溺",21*/
{0x82,0x8A,0x8A,0xEA,0x8F,0x8A,0x8A,0xFA,0xAA,0xAA,0xAF,0xAA,0xAA,0x8A,0x82,0x00},
{0x40,0x20,0x0C,0x0B,0x2A,0x4A,0x0A,0x2A,0x4A,0x0A,0x2A,0x4A,0x8A,0x78,0x00,0x00},/*"蔫",22*/
{0x10,0x10,0x10,0xFF,0x90,0x50,0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x08,0x08,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00},/*"拈",23*/
{0x00,0x20,0x18,0xC7,0x44,0x44,0x44,0x44,0xFC,0x44,0x44,0x44,0x44,0x04,0x00,0x00},
{0x04,0x04,0x04,0x07,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"年",24*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0xFE,0x12,0x92,0xF2,0x92,0x92,0xF2,0x9E,0x00},
{0x02,0x01,0x7F,0x10,0x10,0xBF,0x60,0x1F,0x04,0xFC,0x47,0x1C,0x24,0x57,0x8C,0x00},/*"碾",25*/
{0x10,0x10,0x10,0xFF,0x90,0x00,0x94,0x54,0x3F,0x54,0x80,0x54,0x3F,0x54,0x94,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x20,0x29,0x2D,0x2B,0x29,0xFD,0x29,0x29,0x29,0x20,0x00},/*"撵",26*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x50,0x48,0x54,0x63,0x44,0xC8,0x10,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x40,0x38,0x00,0x3C,0x41,0x46,0x41,0x70,0x04,0x38,0x00},/*"捻",27*/
{0x40,0x40,0x20,0x20,0x90,0x88,0x94,0xE3,0x84,0x88,0x90,0x20,0x20,0x40,0x40,0x00},
{0x40,0x30,0x00,0x00,0x38,0x40,0x40,0x44,0x5A,0x41,0x40,0x70,0x00,0x08,0x30,0x00},/*"念",28*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0xFC,0x24,0x25,0x26,0x24,0x24,0xFC,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x00,0xFF,0x41,0x21,0x07,0x09,0x11,0x29,0x44,0x00},/*"娘",29*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0xFC,0x24,0x25,0x26,0x24,0xFC,0x00,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0xFF,0x41,0x07,0x19,0x29,0x45,0x82,0x00},/*"酿",30*/
{0x00,0x00,0x00,0xFC,0x04,0x04,0x16,0x65,0x04,0x44,0x84,0x7C,0x00,0x00,0x00,0x00},
{0x00,0x10,0x10,0x13,0x12,0x12,0x12,0x12,0x12,0x12,0x52,0x82,0x42,0x3E,0x00,0x00},/*"鸟",31*/
{0x00,0x00,0xFE,0x12,0x12,0x12,0x12,0x12,0xF2,0x12,0x12,0x12,0x9E,0x00,0x00,0x00},
{0x40,0x30,0x0F,0x40,0x21,0x19,0x47,0x80,0x7F,0x03,0x0E,0x11,0x20,0x40,0x00,0x00},/*"尿",32*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x40,0x00},/*"捏",33*/
{0x80,0x82,0x82,0x82,0xFE,0xAA,0xAA,0xAA,0xAA,0xAA,0xFE,0x42,0x42,0x42,0x40,0x00},
{0x80,0x80,0x4A,0x52,0x22,0x52,0x8E,0x80,0x4E,0x52,0x23,0x52,0x4E,0x80,0x80,0x00},/*"聂",34*/
{0x02,0xFA,0xAE,0xAA,0xAF,0xBA,0x02,0x4A,0x5A,0x6A,0xCF,0x6A,0x5A,0x4A,0x42,0x00},
{0x20,0x23,0x22,0x2A,0x2A,0x2B,0xA8,0xE9,0x29,0x39,0x2B,0x21,0x21,0x21,0x20,0x00},/*"孽",35*/
{0xFC,0x04,0x04,0xFC,0x40,0x40,0x7C,0x40,0x40,0x7F,0x44,0x44,0x44,0x44,0x40,0x00},
{0x0F,0x04,0x04,0x0F,0x00,0x7F,0x40,0x50,0x4C,0x43,0x44,0x58,0x40,0xFF,0x00,0x00},/*"啮",36*/
{0x40,0x30,0xEF,0x24,0x24,0x80,0x82,0xFE,0xAA,0xAA,0xAA,0xAA,0xFE,0x42,0x40,0x00},
{0x01,0x01,0x7F,0x21,0x91,0x42,0x2A,0x12,0x6E,0x80,0x5E,0x22,0x53,0x8E,0x80,0x00},/*"镊",37*/
{0x40,0x30,0xEF,0x24,0x24,0x00,0xFC,0x54,0x56,0x55,0x54,0x54,0xFC,0x00,0x00,0x00},
{0x01,0x01,0x7F,0x21,0x11,0x44,0x25,0x15,0x0D,0xFF,0x0D,0x15,0x25,0x44,0x44,0x00},/*"镍",38*/
{0x10,0x60,0x02,0x8C,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x40,0x00},/*"涅",39*/
{0x20,0x10,0x08,0xFC,0x23,0x10,0x88,0x67,0x04,0xF4,0x04,0x24,0x54,0x8C,0x00,0x00},
{0x40,0x30,0x00,0x77,0x80,0x81,0x88,0xB2,0x84,0x83,0x80,0xE0,0x00,0x11,0x60,0x00},/*"您",40*/
{0x10,0x90,0xFF,0x90,0x10,0x20,0x18,0x08,0x08,0x09,0x0E,0x08,0x08,0x28,0x18,0x00},
{0x06,0x01,0xFF,0x00,0x01,0x00,0x01,0x01,0x41,0x81,0x7F,0x01,0x01,0x01,0x01,0x00},/*"柠",41*/
{0x40,0x22,0x14,0x08,0xF4,0x22,0x18,0x08,0x08,0x09,0x0E,0x08,0x08,0x28,0x18,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x01,0x01,0x41,0x81,0x7F,0x01,0x01,0x01,0x01,0x00},/*"狞",42*/
{0x00,0x02,0x0C,0xE0,0x00,0xCF,0x94,0x92,0x98,0x22,0x2A,0xF2,0x2A,0xE6,0x00,0x00},
{0x04,0x04,0x7F,0x00,0x45,0x34,0x0F,0x94,0x64,0x1F,0x20,0x7F,0x44,0x44,0x40,0x00},/*"凝",43*/
{0x20,0x18,0x88,0x88,0x88,0x88,0x89,0x8E,0x88,0x88,0x88,0x88,0x88,0x28,0x18,0x00},
{0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"宁",44*/
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
