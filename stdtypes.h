#ifndef STDTYPES_H_
#define STDTYPES_H_

#define clr_bit(var,bit) var&=~(1<<bit)
//#define clr_bits(var,bit,no
#define toogle_bit(var,bit) var^=(1<<bit)
#define set_bit(var,bit)  var|=(1<<bit)
typedef unsigned char u8_t;
typedef signed char s8_t;
typedef unsigned short int  u16_t;
typedef signed short int s16_t;
typedef unsigned long int u32_t;
typedef signed long int  s32_t;
int z;

#endif
