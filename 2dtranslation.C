#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,tx,ty;
	printf("\nenter the x1 and y1 coordinate:");
	scanf("%f%f",&x1,&y1);
	printf("\nenter the x2 and y2 coordinate:");
	scanf("%f%f",&x2,&y2);
	printf("\nenter the translation parameter:");
	scanf("%f%f",&tx,&ty);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	outtextxy(x1,y1,"line before translation");
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	line(x1,y1,x2,y2);
	outtextxy(x2,y2,"line after translation");
	getch();
	closegraph();
}