#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	rectangle(xcen-120,ycen-180,xcen+120,ycen+180);
	getch();
	closegraph();

}