#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	ellipse(xcen,ycen,0,360,100,50);
	getch();
	closegraph();

}