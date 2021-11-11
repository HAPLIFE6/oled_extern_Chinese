/*第六区
29 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 健 舰 剑 饯 渐 溅 涧 建 僵
１ 姜 将 浆 江 疆 蒋 桨 奖 讲 匠
２ 酱 降 蕉 椒 礁 焦 胶 交 郊 浇
３ 骄 娇 嚼 搅 铰 矫 侥 脚 狡 角
４ 饺 缴 绞 剿 教 酵 轿 较 叫 窖
５ 揭 接 皆 秸 街 阶 截 劫 节 桔
６ 杰 捷 睫 竭 洁 结 解 姐 戒 藉
７ 芥 界 借 介 疥 诫 届 巾 筋 斤
８ 金 今 津 襟 紧 锦 仅 谨 进 靳
９ 晋 禁 近 烬 浸
29 th           0x00a280-0x00aeff               41600-44799
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x00a280
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x80,0x60,0xF8,0x07,0x08,0xC8,0x38,0x10,0x54,0x54,0xFF,0x54,0x54,0x7C,0x10,0x00},
{0x00,0x00,0xFF,0x80,0x49,0x31,0x2F,0x48,0x49,0x49,0x7F,0x49,0x49,0x49,0x48,0x00},/*"健",0*/
{0x80,0xFC,0x96,0xE5,0x84,0xFC,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00},
{0x80,0x7F,0x02,0x4C,0x80,0x7F,0x80,0x43,0x30,0x0E,0x01,0x7E,0x80,0x83,0xE0,0x00},/*"舰",1*/
{0x40,0x20,0x50,0x4C,0x43,0x44,0x48,0x10,0x20,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x00,0x44,0xD8,0x41,0x46,0x20,0x38,0x27,0x20,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"剑",2*/
{0x40,0x30,0xCF,0x08,0x28,0x18,0x80,0x90,0x90,0xFF,0x90,0x49,0x4A,0x48,0x40,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0x40,0x40,0x20,0x13,0x0C,0x14,0x22,0x41,0xF8,0x00},/*"饯",3*/
{0x20,0xC2,0x0C,0x80,0x08,0xC8,0xB8,0xCF,0x88,0x88,0x00,0xFC,0x44,0xC4,0x42,0x00},
{0x04,0x04,0x7E,0x01,0x08,0x18,0x08,0xFF,0x04,0x84,0x60,0x1F,0x00,0xFF,0x00,0x00},/*"渐",4*/
{0x20,0xC2,0x0C,0x80,0xFE,0x02,0xF2,0x02,0xFE,0x20,0x20,0xFF,0x90,0x92,0x94,0x00},
{0x04,0x04,0x7E,0x81,0x47,0x30,0x0F,0x10,0x27,0x81,0x41,0x27,0x38,0x46,0xF0,0x00},/*"溅",5*/
{0x10,0x60,0x02,0x8C,0x00,0xFC,0x01,0xE6,0x20,0x22,0x22,0xE2,0x02,0xFE,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0xFF,0x00,0x0F,0x09,0x09,0x09,0x4F,0x80,0x7F,0x00,0x00},/*"涧",6*/
{0x04,0x84,0xC4,0xB4,0x8C,0x10,0x54,0x54,0x54,0xFF,0x54,0x54,0x7C,0x10,0x10,0x00},
{0x80,0x44,0x28,0x18,0x27,0x28,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x48,0x40,0x00},/*"建",7*/
{0x80,0x60,0xF8,0x07,0x82,0xFA,0xAA,0xAA,0xAA,0xFA,0xAA,0xAA,0xAA,0xFA,0x82,0x00},
{0x00,0x00,0xFF,0x00,0x80,0xBE,0xAA,0xAA,0xAA,0xBE,0xAA,0xAA,0xAA,0xBE,0x80,0x00},/*"僵",8*/
{0x40,0x44,0x54,0x54,0x55,0x56,0xD4,0x7C,0x54,0x56,0x55,0x54,0x54,0x44,0x40,0x00},
{0x02,0x82,0x82,0x9A,0x56,0x53,0x22,0x22,0x22,0x52,0x4E,0x42,0x82,0x02,0x02,0x00},/*"姜",9*/
{0x00,0x08,0x30,0x00,0xFF,0x00,0x88,0x84,0x53,0x22,0x12,0xCA,0x06,0x00,0x00,0x00},
{0x04,0x04,0x02,0x01,0xFF,0x00,0x02,0x0A,0x12,0x42,0x82,0x7F,0x02,0x02,0x02,0x00},/*"将",10*/
{0x80,0x42,0x24,0x10,0xFF,0x00,0x10,0x88,0x94,0x67,0x44,0x24,0x14,0x0C,0x00,0x00},
{0x40,0x42,0x22,0x12,0x0A,0x46,0x80,0x7F,0x02,0x04,0x08,0x14,0x22,0x41,0x40,0x00},/*"浆",11*/
{0x10,0x60,0x02,0x0C,0xC0,0x04,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x04,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x20,0x20,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,0x20,0x20,0x00},/*"江",12*/
{0xF2,0x92,0x92,0x92,0x9E,0x00,0x82,0xFA,0xAA,0xAA,0xFA,0xAA,0xAA,0xFA,0x82,0x00},
{0x24,0x5F,0x94,0x40,0x3F,0x00,0x80,0xBE,0xAA,0xAA,0xBE,0xAA,0xAA,0xBE,0x80,0x00},/*"疆",13*/
{0x04,0x44,0x84,0x04,0xEF,0x04,0x84,0x44,0xB4,0x24,0xAF,0x64,0x24,0x04,0x04,0x00},
{0x20,0x10,0x09,0x04,0xFF,0x00,0x04,0x0C,0x36,0x05,0x84,0xFF,0x04,0x04,0x04,0x00},/*"蒋",14*/
{0x80,0x42,0x24,0x10,0xFF,0x00,0x10,0x88,0x94,0x67,0x44,0x24,0x14,0x0C,0x00,0x00},
{0x42,0x42,0x22,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x22,0x42,0x42,0x00},/*"桨",15*/
{0x80,0x42,0x24,0x10,0xFF,0x00,0x10,0x08,0x14,0xA7,0x44,0x24,0x14,0x0C,0x00,0x00},
{0x84,0x84,0x44,0x44,0x25,0x14,0x0C,0x07,0x0D,0x14,0x24,0x44,0x44,0x84,0x84,0x00},/*"奖",16*/
{0x40,0x40,0x42,0xCC,0x00,0x10,0x10,0xFF,0x10,0x10,0x10,0xFF,0x10,0x10,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x11,0x89,0x61,0x1F,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x00},/*"讲",17*/
{0x00,0xFE,0x02,0x02,0x02,0xF2,0x92,0x92,0x92,0x92,0x8A,0x8A,0x8A,0x82,0x00,0x00},
{0x00,0x7F,0x40,0x60,0x58,0x47,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},/*"匠",18*/
{0xA0,0xA2,0x94,0x88,0xFF,0x80,0x88,0xA4,0xA6,0xAD,0x94,0x94,0x8C,0x84,0x80,0x00},
{0x00,0x00,0xFE,0xB2,0xAA,0xA7,0xA2,0xA2,0xA7,0xAA,0xAA,0xAA,0xFE,0x00,0x00,0x00},/*"酱",19*/
{0x00,0xFE,0x02,0x22,0xDA,0x86,0x90,0x48,0x57,0x24,0xA4,0x54,0x4C,0x84,0x80,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x07,0x18,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00},/*"降",20*/
{0x04,0x84,0x44,0xE4,0xBF,0xA4,0xA4,0xAC,0xF4,0xA4,0xAF,0xA4,0xA4,0x24,0x04,0x00},
{0x00,0x80,0x60,0x1F,0x0A,0x2A,0xCA,0x0A,0x2F,0xCA,0x0A,0x0A,0x2A,0xC8,0x00,0x00},/*"蕉",21*/
{0x10,0x90,0xFF,0x90,0x10,0x40,0x40,0x7F,0x44,0x44,0x00,0xFC,0x04,0xFC,0x00,0x00},
{0x06,0x01,0xFF,0x00,0x11,0x4C,0x80,0x7F,0x04,0x18,0x80,0x63,0x1C,0x63,0x80,0x00},/*"椒",22*/
{0x04,0xE4,0x5C,0x44,0xC4,0x20,0x10,0xFC,0x27,0x24,0x25,0xFE,0x24,0x24,0x24,0x00},
{0x01,0x3F,0x10,0x10,0x3F,0x80,0x60,0x1F,0x29,0xC9,0x29,0xCF,0x09,0x29,0xC9,0x00},/*"礁",23*/
{0x40,0x20,0x10,0xFC,0x27,0x24,0x24,0x25,0xFE,0x24,0x24,0x24,0x24,0x04,0x00,0x00},
{0x80,0x60,0x00,0x1F,0x29,0xC9,0x09,0x09,0x2F,0xC9,0x09,0x09,0x29,0xC8,0x00,0x00},/*"焦",24*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x88,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"胶",25*/
{0x08,0x08,0x88,0x68,0x08,0x08,0x09,0x0E,0x08,0x08,0x88,0x28,0x48,0x88,0x08,0x00},
{0x80,0x81,0x40,0x40,0x21,0x22,0x14,0x08,0x14,0x22,0x41,0x40,0x80,0x81,0x80,0x00},/*"交",26*/
{0x88,0x48,0x28,0x09,0x0A,0x28,0x48,0x88,0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0x00},
{0x40,0x20,0x11,0x0A,0x04,0x0B,0x30,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0x00},/*"郊",27*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0x88,0x88,0x4F,0x58,0x24,0x54,0x84,0xE4,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x82,0x42,0x32,0x0E,0x02,0x02,0x3E,0x42,0x42,0x72,0x00},/*"浇",28*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x20,0x24,0xA4,0x64,0x3E,0x62,0xA3,0x22,0x20,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x82,0x61,0x1E,0x00,0x00,0x00,0xFE,0x01,0x02,0x00},/*"骄",29*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x20,0xA4,0x64,0x3C,0x62,0xA3,0x22,0x20,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x02,0x81,0x7E,0x00,0x00,0x00,0xFE,0x01,0x02,0x00},/*"娇",30*/
{0x00,0xFC,0x04,0xFC,0x00,0x72,0x56,0x5A,0x72,0x56,0x79,0x51,0xD9,0x75,0x00,0x00},
{0x00,0x0F,0x04,0x0F,0x00,0xFF,0x95,0x75,0xDF,0x02,0x4A,0x92,0x7F,0x02,0x02,0x00},/*"嚼",31*/
{0x10,0x10,0xFF,0x10,0xB0,0x19,0xCE,0x48,0x49,0x4E,0x48,0x48,0xCC,0x2B,0x18,0x00},
{0x42,0x82,0x7F,0x01,0x80,0x80,0x4F,0x20,0x18,0x07,0x78,0x80,0x8F,0x80,0xE0,0x00},/*"搅",32*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"铰",33*/
{0xA0,0x98,0x8F,0xF8,0x88,0x88,0x20,0x24,0xA4,0x64,0x3E,0x62,0xA3,0x22,0x20,0x00},
{0x80,0x60,0x18,0x07,0x08,0x30,0x82,0x61,0x1E,0x00,0x00,0x00,0xFE,0x01,0x02,0x00},/*"矫",34*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x88,0x88,0x4F,0x58,0x24,0x54,0x84,0xE4,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x82,0x42,0x32,0x0E,0x02,0x02,0x3E,0x42,0x42,0x72,0x00},/*"侥",35*/
{0x00,0xFE,0x22,0x22,0xFE,0x80,0x88,0xFF,0x88,0x80,0x00,0xFC,0x04,0x04,0xFC,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x10,0x3C,0x13,0x18,0x30,0x00,0xFF,0x04,0x08,0x07,0x00},/*"脚",36*/
{0x40,0x22,0x14,0x08,0xF4,0x02,0x88,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"狡",37*/
{0x20,0x10,0xE8,0x24,0x27,0x24,0x24,0xE4,0x24,0x34,0x2C,0x20,0xE0,0x00,0x00,0x00},
{0x80,0x60,0x1F,0x09,0x09,0x09,0x09,0x7F,0x09,0x09,0x49,0x89,0x7F,0x00,0x00,0x00},/*"角",38*/
{0x40,0x30,0xCF,0x08,0x28,0x18,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"饺",39*/
{0x20,0x38,0xE7,0x30,0x00,0x7C,0xD6,0x55,0x54,0x7C,0x20,0xD8,0x17,0xF0,0x10,0x00},
{0x22,0x27,0x12,0x12,0x80,0x62,0x1E,0x4B,0x8A,0x7A,0x80,0x67,0x18,0x67,0x80,0x00},/*"缴",40*/
{0x20,0x30,0xAC,0x63,0x20,0x18,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x22,0x67,0x22,0x12,0x12,0x12,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"绞",41*/
{0x02,0xF5,0x50,0x52,0xF5,0x50,0x52,0xF5,0x00,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x44,0x25,0x15,0x0D,0xFF,0x0D,0x15,0x25,0x04,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"剿",42*/
{0x20,0xA4,0xA4,0xA4,0xFF,0xA4,0xB4,0x28,0x84,0x70,0x8F,0x08,0x08,0xF8,0x08,0x00},
{0x04,0x0A,0x49,0x88,0x7E,0x05,0x04,0x84,0x40,0x20,0x13,0x0C,0x33,0x40,0x80,0x00},/*"教",43*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x24,0x24,0x24,0xBF,0x64,0x24,0x38,0x26,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x05,0x0B,0x49,0x89,0x7D,0x0B,0x09,0x08,0x00},/*"酵",44*/
{0xC8,0xB8,0x8F,0xE8,0x88,0x88,0x20,0x24,0xA4,0x64,0x3E,0x62,0xA3,0x22,0x20,0x00},
{0x08,0x18,0x08,0xFF,0x04,0x04,0x82,0x61,0x1E,0x00,0x00,0x00,0xFE,0x01,0x02,0x00},/*"轿",45*/
{0xC8,0xB8,0x8F,0xE8,0x88,0x88,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x08,0x18,0x08,0xFF,0x04,0x04,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"较",46*/
{0x00,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0xFF,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x04,0x0F,0x00,0x00,0x0F,0x04,0x02,0x02,0x01,0xFF,0x00,0x00},/*"叫",47*/
{0x10,0x0C,0x04,0x94,0x6C,0x44,0x45,0xF6,0x44,0x44,0x4C,0x54,0x04,0x14,0x0C,0x00},
{0x02,0x02,0x02,0xFA,0x4A,0x4A,0x4A,0x4B,0x4A,0x4A,0x4A,0xFA,0x02,0x02,0x02,0x00},/*"窖",48*/
{0x10,0x10,0x10,0xFF,0x10,0x10,0xBE,0xEA,0xAA,0xAA,0xAA,0xAA,0xBE,0x80,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x01,0x1E,0x10,0x14,0x13,0x54,0x90,0x40,0x3F,0x00,0x00},/*"揭",0*/
{0x10,0x10,0x10,0xFF,0x10,0x50,0x44,0x54,0x65,0xC6,0x44,0x64,0x54,0x44,0x40,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x82,0x82,0x4A,0x56,0x23,0x22,0x52,0x4E,0x82,0x02,0x00},/*"接",1*/
{0x00,0x00,0x7F,0x44,0x24,0x24,0x80,0x40,0x3F,0x48,0x44,0x44,0x42,0x70,0x00,0x00},
{0x00,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00,0x00},/*"皆",2*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x08,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x08,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"秸",3*/
{0x10,0x88,0xC4,0x23,0x00,0x24,0x24,0xBF,0x24,0x24,0x40,0x44,0xC4,0x44,0x40,0x00},
{0x01,0x00,0xFF,0x00,0x20,0x62,0x22,0x1F,0x12,0x12,0x40,0x80,0x7F,0x00,0x00,0x00},/*"街",4*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x40,0x20,0x90,0x0C,0x03,0x0C,0x90,0x20,0x40,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x07,0x80,0x60,0x1F,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"阶",5*/
{0x10,0x94,0xD4,0xB4,0x9F,0xB4,0xD4,0x94,0x90,0x10,0xFF,0x10,0x12,0xD4,0x10,0x00},
{0x01,0x00,0xFF,0x2A,0x2A,0x3F,0x2A,0x2A,0xA0,0x40,0x27,0x18,0x26,0x41,0xF0,0x00},/*"截",6*/
{0x80,0x88,0x88,0x88,0xFF,0x88,0x88,0x80,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x10,0x38,0x14,0x13,0x10,0x18,0xB0,0x40,0x20,0x18,0x47,0x80,0x40,0x3F,0x00,0x00},/*"劫",7*/
{0x04,0x44,0x44,0x44,0x5F,0x44,0xC4,0x44,0x44,0x44,0x5F,0x44,0xC4,0x04,0x04,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x08,0x10,0x08,0x07,0x00,0x00,0x00},/*"节",8*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x08,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x08,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"桔",9*/
{0x00,0x08,0x08,0x88,0x48,0x28,0x18,0xFF,0x18,0x28,0x48,0x88,0x08,0x08,0x00,0x00},
{0x82,0x42,0x31,0x00,0x00,0x10,0x60,0x07,0x10,0x60,0x00,0x00,0x11,0xE2,0x02,0x00},/*"杰",10*/
{0x10,0x10,0xFF,0x10,0x90,0x44,0x54,0x54,0x54,0xFF,0x54,0x54,0xF4,0x44,0x44,0x00},
{0x42,0x82,0x7F,0x01,0x80,0x60,0x1D,0x21,0x41,0x7F,0x49,0x49,0x49,0x48,0x40,0x00},/*"捷",11*/
{0x00,0xFC,0x24,0x24,0xFC,0x00,0x44,0x54,0x54,0x54,0xFF,0x54,0x54,0xF4,0x44,0x00},
{0x00,0x3F,0x11,0x11,0x3F,0x80,0x60,0x1D,0x21,0x41,0x7F,0x49,0x49,0x49,0x48,0x00},/*"睫",12*/
{0xC8,0x08,0x09,0x0E,0xE8,0x08,0x00,0xBE,0xEA,0xAA,0xAA,0xAA,0xAA,0xBE,0x80,0x00},
{0x20,0x6F,0x20,0x1C,0x13,0x10,0x01,0x1E,0x10,0x14,0x13,0x54,0x90,0x40,0x3F,0x00},/*"竭",13*/
{0x20,0xC2,0x0C,0x80,0x08,0x48,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x48,0x08,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00},/*"洁",14*/
{0x20,0x30,0xAC,0x63,0x20,0x18,0x08,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x08,0x00},
{0x22,0x67,0x22,0x12,0x12,0x12,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"结",15*/
{0x20,0x10,0xEC,0x27,0xF4,0x2C,0xE0,0x00,0x22,0x92,0x0E,0xD2,0x22,0x1E,0x00,0x00},
{0x80,0x60,0x1F,0x09,0x3F,0x89,0xFF,0x00,0x0A,0x09,0x09,0xFF,0x09,0x09,0x08,0x00},/*"解",16*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"姐",17*/
{0x08,0x08,0x08,0xE8,0x08,0x08,0xE8,0x08,0x08,0xFF,0x08,0x08,0x09,0xCA,0x08,0x00},
{0x00,0x41,0x31,0x0F,0x01,0x01,0xBF,0x81,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00},/*"戒",18*/
{0x04,0xA4,0xA4,0xF4,0xAF,0xA4,0x04,0x04,0x24,0xF4,0x2F,0x24,0xF4,0x24,0x04,0x00},
{0x22,0x12,0x0A,0xFF,0x0A,0x32,0x02,0x01,0xFD,0x55,0x55,0x55,0x55,0xFD,0x01,0x00},/*"藉",19*/
{0x04,0x04,0x04,0x04,0x9F,0x44,0x24,0x14,0x24,0x44,0x9F,0x04,0x04,0x04,0x04,0x00},
{0x02,0x02,0x81,0x41,0x30,0x0F,0x00,0x00,0x00,0xFF,0x00,0x01,0x01,0x02,0x02,0x00},/*"芥",20*/
{0x00,0x00,0x00,0xFE,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,0x00},
{0x08,0x08,0x04,0x84,0x62,0x1E,0x01,0x00,0x01,0xFE,0x02,0x04,0x04,0x08,0x08,0x00},/*"界",21*/
{0x00,0x80,0x60,0xF8,0x47,0x48,0x48,0x7F,0x48,0x48,0x48,0x7F,0x48,0x48,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"借",22*/
{0x80,0x80,0x40,0x20,0x90,0x08,0x04,0x03,0x04,0x08,0x90,0x20,0x40,0x80,0x80,0x00},
{0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"介",23*/
{0x10,0x60,0x00,0xFC,0x04,0x04,0x84,0x44,0x25,0x1E,0x24,0x44,0x84,0x04,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x01,0x81,0x60,0x1F,0x00,0x00,0x00,0xFF,0x00,0x01,0x01,0x00},/*"疥",24*/
{0x40,0x42,0xCC,0x00,0x08,0x08,0xE8,0x08,0xE8,0x08,0x08,0xFF,0x08,0x09,0xCA,0x00},
{0x00,0x00,0x3F,0x10,0x89,0x61,0x1F,0x01,0x3F,0x81,0x40,0x27,0x38,0x46,0xF1,0x00},/*"诫",25*/
{0x00,0x00,0xFE,0x12,0x12,0x12,0x12,0x12,0xF2,0x12,0x12,0x12,0x1E,0x00,0x00,0x00},
{0x40,0x30,0x0F,0x00,0xFF,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"届",26*/
{0x00,0x00,0xF8,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0xF8,0x00,0x00,0x00},
{0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x08,0x10,0x0F,0x00,0x00,0x00},/*"巾",27*/
{0x10,0x08,0xE4,0x27,0x2C,0x34,0xE4,0x14,0x88,0x87,0xE4,0x8C,0x94,0x84,0x04,0x00},
{0x80,0x60,0x1F,0x09,0x49,0x89,0x7F,0x80,0x40,0x30,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"筋",28*/
{0x00,0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x42,0xC2,0x42,0x43,0x42,0x40,0x40,0x00},
{0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"斤",29*/
{0x80,0x80,0x40,0x20,0x50,0x48,0x44,0xC3,0x44,0x48,0x50,0x20,0x40,0x80,0x80,0x00},
{0x40,0x40,0x42,0x4A,0x72,0x42,0x42,0x7F,0x42,0x42,0x62,0x5A,0x42,0x40,0x40,0x00},/*"金",30*/
{0x80,0x80,0x40,0x20,0x10,0x08,0x24,0xC3,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x00},
{0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x82,0x42,0x22,0x1A,0x06,0x00,0x00,0x00,0x00},/*"今",31*/
{0x10,0x60,0x02,0x0C,0xC0,0x10,0x54,0x54,0x54,0xFF,0x54,0x54,0x7C,0x10,0x10,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00,0x00},/*"津",32*/
{0x08,0x88,0xE9,0x1A,0xC0,0x24,0x14,0x7F,0x14,0x20,0x14,0x7F,0x14,0x24,0x40,0x00},
{0x01,0x00,0xFF,0x01,0x42,0x24,0x15,0x45,0x85,0x7D,0x05,0x05,0x15,0x24,0x40,0x00},/*"襟",33*/
{0x00,0x00,0x3E,0x00,0x00,0xBF,0x40,0x02,0x46,0x2A,0x92,0x2A,0x46,0x42,0x00,0x00},
{0x00,0x80,0x48,0x29,0x09,0x4D,0x8D,0x7B,0x0B,0x09,0x28,0x4C,0x98,0x00,0x00,0x00},/*"紧",34*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0x7C,0x54,0x56,0xD5,0x54,0x54,0x7C,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x3E,0x02,0x02,0x02,0xFF,0x02,0x12,0x22,0x1E,0x00},/*"锦",35*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x02,0x1E,0xE2,0x02,0x02,0x02,0xE2,0x1E,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x80,0x40,0x20,0x13,0x0C,0x13,0x20,0x40,0x80,0x00},/*"仅",36*/
{0x40,0x42,0xCC,0x00,0x04,0xC4,0x44,0x5F,0x54,0xF4,0x54,0x5F,0x44,0xC4,0x04,0x00},
{0x00,0x00,0x7F,0x20,0x54,0x55,0x55,0x55,0x55,0x7F,0x55,0x55,0x55,0x55,0x44,0x00},/*"谨",37*/
{0x40,0x40,0x42,0xCC,0x00,0x80,0x88,0x88,0xFF,0x88,0x88,0xFF,0x88,0x88,0x80,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x50,0x4C,0x43,0x40,0x40,0x5F,0x40,0x40,0x40,0x00},/*"进",38*/
{0x04,0xC4,0x5F,0x54,0xF4,0x54,0x5F,0xC4,0x00,0xFC,0x44,0x44,0xC2,0x43,0x42,0x00},
{0x08,0x0B,0x0A,0x0A,0xFF,0x0A,0x0A,0x8B,0x68,0x1F,0x00,0x00,0xFF,0x00,0x00,0x00},/*"靳",39*/
{0x40,0x42,0x4A,0x52,0x42,0x7E,0x42,0x42,0x42,0x7E,0x42,0x52,0x4A,0x42,0x40,0x00},
{0x00,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00,0x00},/*"晋",40*/
{0x40,0x44,0x24,0x14,0x7F,0x14,0x24,0x00,0x24,0x14,0x7F,0x14,0x24,0x44,0x40,0x00},
{0x08,0x88,0x49,0x29,0x09,0x49,0x89,0x79,0x09,0x09,0x09,0x29,0x49,0x88,0x08,0x00},/*"禁",41*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFC,0x24,0x24,0x24,0xE2,0x23,0x22,0x20,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x50,0x4C,0x43,0x40,0x40,0x40,0x5F,0x40,0x40,0x40,0x00},/*"近",42*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0x00,0xFE,0x12,0x12,0x12,0x72,0x92,0x1E,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0x34,0x02,0x01,0x10,0x12,0x12,0x24,0x20,0x41,0x02,0x00},/*"烬",43*/
{0x10,0x60,0x02,0x8C,0x00,0x80,0xA2,0xAA,0xAA,0xAA,0xAA,0xAA,0xBE,0x80,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x81,0x82,0x4E,0x52,0x22,0x52,0x4E,0x80,0x81,0x80,0x00},/*"浸",44*/
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