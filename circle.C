#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	circle(xcen,ycen,200);
	getch();
	closegraph();

}