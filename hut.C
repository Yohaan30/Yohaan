#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(50,120,550,400);
	rectangle(380,250,220,400);
	rectangle(170,350,100,290);
	rectangle(500,350,430,290);
	rectangle(170,250,100,190);
	rectangle(500,250,430,190);
	line(300,250,300,400);
	line(50,120,300,20);
	line(300,20,550,120);

	getch();
	closegraph();

}