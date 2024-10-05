#include<regx52.h>
#define STEPPER P1
#define SEGMENT P2
void delay(unsigned int);
void display(unsigned char);
void angle();
void main()
{
while(1)
{
P1=0X01;
angle();
P1=0x03;
angle();
P1=0x02;
angle();
P1=0x06;
angle();
P1=0x04;
angle();
P1=0x0C;
angle();
P1=0x08;
angle();
P1=0x09;
angle();
}}
void angle()
{
unsigned char i;
for(i=0;i<6;i++)
{
display(i);
delay(1000);
}}
void delay(unsigned int a)
{
unsigned char i;
for(;a>0;a--)
{
for(i=250;i>0;i--);
}}
void display(unsigned char num)
{
switch(num)
{
	case 1:SEGMENT=0xF9;
	break;
	case 2:SEGMENT=0xA4;
	break;
	case 3:SEGMENT=0xB0;
	break;
	case 4:SEGMENT=0x99;
	break;
	case 5:SEGMENT=0x92;
	break;
	}}