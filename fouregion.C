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
	rectangle(xcen+50,ycen-200,xcen+200,ycen-50);
	ellipse(xcen-xcen/2,ycen+ycen/2,0,360,100,50);
	ellipse(xcen+xcen/2,ycen+ycen/2,0,180,100,50);
	ellipse(xcen-xcen/2,ycen-ycen/2,0,360,50,50);

	getch();
	closegraph();
}
