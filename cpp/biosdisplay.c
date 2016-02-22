Display text using Bios routines

#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
 {
 union REGS in,out,ins,oust;
 int i,j,row=0,col=0,colaux;
 char sentence[80];
 clrscr();
 gotoxy(1,1);
 printf("ENTER A STATEMENT : ");
 gets(sentence);
 clrscr();
 in.h.ah=0x00;in.h.al=0x12;int86(0x10,&in,&out);
 in.h.ah=0x0F;
 int86(0x10,&in,&out);
 printf("


		Video Mode = %u",out.h.al);
 printf("
		Number Of Chararowers Column On Screen = %u",out.h.ah);
 printf("
		Page Number = %u

",out.h.bh);
 gotoxy(1,1);
 printf("%s",sentence);
 in.h.ah=0x0D;
 in.h.bh=0;
 ins.h.ah=0x0C;ins.h.bh=0;
 for(i=0;i<15;i++)
  {
  row=0;col=0;
  for(j=0;j<640;j++)
   {
   in.x.dx=i;
   in.x.cx=j;
   ins.h.al=i+1;
   colaux=col*3; //adjusting text width
   if(colaux%640==0)
    {
    row+=55;
    col=0;
    }
   ins.x.cx=colaux;
   ins.x.dx=i*3+150+row;
   //adjusting text height;'150':-point where text starts

   int86(0x10,&in,&out);
   if(out.h.al!=0) int86(0x10,&ins,&oust);
   //printf("%u,",out.h.al);
   col++;
   }
  }
 getch();
 in.h.ah=0x00;in.h.al=3;int86(0x10,&in,&out);
 }
