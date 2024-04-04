#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void flood(int,int,int,int);
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("\n circle filled by flood fill algorithm");
	circle(100,200,40);
	flood(104,204,8,0);
	getch();
}
void flood(int x,int y,int fill_col,int old_col)
{
	if((getpixel(x,y)==old_col))
	{
		delay(1);
		putpixel(x,y,fill_col);
		flood(x+1,y,fill_col,old_col);
		flood(x-1,y,fill_col,old_col);
		flood(x,y+1,fill_col,old_col);
		flood(x,y-1,fill_col,old_col);


	}
}