/*第六区
   28 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 肌 饥 迹 激 讥 鸡 姬 绩 缉
１ 吉 极 棘 辑 籍 集 及 急 疾 汲
２ 即 嫉 级 挤 几 脊 己 蓟 技 冀
３ 季 伎 祭 剂 悸 济 寄 寂 计 记
４ 既 忌 际 妓 继 纪 嘉 枷 夹 佳
５ 家 加 荚 颊 贾 甲 钾 假 稼 价
６ 架 驾 嫁 歼 监 坚 尖 笺 间 煎
７ 兼 肩 艰 奸 缄 茧 检 柬 碱 硷
８ 拣 捡 简 俭 剪 减 荐 槛 鉴 践
９ 贱 见 键 箭 件
28 th           0x009600-0x00a27f               38400-41599
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x009600
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0xFE,0x22,0x22,0xFE,0x00,0x00,0xFE,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x80,0x60,0x1F,0x42,0x82,0x7F,0x80,0x60,0x1F,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"肌",0*/
{0x40,0x30,0xCF,0x08,0x28,0x18,0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x80,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"饥",1*/
{0x40,0x40,0x42,0xCC,0x00,0x08,0xC8,0x08,0xF8,0x09,0x0E,0xF8,0x08,0x48,0x88,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x51,0x48,0x46,0x41,0x48,0x50,0x4F,0x40,0x40,0x41,0x00},/*"迹",2*/
{0x20,0xC2,0x0C,0x80,0x7C,0xD6,0x55,0x54,0x7C,0x40,0x30,0xDF,0x10,0xF0,0x10,0x00},
{0x04,0x04,0x7E,0x81,0x62,0x1E,0x4B,0x8A,0x7A,0x02,0x80,0x67,0x18,0x67,0x80,0x00},/*"激",3*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x88,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"讥",4*/
{0x08,0x48,0x88,0x08,0xC8,0x38,0x00,0x00,0xFC,0x06,0x15,0x44,0x84,0x7C,0x00,0x00},
{0x20,0x10,0x0C,0x03,0x04,0x18,0x00,0x10,0x13,0x12,0x12,0x52,0x92,0x42,0x3E,0x00},/*"鸡",5*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0xFE,0x02,0xE2,0x22,0x3E,0x22,0xE2,0x02,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x00,0x7F,0x40,0x47,0x44,0x7C,0x44,0x47,0x40,0x00},/*"姬",6*/
{0x20,0x30,0xAC,0x63,0x10,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00},
{0x22,0x67,0x22,0x12,0x12,0x80,0x9F,0x41,0x21,0x1D,0x21,0x41,0x9F,0x00,0x00,0x00},/*"绩",7*/
{0x20,0x30,0xAC,0x63,0x10,0x40,0x40,0xDE,0x52,0x52,0x52,0x52,0xDE,0x40,0x40,0x00},
{0x22,0x67,0x22,0x12,0x12,0x20,0x20,0x3F,0x25,0x25,0x15,0x15,0xFF,0x10,0x10,0x00},/*"缉",8*/
{0x08,0x08,0x88,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0x88,0x08,0x08,0x00},
{0x00,0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0xFC,0x00,0x00,0x00,0x00},/*"吉",9*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x02,0x02,0xFE,0x02,0x02,0x62,0x5A,0xC6,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x43,0x30,0x8F,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x00},/*"极",10*/
{0x04,0xE4,0x24,0xFF,0x24,0xE4,0x00,0x04,0xE4,0x24,0xFF,0x24,0xE4,0x04,0x00,0x00},
{0x20,0x13,0x08,0xFF,0x0A,0x33,0x00,0x20,0x13,0x08,0xFF,0x0A,0x13,0x20,0x20,0x00},/*"棘",11*/
{0xC8,0xB8,0x8F,0xE8,0x88,0xC8,0x40,0xDE,0x52,0x52,0x52,0x52,0xDE,0x40,0x40,0x00},
{0x08,0x18,0x08,0xFF,0x04,0x24,0x20,0x3F,0x25,0x25,0x15,0x15,0xFF,0x10,0x10,0x00},/*"辑",12*/
{0x08,0xA4,0xA3,0xF2,0xA6,0xAA,0x02,0x0A,0x24,0xF3,0x22,0x26,0xFA,0x22,0x02,0x00},
{0x22,0x12,0x0A,0xFF,0x0A,0x32,0x02,0x01,0xFD,0x55,0x55,0x55,0x55,0xFD,0x01,0x00},/*"籍",13*/
{0x20,0x10,0x08,0xFC,0x57,0x54,0x54,0x55,0xFE,0x54,0x54,0x54,0x54,0x04,0x00,0x00},
{0x44,0x44,0x24,0x27,0x15,0x0D,0x05,0xFF,0x05,0x0D,0x15,0x25,0x25,0x45,0x44,0x00},/*"集",14*/
{0x00,0x00,0x02,0x02,0xFE,0x42,0x82,0x02,0x42,0x72,0x4E,0x40,0xC0,0x00,0x00,0x00},
{0x80,0x40,0x30,0x0C,0x83,0x80,0x41,0x46,0x28,0x10,0x28,0x46,0x41,0x80,0x80,0x00},/*"及",15*/
{0x00,0x10,0x08,0x94,0x93,0x92,0x92,0x92,0x92,0x9A,0x96,0x90,0xF0,0x00,0x00,0x00},
{0x40,0x30,0x04,0x74,0x84,0x84,0x8C,0xB4,0x84,0x84,0x84,0xE4,0x07,0x10,0x60,0x00},/*"急",16*/
{0x10,0x60,0x00,0xFC,0x04,0x84,0x7C,0x24,0x25,0xE6,0x24,0x24,0x24,0x24,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x82,0x82,0x42,0x22,0x1A,0x07,0x1A,0x22,0x42,0x82,0x82,0x00},/*"疾",17*/
{0x10,0x60,0x02,0x0C,0xC0,0x02,0x02,0xFE,0x02,0x02,0x62,0x5A,0x46,0xC0,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x40,0x30,0x8E,0x81,0x46,0x28,0x10,0x28,0x46,0x81,0x80,0x00},/*"汲",18*/
{0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,0x00},
{0x00,0x3F,0x20,0x10,0x0A,0x04,0x18,0x00,0x00,0xFF,0x00,0x04,0x08,0x07,0x00,0x00},/*"即",19*/
{0x10,0xF0,0x1F,0x10,0xF0,0x20,0x40,0xFC,0x04,0x84,0x75,0xC6,0x44,0x44,0x04,0x00},
{0x41,0x22,0x14,0x0C,0x33,0x84,0x62,0x1F,0x85,0x44,0x34,0x0F,0x34,0x44,0x84,0x00},/*"嫉",20*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0x02,0x02,0xFE,0x02,0x02,0x62,0x5A,0xC6,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x40,0x30,0x8F,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x00},/*"级",21*/
{0x10,0x10,0x10,0xFF,0x90,0x54,0x0C,0x94,0xA5,0x46,0xA4,0x94,0x0C,0x04,0x04,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x81,0x61,0x1E,0x00,0x00,0x00,0xFE,0x01,0x01,0x01,0x00},/*"挤",22*/
{0x00,0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00,0x00},
{0x80,0x40,0x30,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x78,0x00},/*"几",23*/
{0x80,0x80,0x51,0x4A,0xE4,0x50,0x48,0x47,0x48,0x50,0xE4,0x4A,0x51,0x80,0x80,0x00},
{0x00,0x00,0x00,0x00,0xFF,0x12,0x12,0x12,0x52,0x92,0x7F,0x00,0x00,0x00,0x00,0x00},/*"脊",24*/
{0x00,0x00,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00},/*"己",25*/
{0x04,0x84,0xC4,0xB4,0xA4,0xAF,0xE4,0xA4,0x84,0x0F,0xC4,0x04,0x04,0xF4,0x04,0x00},
{0x01,0x40,0xCF,0x4A,0x4A,0x2F,0x2A,0x2A,0x2F,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"蓟",26*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x08,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x08,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x80,0x40,0x43,0x2C,0x10,0x28,0x46,0x81,0x80,0x00},/*"技",27*/
{0x10,0x12,0xF2,0xAA,0xAA,0xBF,0xA0,0xE0,0xA0,0xA7,0xAA,0xAA,0xEA,0x09,0x0C,0x00},
{0x20,0x20,0xAB,0x6A,0x2A,0x3E,0x2A,0x2B,0x2A,0x3E,0x2A,0x6A,0xAB,0x20,0x20,0x00},/*"冀",28*/
{0x00,0x10,0x90,0x92,0x52,0x32,0x12,0xFE,0x12,0x31,0x51,0x91,0x90,0x10,0x00,0x00},
{0x09,0x09,0x08,0x08,0x09,0x49,0x89,0x79,0x0D,0x0B,0x09,0x08,0x08,0x09,0x09,0x00},/*"季",29*/
{0x00,0x80,0x60,0xF8,0x07,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x08,0x08,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x83,0x44,0x28,0x10,0x28,0x44,0x43,0x80,0x80,0x00},/*"伎",30*/
{0x10,0x28,0xCC,0x57,0x24,0x94,0x8C,0x80,0x87,0x9C,0x24,0x64,0x94,0x0C,0x00,0x00},
{0x01,0x01,0x40,0x24,0x14,0x44,0x84,0x7C,0x04,0x04,0x14,0x24,0x40,0x01,0x01,0x00},/*"祭",31*/
{0x84,0x94,0x54,0x25,0x26,0x54,0x4C,0x84,0x04,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x80,0x60,0x1F,0x00,0x00,0x00,0xFF,0x00,0x01,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"剂",32*/
{0xE0,0x00,0xFF,0x10,0xA0,0x88,0x4A,0x2A,0x1A,0xFE,0x19,0x29,0x49,0x88,0x80,0x00},
{0x01,0x00,0xFF,0x00,0x00,0x08,0x09,0x49,0x89,0x7D,0x0B,0x09,0x08,0x08,0x00,0x00},/*"悸",33*/
{0x10,0x60,0x02,0x8C,0x00,0x04,0x0C,0x94,0xA5,0x46,0xA4,0x94,0x0C,0x04,0x04,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x81,0x61,0x1E,0x00,0x00,0x00,0xFE,0x01,0x01,0x01,0x00},/*"济",34*/
{0x10,0x0C,0x24,0x24,0xA4,0x64,0x3D,0x26,0x64,0xA4,0x24,0x24,0x24,0x14,0x0C,0x00},
{0x01,0x01,0x01,0x3D,0x25,0x25,0x25,0x25,0x3D,0x41,0x81,0x7F,0x01,0x01,0x01,0x00},/*"寄",35*/
{0x10,0x0C,0x04,0x04,0xF4,0x24,0x25,0x26,0x04,0xE4,0x24,0x24,0x24,0xF4,0x0C,0x00},
{0x21,0x11,0x49,0x81,0x7D,0x01,0x09,0x31,0x80,0x41,0x26,0x18,0x26,0x41,0x80,0x00},/*"寂",36*/
{0x40,0x40,0x42,0xCC,0x00,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"计",37*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0x84,0x84,0x84,0x84,0x84,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x00,0x3F,0x40,0x40,0x40,0x40,0x41,0x40,0x70,0x00},/*"记",38*/
{0x00,0xFE,0x92,0x92,0x92,0xFE,0x00,0x72,0x42,0x42,0xFE,0x42,0x42,0x42,0x40,0x00},
{0x00,0x7F,0x20,0x10,0x0A,0x04,0x98,0x40,0x30,0x0C,0x03,0x3E,0x40,0x40,0x70,0x00},/*"既",39*/
{0x00,0x00,0xF2,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x1E,0x00,0xC0,0x00,0x00},
{0x40,0x38,0x00,0x01,0x3D,0x41,0x41,0x43,0x4D,0x41,0x41,0x71,0x05,0x09,0x30,0x00},/*"忌",40*/
{0x00,0xFE,0x22,0x5A,0x86,0x00,0x20,0x22,0x22,0x22,0xE2,0x22,0x22,0x22,0x20,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x10,0x0C,0x03,0x40,0x80,0x7F,0x00,0x01,0x06,0x18,0x00},/*"际",41*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x08,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x08,0x00},
{0x40,0x22,0x15,0x08,0x16,0xA1,0x80,0x40,0x43,0x2C,0x10,0x28,0x46,0x81,0x80,0x00},/*"妓",42*/
{0x20,0x30,0xAC,0x63,0x10,0x00,0xFE,0x48,0x50,0x40,0xFF,0x40,0x50,0x48,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x00,0x7F,0x44,0x42,0x41,0x7F,0x41,0x42,0x44,0x40,0x00},/*"继",43*/
{0x20,0x30,0xAC,0x63,0x10,0x00,0x84,0x84,0x84,0x84,0x84,0x84,0xFC,0x00,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x41,0x40,0x78,0x00},/*"纪",44*/
{0x02,0x02,0x0A,0xEA,0xAA,0xAA,0xAA,0xAF,0xAA,0xAA,0xAA,0xEA,0x0A,0x02,0x02,0x00},
{0x82,0x4A,0x2A,0x1E,0x0B,0x4A,0x8A,0x7A,0x02,0xFA,0x4B,0x4A,0x4A,0xFA,0x02,0x00},/*"嘉",45*/
{0x08,0xC8,0xFF,0x48,0x88,0x10,0xFF,0x10,0x10,0xF0,0x00,0xF8,0x08,0x08,0xF8,0x00},
{0x03,0x00,0xFF,0x80,0x41,0x30,0x0F,0x40,0x80,0x7F,0x00,0x7F,0x20,0x20,0x7F,0x00},/*"枷",46*/
{0x00,0x08,0x08,0x28,0x48,0x08,0x08,0xFF,0x08,0x08,0x48,0x28,0x08,0x08,0x00,0x00},
{0x81,0x81,0x41,0x41,0x21,0x11,0x0D,0x03,0x0D,0x11,0x21,0x41,0x41,0x81,0x81,0x00},/*"夹",47*/
{0x00,0x80,0x60,0xF8,0x47,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x40,0x40,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x40,0x00},/*"佳",48*/
{0x10,0x2C,0x24,0x24,0xA4,0xA4,0x65,0xA6,0x24,0x24,0x24,0x24,0xA4,0x34,0x0C,0x00},
{0x40,0x49,0x49,0x29,0x24,0x14,0x52,0x89,0x7F,0x04,0x0A,0x11,0x10,0x20,0x20,0x00},/*"家",0*/
{0x10,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00,0xF8,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x80,0x40,0x30,0x0F,0x40,0x80,0x7F,0x00,0x00,0x7F,0x20,0x20,0x20,0x7F,0x00,0x00},/*"加",1*/
{0x04,0x04,0x44,0x44,0x4F,0x44,0x44,0xF4,0x44,0x44,0x4F,0x44,0x44,0x04,0x04,0x00},
{0x84,0x84,0x44,0x45,0x26,0x14,0x0C,0x07,0x0C,0x14,0x26,0x45,0x44,0x84,0x84,0x00},/*"荚",2*/
{0x00,0x28,0xC8,0x08,0xFF,0x88,0x68,0x00,0xF2,0x1A,0x16,0xD2,0x12,0xF2,0x02,0x00},
{0x82,0x42,0x22,0x1A,0x07,0x0A,0xB2,0x80,0x4F,0x20,0x18,0x17,0x20,0x4F,0x80,0x00},/*"颊",3*/
{0x00,0x02,0x7A,0x4A,0x4A,0x7E,0x4A,0x4A,0x4A,0x7E,0x4A,0x4A,0x7A,0x02,0x00,0x00},
{0x00,0x80,0x80,0x9F,0x41,0x41,0x21,0x1D,0x01,0x21,0x21,0x5F,0x40,0x80,0x00,0x00},/*"贾",4*/
{0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00,0x00},
{0x00,0x00,0x07,0x02,0x02,0x02,0x02,0xFF,0x02,0x02,0x02,0x02,0x07,0x00,0x00,0x00},/*"甲",5*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xFE,0x22,0x22,0xFE,0x22,0x22,0xFE,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0x07,0x02,0x02,0xFF,0x02,0x02,0x07,0x00,0x00},/*"钾",6*/
{0x80,0x60,0xF8,0x07,0x00,0xFE,0x22,0x22,0x3E,0x00,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x00,0xFF,0x09,0x09,0x89,0x40,0x2F,0x11,0x29,0x47,0x80,0x00},/*"假",7*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x0C,0x24,0xA4,0x65,0xA6,0x24,0x24,0x24,0x8C,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x02,0x49,0x49,0x24,0x52,0x89,0x7F,0x02,0x0D,0x10,0x00},/*"稼",8*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x20,0x90,0x0C,0x03,0x0C,0x90,0x20,0x40,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x60,0x1F,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00},/*"价",9*/
{0x00,0x84,0x44,0x34,0x0F,0x44,0x84,0x7C,0x00,0x7C,0x44,0x44,0x44,0x7C,0x00,0x00},
{0x44,0x44,0x24,0x24,0x14,0x0C,0x04,0xFF,0x04,0x0C,0x14,0x24,0x24,0x44,0x44,0x00},/*"架",10*/
{0x00,0x44,0x24,0x9C,0x87,0xA4,0xC4,0xBC,0x80,0xBC,0xA4,0x24,0x24,0x3C,0x00,0x00},
{0x00,0x20,0x20,0x20,0x2E,0x28,0x28,0x28,0x28,0x28,0x0F,0x48,0x88,0x78,0x00,0x00},/*"驾",11*/
{0x10,0xF0,0x1F,0x10,0xF0,0x00,0x0C,0x24,0xA4,0x65,0xA6,0x24,0x24,0x24,0x8C,0x00},
{0x82,0x65,0x18,0x16,0x61,0x00,0x49,0x49,0x24,0x52,0x89,0x7F,0x02,0x0D,0x10,0x00},/*"嫁",12*/
{0x04,0xC4,0x3C,0x24,0x24,0xE4,0x80,0x84,0x84,0x84,0xFE,0x82,0x83,0x82,0x80,0x00},
{0x82,0x41,0x21,0x12,0x0C,0x03,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"歼",13*/
{0x00,0x00,0x7E,0x00,0x00,0xFF,0x00,0x40,0x30,0x0F,0x04,0x14,0x64,0x04,0x00,0x00},
{0x40,0x40,0x7E,0x42,0x42,0x7E,0x42,0x42,0x42,0x7E,0x42,0x42,0x7E,0x40,0x40,0x00},/*"监",14*/
{0x00,0x00,0xFE,0x00,0x00,0xFF,0x00,0x86,0x8A,0x52,0x22,0x52,0x4A,0x86,0x80,0x00},
{0x40,0x40,0x48,0x48,0x48,0x49,0x48,0x7E,0x48,0x48,0x48,0x48,0x48,0x40,0x40,0x00},/*"坚",15*/
{0x00,0x40,0x20,0x10,0x0C,0x00,0x00,0xBF,0x00,0x00,0x04,0x08,0x10,0x60,0x00,0x00},
{0x82,0x82,0x42,0x42,0x22,0x12,0x0A,0x07,0x0A,0x12,0x22,0x42,0x42,0x82,0x82,0x00},/*"尖",16*/
{0x08,0x84,0x83,0x82,0x86,0x8A,0xF2,0x4A,0x44,0x53,0x62,0x46,0x4A,0x02,0x02,0x00},
{0x04,0x04,0x44,0x44,0x44,0x24,0x27,0x2A,0x12,0x32,0x4A,0x46,0x82,0xE2,0x00,0x00},/*"笺",17*/
{0x00,0xF8,0x01,0x06,0x00,0xF0,0x12,0x12,0x12,0xF2,0x02,0x02,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x00,0x00,0x1F,0x11,0x11,0x11,0x1F,0x00,0x40,0x80,0x7F,0x00,0x00},/*"间",18*/
{0x04,0x04,0xF4,0x55,0x56,0x54,0xF4,0x04,0x04,0xF4,0x06,0x05,0xF4,0x04,0x04,0x00},
{0x80,0x60,0x0F,0x01,0x25,0xC9,0x07,0x00,0x20,0xC0,0x04,0x08,0x27,0xC0,0x00,0x00},/*"煎",19*/
{0x80,0x84,0xA4,0xA5,0xA6,0xFC,0xA4,0xA4,0xFC,0xA6,0xA5,0xE4,0x84,0x84,0x80,0x00},
{0x20,0x20,0x12,0x0A,0x06,0xFF,0x02,0x02,0xFF,0x06,0x0A,0x13,0x10,0x20,0x20,0x00},/*"兼",20*/
{0x00,0x00,0x00,0xFC,0x24,0xA4,0xA4,0xA5,0xA6,0xA4,0xA4,0xA4,0xBC,0x00,0x00,0x00},
{0x40,0x20,0x18,0x07,0x00,0xFF,0x0A,0x0A,0x0A,0x0A,0x4A,0x8A,0x7F,0x00,0x00,0x00},/*"肩",21*/
{0x04,0x34,0xC4,0x04,0xC4,0x3C,0x00,0xFE,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x40,0x30,0x0C,0x03,0x0C,0x30,0x00,0xFF,0x40,0x23,0x0C,0x14,0x22,0x41,0x40,0x00},/*"艰",22*/
{0x10,0x10,0xF0,0x1F,0x10,0x10,0xF0,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x80,0x00},
{0x80,0x41,0x22,0x14,0x08,0x16,0x61,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"奸",23*/
{0x20,0x38,0xE7,0x30,0x00,0xF8,0x08,0x48,0x48,0x48,0x08,0xFF,0x08,0x09,0x8A,0x00},
{0x22,0x27,0x12,0x92,0x40,0x3F,0x00,0x1E,0x92,0x5E,0x20,0x17,0x38,0x46,0xF1,0x00},/*"缄",24*/
{0x04,0x04,0xC4,0x44,0x5F,0x44,0x44,0xF4,0x44,0x44,0x5F,0x44,0xC4,0x04,0x04,0x00},
{0x00,0x40,0xC7,0x44,0x44,0x44,0x44,0x7F,0x24,0x24,0x24,0x34,0x27,0xC0,0x00,0x00},/*"茧",25*/
{0x10,0x10,0xD0,0xFF,0x90,0x50,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x40,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x41,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x40,0x00},/*"检",26*/
{0x04,0x04,0xE4,0x24,0xA4,0x24,0x24,0xFF,0x24,0x24,0xA4,0x24,0xE4,0x04,0x04,0x00},
{0x40,0x40,0x27,0x22,0x12,0x0B,0x06,0xFF,0x06,0x0B,0x12,0x22,0x27,0x40,0x40,0x00},/*"柬",27*/
{0x84,0xE4,0x5C,0xC4,0x00,0xF8,0x08,0x48,0x48,0x48,0x08,0xFF,0x08,0x09,0x8A,0x00},
{0x00,0x3F,0x10,0xBF,0x40,0x3F,0x00,0x1E,0x92,0x5E,0x20,0x17,0x38,0x46,0xF1,0x00},/*"碱",28*/
{0x04,0xE4,0x5C,0x44,0xC4,0x40,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x40,0x00},
{0x01,0x3F,0x10,0x10,0x3F,0x40,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x40,0x00},/*"硷",29*/
{0x10,0x10,0x10,0xFF,0x10,0x14,0xA4,0x64,0x3C,0x27,0xE4,0x04,0x04,0x04,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x20,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x30,0x00},/*"拣",30*/
{0x10,0x10,0x10,0xFF,0x10,0x50,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x40,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x40,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x40,0x00},/*"捡",31*/
{0x08,0x04,0xC3,0x12,0x26,0x8A,0xA2,0xAA,0xA4,0xA3,0x22,0x26,0xEA,0x02,0x02,0x00},
{0x00,0x00,0xFF,0x00,0x00,0x3F,0x24,0x24,0x24,0x3F,0x00,0x80,0xFF,0x00,0x00,0x00},/*"简",32*/
{0x00,0x80,0x60,0xF8,0x07,0x40,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x40,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x40,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x40,0x00},/*"俭",33*/
{0x02,0x02,0xFA,0xAA,0xAB,0xAA,0xFA,0x02,0x02,0xF2,0x03,0x02,0xFA,0x02,0x02,0x00},
{0x00,0x88,0x8B,0x48,0x28,0x1A,0x0B,0x08,0x08,0x48,0x88,0x4A,0x3B,0x00,0x00,0x00},/*"剪",34*/
{0x00,0x02,0x0C,0xC0,0x00,0xF8,0x08,0x48,0x48,0x48,0x08,0xFF,0x08,0x09,0x8A,0x00},
{0x02,0x02,0x7F,0x80,0x40,0x3F,0x00,0x1E,0x92,0x5E,0x20,0x17,0x38,0x46,0xF1,0x00},/*"减",35*/
{0x04,0x24,0x24,0x24,0xAF,0x64,0x3C,0xA4,0xA4,0xA4,0xAF,0xA4,0xA4,0x24,0x04,0x00},
{0x10,0x08,0x04,0x02,0xFF,0x00,0x04,0x04,0x44,0x84,0x7E,0x05,0x04,0x04,0x04,0x00},/*"荐",36*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0x7E,0x00,0xFF,0x10,0x08,0x17,0x64,0x04,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x43,0x40,0x7E,0x42,0x7E,0x42,0x7E,0x42,0x7E,0x40,0x00},/*"槛",37*/
{0x00,0x00,0x3E,0x00,0x80,0xBF,0x40,0x20,0x58,0x87,0x84,0x0C,0x34,0x04,0x00,0x00},
{0x02,0x42,0x49,0x49,0x5A,0x6A,0x4A,0x7E,0x4A,0x6A,0x5A,0x49,0x49,0x42,0x02,0x00},/*"鉴",38*/
{0x00,0x3E,0x22,0xE2,0x22,0x3E,0x00,0x90,0x90,0xFF,0x90,0x49,0x4A,0x48,0x40,0x00},
{0x20,0x3F,0x20,0x1F,0x11,0x11,0x40,0x40,0x20,0x13,0x0C,0x14,0x22,0x41,0xF8,0x00},/*"践",39*/
{0x00,0xFE,0x02,0xF2,0x02,0xFE,0x80,0x90,0x90,0xFF,0x90,0x49,0x4A,0x48,0x40,0x00},
{0x80,0x47,0x30,0x0F,0x10,0x27,0x40,0x40,0x20,0x13,0x0C,0x14,0x22,0x41,0xF8,0x00},/*"贱",40*/
{0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0xF2,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x80,0x80,0x40,0x47,0x20,0x18,0x06,0x01,0x7E,0x80,0x80,0x87,0x80,0x80,0xE0,0x00},/*"见",41*/
{0x40,0x30,0xEF,0x24,0x24,0x80,0xE4,0x9C,0x10,0x54,0x54,0xFF,0x54,0x7C,0x10,0x00},
{0x01,0x01,0x7F,0x21,0x51,0x26,0x18,0x27,0x44,0x45,0x45,0x5F,0x45,0x45,0x44,0x00},/*"键",42*/
{0x48,0x44,0x43,0x52,0x66,0x4A,0x42,0x4A,0x44,0x43,0x62,0x56,0x4A,0x42,0x42,0x00},
{0x00,0x00,0xFF,0x15,0x55,0x95,0x7F,0x00,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"箭",43*/
{0x00,0x80,0x60,0xF8,0x07,0x80,0x60,0x1C,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x02,0x02,0x02,0x02,0x02,0xFF,0x02,0x02,0x02,0x02,0x00},/*"件",44*/
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
