/*第六区
 55 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 住 注 祝 驻 抓 爪 拽 专 砖
１ 转 撰 赚 篆 桩 庄 装 妆 撞 壮
２ 状 椎 锥 追 赘 坠 缀 谆 准 捉
３ 拙 卓 桌 琢 茁 酌 啄 着 灼 浊
４ 兹 咨 资 姿 滋 淄 孜 紫 仔 籽
５ 滓 子 自 渍 字 鬃 棕 踪 宗 综
６ 总 纵 邹 走 奏 揍 租 足 卒 族
７ 祖 诅 阻 组 钻 纂 嘴 醉 最 罪
８ 尊 遵 昨 左 佐 柞 做 作 坐 座
９   
55 th           0x01e780-0x01f3ff               124800-127999
*/
//住 注 祝 驻 抓 爪 拽 专 砖 转 撰 赚 篆 桩 庄 装 妆 撞 壮 状 椎 锥 追 赘 坠 缀 谆 准 捉 拙 卓 桌 琢 茁 酌 啄 着 灼 浊 兹 咨 资 姿 滋 淄 孜 紫 仔 籽
//滓 子 自 渍 字 鬃 棕 踪 宗 综 总 纵 邹 走 奏 揍 租 足 卒 族祖 诅 阻 组 钻 纂 嘴 醉 最 罪 尊 遵 昨 左 佐 柞 做 作 坐 座   
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x01e780
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x80,0x60,0xF8,0x07,0x08,0x08,0x08,0x09,0xFA,0x08,0x08,0x08,0x08,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x00},/*"住",0*/
{0x10,0x60,0x02,0x8C,0x00,0x08,0x08,0x08,0x09,0xFA,0x08,0x08,0x08,0x08,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x40,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x00},/*"注",1*/
{0x08,0x08,0x89,0xEE,0x98,0x00,0x7E,0x42,0xC2,0x42,0x42,0xC2,0x42,0x7E,0x00,0x00},
{0x02,0x01,0x00,0xFF,0x80,0x43,0x20,0x18,0x07,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"祝",2*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x08,0x08,0x08,0x09,0xFA,0x08,0x08,0x08,0x08,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x40,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x40,0x00},/*"驻",3*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFC,0x04,0xFC,0x04,0xFE,0x03,0x02,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x60,0x1F,0x00,0x7F,0x00,0x01,0x0E,0x30,0x40,0x00},/*"抓",4*/
{0x00,0x00,0x00,0xFC,0x04,0x04,0xFC,0x04,0x02,0x02,0xFE,0x03,0x02,0x00,0x00,0x00},
{0x80,0x60,0x18,0x07,0x00,0x00,0x7F,0x00,0x00,0x00,0x01,0x0E,0x30,0x40,0x80,0x00},/*"爪",5*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFC,0x24,0x24,0xFF,0x24,0x24,0xFC,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x40,0x41,0x21,0x21,0x17,0x19,0x29,0x45,0xF0,0x00},/*"拽",6*/
{0x40,0x40,0x48,0x48,0x48,0xC8,0x78,0x4F,0x48,0x48,0x48,0x48,0x48,0x40,0x40,0x00},
{0x00,0x00,0x00,0x00,0x03,0x12,0x12,0x22,0x22,0x52,0x8A,0x06,0x00,0x00,0x00,0x00},/*"专",7*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x48,0x48,0xE8,0x5F,0x48,0x48,0x48,0x40,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0x02,0x0B,0x12,0x22,0xD2,0x0A,0x06,0x00,0x00},/*"砖",8*/
{0xC8,0xB8,0x8F,0xE8,0x88,0x88,0x40,0x48,0x48,0xE8,0x5F,0x48,0x48,0x48,0x40,0x00},
{0x08,0x18,0x08,0xFF,0x04,0x04,0x00,0x02,0x0B,0x12,0x22,0xD2,0x0A,0x06,0x00,0x00},/*"转",9*/
{0x10,0x10,0xFF,0x10,0x90,0x3E,0x4A,0x4A,0x6E,0x00,0x3E,0x4A,0x4A,0x6E,0x00,0x00},
{0x42,0x82,0x7F,0x01,0x10,0x92,0x52,0x3F,0x12,0x12,0x12,0x3F,0x52,0x92,0x10,0x00},/*"撰",10*/
{0x00,0xFE,0x02,0xFA,0x02,0xFE,0x80,0xA8,0xA9,0xFA,0xA8,0xFA,0xA9,0xE8,0x88,0x00},
{0x80,0x47,0x30,0x0F,0x10,0x67,0x20,0x12,0x0A,0xFF,0x02,0xFF,0x0A,0x13,0x20,0x00},/*"赚",11*/
{0x08,0x04,0x03,0x62,0x5E,0x52,0x52,0x50,0x54,0xD3,0x32,0x06,0x02,0x02,0x02,0x00},
{0x01,0xA1,0xA5,0x95,0x55,0x4B,0xA7,0x95,0x79,0x11,0x29,0x49,0x45,0x81,0x81,0x00},/*"篆",12*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xF8,0x08,0x08,0x09,0xEE,0x08,0x08,0x08,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x83,0x60,0x1F,0x40,0x41,0x41,0x7F,0x41,0x41,0x40,0x00},/*"桩",13*/
{0x00,0x00,0xF8,0x08,0x08,0x08,0x08,0x09,0xEE,0x08,0x08,0x08,0x08,0x08,0x00,0x00},
{0x80,0x60,0x1F,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x41,0x40,0x00},/*"庄",14*/
{0x40,0x42,0x24,0x10,0xFF,0x00,0x84,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x04,0x00},
{0x22,0x22,0x12,0x12,0x0A,0xFE,0x42,0x27,0x0A,0x12,0x22,0x32,0x4A,0x42,0x42,0x00},/*"装",15*/
{0x00,0x08,0x30,0x00,0xFF,0x00,0x10,0x10,0xF0,0x1F,0x10,0x10,0xF0,0x10,0x10,0x00},
{0x04,0x04,0x02,0x01,0xFF,0x00,0x80,0x82,0x45,0x28,0x10,0x2C,0x43,0x80,0x00,0x00},/*"妆",16*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xD2,0x56,0x5A,0xD3,0x5A,0x56,0xD2,0x10,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x40,0x57,0x55,0x55,0x7F,0x55,0x55,0x57,0x40,0x00},/*"撞",17*/
{0x00,0x08,0x30,0x80,0xFF,0x00,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x00},
{0x04,0x02,0x01,0x00,0xFF,0x00,0x00,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x00,0x00},/*"壮",18*/
{0x00,0x08,0x30,0x00,0xFF,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x22,0x2C,0x20,0x00},
{0x04,0x04,0x02,0x01,0xFF,0x80,0x40,0x30,0x0E,0x01,0x06,0x18,0x20,0x40,0x80,0x00},/*"状",19*/
{0x10,0x10,0xD0,0xFF,0x90,0x50,0x20,0xF8,0x4F,0x48,0x49,0xFE,0x48,0x48,0x48,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0xFF,0x22,0x22,0x22,0x3F,0x22,0x22,0x22,0x00},/*"椎",20*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x20,0x10,0xFC,0x4B,0x48,0xF9,0x4A,0x48,0x08,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0x00,0xFF,0x22,0x22,0x3F,0x22,0x22,0x20,0x00},/*"锥",21*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0xFC,0x24,0x24,0x26,0x25,0x24,0x24,0x3C,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x5F,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x5F,0x00},/*"追",22*/
{0x20,0x2A,0x2A,0xEA,0xBF,0xAA,0xAA,0x22,0x10,0x0C,0xB7,0x44,0xA4,0x1C,0x04,0x00},
{0x04,0x82,0x81,0x9C,0x44,0x46,0x27,0x14,0x26,0x25,0x44,0x5C,0x80,0x01,0x02,0x00},/*"赘",23*/
{0x00,0xFE,0x02,0x42,0x8A,0x76,0x00,0xC0,0x30,0x0F,0x30,0x40,0x80,0x00,0x00,0x00},
{0x40,0x43,0x48,0x48,0x48,0x4A,0x49,0x7E,0x48,0x48,0x48,0x48,0x48,0x41,0x42,0x00},/*"坠",24*/
{0x20,0x38,0xE7,0x30,0x80,0x42,0x2A,0x12,0x6E,0x80,0x42,0x2A,0x12,0x6E,0x00,0x00},
{0x22,0x27,0x12,0x12,0x80,0x42,0x2A,0x12,0x6E,0x80,0x5E,0x22,0x52,0x8E,0x80,0x00},/*"缀",25*/
{0x40,0x40,0x42,0xCC,0x00,0x04,0x74,0x54,0x55,0x56,0x54,0x54,0x74,0x04,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x08,0x09,0x49,0x89,0x79,0x0D,0x0B,0x09,0x08,0x00,0x00},/*"谆",26*/
{0x00,0x02,0x0C,0xE0,0x40,0x20,0xF8,0x4F,0x48,0x49,0xFE,0x48,0x48,0x48,0x08,0x00},
{0x04,0x04,0x7F,0x00,0x00,0x00,0xFF,0x22,0x22,0x22,0x3F,0x22,0x22,0x22,0x20,0x00},/*"准",27*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0x3E,0x22,0x22,0xE2,0x22,0x22,0x3E,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x81,0x40,0x30,0x0F,0x10,0x20,0x7F,0x42,0x42,0x42,0x40,0x00},/*"捉",28*/
{0x10,0x10,0x10,0xFF,0x90,0x50,0x00,0x7C,0x40,0x40,0xFF,0x40,0x40,0xFC,0x00,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0x7C,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0xFC,0x00},/*"拙",29*/
{0x00,0x00,0x00,0xF0,0x50,0x50,0x50,0x5F,0x52,0x52,0x52,0xF2,0x02,0x02,0x00,0x00},
{0x08,0x08,0x08,0x0B,0x09,0x09,0x09,0xFF,0x09,0x09,0x09,0x0B,0x08,0x08,0x08,0x00},/*"卓",30*/
{0x00,0x00,0x00,0xF0,0x50,0x50,0x50,0x5F,0x54,0x54,0x54,0x54,0xF4,0x04,0x00,0x00},
{0x44,0x44,0x24,0x25,0x15,0x0D,0x05,0xFF,0x05,0x0D,0x15,0x25,0x25,0x44,0x44,0x00},/*"桌",31*/
{0x84,0x84,0xFC,0x84,0x84,0x00,0xA2,0x12,0x8A,0x56,0xE2,0x82,0x42,0x32,0x02,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x00,0x22,0x11,0x4A,0x84,0x7F,0x01,0x06,0x08,0x10,0x00},/*"琢",32*/
{0x04,0x04,0xE4,0x04,0x1F,0x04,0x04,0xF4,0x04,0x04,0x1F,0x04,0xE4,0x04,0x04,0x00},
{0x00,0x78,0x41,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x43,0xF8,0x00,0x00},/*"茁",33*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0x20,0x98,0x0F,0x08,0x08,0xF8,0x00,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x00,0x00,0x41,0x86,0x40,0x3F,0x00,0x00},/*"酌",34*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0xA2,0x12,0x8A,0x56,0xE2,0x82,0x42,0x32,0x02,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x22,0x11,0x4A,0x84,0x7F,0x01,0x06,0x08,0x10,0x00},/*"啄",35*/
{0x40,0x44,0x54,0x54,0x55,0xD6,0x74,0x5C,0x54,0x56,0x55,0x54,0x54,0x44,0x40,0x00},
{0x08,0x08,0x04,0x02,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0x00,0x00,0x00,0x00},/*"着",36*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x20,0x90,0x0C,0x0B,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0x30,0x00,0x00,0x01,0x06,0x40,0x80,0x40,0x3F,0x00,0x00},/*"灼",37*/
{0x10,0x60,0x02,0x8C,0x00,0xF8,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x20,0x63,0x21,0x21,0x21,0x3F,0x21,0x21,0x29,0x33,0x60,0x00},/*"浊",38*/
{0x08,0x08,0xC8,0x38,0x09,0x8E,0x08,0x08,0x08,0xCC,0x3B,0x08,0x88,0x08,0x08,0x00},
{0x00,0x43,0x62,0x5A,0x46,0x51,0xE0,0x00,0x43,0x62,0x5A,0x46,0x51,0xE0,0x00,0x00},/*"兹",39*/
{0x20,0x21,0xF2,0x08,0x04,0x10,0x88,0x84,0x47,0x34,0x44,0x84,0x94,0x0C,0x00,0x00},
{0x00,0x00,0x01,0xFC,0x45,0x45,0x44,0x44,0x44,0x44,0x44,0xFC,0x00,0x01,0x01,0x00},/*"咨",40*/
{0x20,0x22,0xE4,0x10,0x08,0x90,0x88,0x47,0x24,0x1C,0x24,0x44,0x94,0x8C,0x00,0x00},
{0x00,0x80,0x80,0x9F,0x41,0x41,0x21,0x1D,0x01,0x21,0x21,0x5F,0x40,0x80,0x00,0x00},/*"资",41*/
{0x20,0x21,0xF2,0x08,0x04,0x10,0x88,0x84,0x47,0x34,0x44,0x84,0x94,0x0C,0x00,0x00},
{0x04,0x84,0x85,0x94,0x5D,0x57,0x24,0x24,0x24,0x54,0x4C,0x44,0x84,0x05,0x05,0x00},/*"姿",42*/
{0x10,0x60,0x02,0x8C,0x00,0x08,0xC8,0x39,0x8E,0x08,0x08,0xCC,0x3B,0x88,0x08,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x63,0x5A,0x46,0xE1,0x00,0x63,0x5A,0x46,0xE1,0x00,0x00},/*"滋",43*/
{0x10,0x60,0x02,0x8C,0x00,0x08,0x14,0x63,0x08,0x14,0x63,0x08,0x14,0x63,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0xFF,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0xFF,0x00,0x00},/*"淄",44*/
{0x02,0x02,0x02,0xF2,0x8A,0x46,0x40,0x20,0xD8,0x17,0x10,0x10,0xF0,0x10,0x10,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0x80,0x40,0x21,0x16,0x08,0x16,0x21,0x40,0x80,0x00},/*"孜",45*/
{0x20,0x20,0x3E,0x20,0x1F,0x94,0x54,0x00,0x1F,0x24,0xA4,0x24,0x22,0x38,0x00,0x00},
{0x00,0x80,0x48,0x29,0x09,0x4D,0x8D,0x7B,0x0B,0x09,0x28,0x4C,0x98,0x00,0x00,0x00},/*"紫",46*/
{0x00,0x80,0x60,0xF8,0x07,0x80,0x82,0x82,0x82,0xE2,0x92,0x8A,0x86,0x80,0x80,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},/*"仔",47*/
{0x44,0x58,0xC0,0xFF,0x50,0x4C,0x80,0x82,0x82,0x82,0xE2,0x92,0x8A,0x86,0x80,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00},/*"籽",48*/
{0x10,0x60,0x02,0x8C,0x00,0x0C,0x24,0x64,0xAD,0x36,0xA4,0x64,0x24,0x0C,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x01,0x09,0x09,0x09,0xFF,0x09,0x09,0x09,0x01,0x00,0x00},/*"滓",0*/
{0x80,0x82,0x82,0x82,0x82,0x82,0x82,0xE2,0xA2,0x92,0x8A,0x86,0x82,0x80,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"子",1*/
{0x00,0x00,0x00,0xF8,0x88,0x8C,0x8A,0x89,0x88,0x88,0x88,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0xFF,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0xFF,0x00,0x00,0x00,0x00},/*"自",2*/
{0x10,0x60,0x02,0x8C,0x00,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x80,0x9F,0x41,0x21,0x1D,0x21,0x41,0x9F,0x00,0x00,0x00},/*"渍",3*/
{0x10,0x0C,0x04,0x24,0x24,0x24,0x25,0x26,0xA4,0x64,0x24,0x04,0x04,0x14,0x0C,0x00},
{0x02,0x02,0x02,0x02,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},/*"字",4*/
{0x10,0x50,0x7F,0x55,0x55,0x55,0x75,0xD1,0x04,0x54,0x52,0x4A,0x29,0x24,0x10,0x00},
{0x00,0x93,0x51,0x35,0x15,0x55,0x95,0x75,0x15,0x15,0x15,0x35,0x51,0x93,0x00,0x00},/*"鬃",5*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x0C,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0x0C,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x23,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x31,0x00},/*"棕",6*/
{0x00,0x3E,0x22,0xE2,0x3E,0x10,0x0C,0x24,0x24,0x25,0x26,0x24,0x24,0x14,0x0C,0x00},
{0x20,0x3F,0x20,0x1F,0x12,0x22,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x31,0x00},/*"踪",7*/
{0x20,0x18,0x08,0x48,0x48,0x48,0x49,0x4E,0x48,0x48,0x48,0x48,0x08,0x28,0x18,0x00},
{0x00,0x42,0x22,0x1A,0x02,0x42,0x82,0x7E,0x02,0x02,0x02,0x0A,0x12,0x62,0x00,0x00},/*"宗",8*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x0C,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0x0C,0x00},
{0x22,0x67,0x22,0x12,0x12,0x20,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x31,0x00},/*"综",9*/
{0x00,0x00,0x00,0xF1,0x12,0x14,0x10,0x10,0x10,0x14,0x12,0xF1,0x00,0x00,0x00,0x00},
{0x40,0x30,0x00,0x03,0x39,0x41,0x41,0x45,0x59,0x41,0x41,0x73,0x00,0x08,0x30,0x00},/*"总",10*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00},
{0x22,0x67,0x22,0x92,0x52,0x30,0x0E,0x81,0x42,0x34,0x0E,0x01,0x0E,0x70,0x80,0x00},/*"纵",11*/
{0x50,0x48,0x47,0x44,0x64,0x54,0xCC,0x00,0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0x00},
{0x20,0x22,0x22,0x22,0x22,0x22,0x7F,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0x00},/*"邹",12*/
{0x40,0x40,0x48,0x48,0x48,0x48,0x48,0xFF,0x48,0x48,0x48,0x48,0x48,0x40,0x40,0x00},
{0x80,0x40,0x20,0x1E,0x20,0x40,0x40,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},/*"走",13*/
{0x40,0x44,0x54,0x54,0x54,0xD4,0x74,0x5F,0x54,0xD4,0x54,0x54,0x54,0x44,0x40,0x00},
{0x04,0x04,0x82,0x8A,0x49,0x4A,0x2A,0x1E,0x2A,0x2A,0x49,0x4A,0x82,0x04,0x04,0x00},/*"奏",14*/
{0x10,0x10,0xFF,0x10,0x90,0x44,0x54,0xD4,0x74,0x5F,0x54,0xD4,0x54,0x44,0x00,0x00},
{0x42,0x82,0x7F,0x01,0x00,0x82,0x89,0x4A,0x2A,0x1E,0x2A,0x4A,0x89,0x02,0x02,0x00},/*"揍",15*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x46,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"租",16*/
{0x00,0x00,0x00,0x7E,0x42,0x42,0x42,0xC2,0x42,0x42,0x42,0x7E,0x00,0x00,0x00,0x00},
{0x80,0x40,0x30,0x0E,0x10,0x20,0x40,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},/*"足",17*/
{0x00,0x04,0x84,0x44,0x3C,0x44,0x85,0x06,0x84,0x44,0x3C,0x44,0x84,0x04,0x00,0x00},
{0x04,0x04,0x04,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"卒",18*/
{0x10,0x10,0xF1,0x96,0x90,0x90,0x10,0x08,0xF7,0x44,0xC4,0x44,0x44,0x44,0x04,0x00},
{0x80,0x60,0x1F,0x40,0x80,0x7F,0x04,0x85,0x44,0x34,0x0F,0x34,0x44,0x84,0x84,0x00},/*"族",19*/
{0x08,0x08,0x89,0xEE,0x98,0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x43,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"祖",20*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x48,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"诅",21*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x47,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"阻",22*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x40,0x40,0x7F,0x42,0x42,0x42,0x42,0x7F,0x40,0x40,0x00},/*"组",23*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0x00,0x00,0x00,0xFF,0x10,0x10,0x10,0x10,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00},/*"钻",24*/
{0x08,0x04,0x7B,0x4A,0x4E,0x5A,0xEA,0x48,0x5C,0x6B,0x4A,0x4E,0x7A,0x02,0x02,0x00},
{0x11,0x11,0x09,0xA5,0x6B,0x29,0xBD,0xEB,0x29,0x65,0xB3,0x25,0x49,0x11,0x11,0x00},/*"纂",25*/
{0xFC,0x04,0x04,0xFC,0x00,0x20,0xBE,0x60,0x5F,0x54,0x40,0xDF,0x24,0x22,0x38,0x00},
{0x0F,0x04,0x04,0x0F,0x82,0x61,0x1F,0x15,0x15,0x7F,0x15,0x55,0x95,0x7F,0x00,0x00},/*"嘴",26*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x44,0x34,0x45,0x86,0x44,0x34,0x44,0x84,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x04,0x04,0x04,0xFE,0x04,0x04,0x04,0x04,0x00},/*"醉",27*/
{0x40,0x40,0xC0,0x5F,0x55,0x55,0xD5,0x55,0x55,0x55,0x55,0x5F,0x40,0x40,0x40,0x00},
{0x20,0x60,0x3F,0x25,0x15,0x15,0xFF,0x90,0x47,0x29,0x11,0x2D,0x43,0x80,0x80,0x00},/*"最",28*/
{0x00,0x9E,0x92,0x92,0x92,0xDE,0x12,0x12,0x12,0xDE,0x92,0x92,0x92,0x9E,0x00,0x00},
{0x20,0x24,0x24,0x24,0x24,0xFF,0x00,0x00,0x00,0xFF,0x24,0x24,0x24,0x24,0x20,0x00},/*"罪",29*/
{0x04,0x04,0xF4,0x54,0x35,0x9E,0x94,0x94,0x94,0xBE,0x55,0x54,0xF4,0x04,0x04,0x00},
{0x08,0x08,0x0B,0x0A,0x1A,0x6A,0x0A,0x0A,0x4A,0x8A,0x7E,0x0A,0x0B,0x08,0x08,0x00},/*"尊",30*/
{0x40,0x42,0xCC,0x00,0x02,0xFA,0xCA,0xAB,0x9E,0x8A,0x9E,0xAB,0xAA,0xFA,0x02,0x00},
{0x80,0x40,0x3F,0x40,0x88,0x8B,0x8A,0x9A,0xAA,0x8A,0xAA,0xBE,0x8A,0x8B,0x88,0x00},/*"遵",31*/
{0x00,0xFC,0x84,0x84,0xFC,0x40,0x30,0x0F,0xF8,0x88,0x88,0x88,0x88,0x08,0x08,0x00},
{0x00,0x3F,0x10,0x10,0x3F,0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x08,0x08,0x00,0x00},/*"昨",32*/
{0x08,0x08,0x08,0x08,0x88,0x78,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},
{0x20,0x10,0x48,0x46,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x40,0x00},/*"左",33*/
{0x00,0x80,0x60,0xF8,0x07,0x10,0x10,0xD0,0x3F,0x10,0x10,0x10,0x10,0x10,0x10,0x00},
{0x01,0x00,0x00,0xFF,0x20,0x18,0x46,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x40,0x00},/*"佐",34*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x40,0x30,0x0F,0xF8,0x88,0x88,0x88,0x88,0x08,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x08,0x08,0x00},/*"柞",35*/
{0x80,0x60,0xF8,0x07,0x88,0x88,0xFF,0x88,0x88,0x20,0xD8,0x17,0x10,0xF0,0x10,0x00},
{0x00,0x00,0xFF,0x00,0x3F,0x10,0x10,0x10,0x9F,0x40,0x37,0x08,0x36,0x41,0x80,0x00},/*"做",36*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x30,0x0F,0xF8,0x88,0x88,0x88,0x88,0x08,0x08,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x08,0x08,0x00,0x00},/*"作",37*/
{0x00,0x80,0x60,0x1E,0x20,0xC0,0x00,0xFF,0x00,0x80,0x60,0x1E,0x20,0xC0,0x00,0x00},
{0x41,0x40,0x44,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},/*"坐",38*/
{0x00,0x00,0xFC,0x04,0x84,0x74,0x84,0x05,0xFE,0x04,0x84,0x74,0x84,0x04,0x04,0x00},
{0x40,0x30,0x4F,0x41,0x44,0x44,0x44,0x45,0x7F,0x45,0x44,0x44,0x44,0x41,0x40,0x00},/*"座",39*/
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