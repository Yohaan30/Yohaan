#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,x=250,y=250;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();
	while(!kbhit())
	{

		setfillstyle(SOLID_FILL,14);
		fillellipse(x,y,100,100);
		setfillstyle(SOLID_FILL,random(6));
		fillellipse(x-30,y-30,10,10);
		fillellipse(x+30,y-30,10,10);
		setcolor(random(3));
		ellipse(x,y+20,180,0,60,50);
		delay(250);
	}
	closegraph();
}