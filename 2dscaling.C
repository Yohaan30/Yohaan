#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,sx,sy;
	printf("\nenter the x1 and y1 coordinate:");
	scanf("%f%f",&x1,&y1);
	printf("\nenter the x2 and y2 coordinate:");
	scanf("%f%f",&x2,&y2);
	printf("\nenter the scaling parameter:");
	scanf("%f%f",&sx,&sy);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	outtextxy(x1,y1,"line before scaling");
	x1=x1*sx;
	y1=y1*sy;
	x2=x2*sx;
	y2=y2*sy;
	line(x1,y1,x2,y2);
	outtextxy(x1,y1,"line after scaling");
	getch();
	closegraph();
}