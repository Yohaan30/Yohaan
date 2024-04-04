#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,i,dx,dy,m;
	printf("\nenter the x1 and y1 coordinate:");
	scanf("%f%f",&x1,&y1);
	printf("\nenter the x2 and y2 coordinate:");
	scanf("%f%f",&x2,&y2);
	m=(y2-y1)/(x2-x1);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	for(i=x1;i<=x2;i++)
	{
		if(m<1)
		{
			dx=x1+1;
			dy=y1+m;
		}
		else if(m>1)
		{
			dx=x1+(1/m);
			dy=y1+1;
		}
		else
		{
			dx=x1+1;
			dy=y1+1;
		}
		abs(dx);
		abs(dy);
		putpixel(dx,dy,15);
		x1=dx;
		y1=dy;
		delay(50);
	 }
	 outtextxy(x2,y2,"dda line");
	 getch();
	 closegraph();

}