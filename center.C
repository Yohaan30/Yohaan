#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	line(xcen,0,xcen,getmaxy());
	line(0,ycen,getmaxx(),ycen);
	getch();
	closegraph();

}