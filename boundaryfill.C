#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void boundary_fill(int x,int y,int fcolor,int bcolor)
{
if((getpixel(x,y)!=bcolor)&&(getpixel(x,y)!=fcolor))
{
delay(1);
putpixel(x,y,fcolor);
boundary_fill(x+1,y,fcolor,bcolor);
boundary_fill(x-1,y,fcolor,bcolor);
boundary_fill(x,y+1,fcolor,bcolor);
boundary_fill(x,y-1,fcolor,bcolor);
boundary_fill(x+1,y+1,fcolor,bcolor);
boundary_fill(x+1,y-1,fcolor,bcolor);
boundary_fill(x-1,y+1,fcolor,bcolor);
boundary_fill(x-1,y-1,fcolor,bcolor);
}
}
void main()
{
int x,y,fcolor,bcolor;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(50,50,"RECTANGLE FILLED BY fLOOD FILL:8-CONNECTER");
rectangle(50,80,100,120);
boundary_fill(52,82,15,6);
getch();
}