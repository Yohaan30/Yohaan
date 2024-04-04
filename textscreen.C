#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,col=480,row=640,font=4,direction=2,size=8,color=15;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();
	while(!kbhit())
	{
		settextstyle(random(font),random(direction),random(size));
		setcolor(random(color));
		outtextxy(random(col),random(row),"datta");
		delay(250);
	}
	closegraph();
}