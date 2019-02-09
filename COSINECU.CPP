#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
 int gdriver = DETECT,gmode,xm,ym,i,j;
 double x,t,y;
 clrscr();
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 xm=getmaxx();
 ym=getmaxy();
 line(0,0,xm,0);
 line(0,0,0,ym);
 line(xm,0,xm,ym);
 line(0,ym,xm,ym);
 for(j=0;j<5;j++)
 {
  line((xm/2),0,(xm/2),ym);
  line(0,(ym/2),xm,(ym/2));
  for(i=-xm-400;i<xm+400;i++)
  {
   t=(i*22)/(7*180.0);
   y=cos(t);
   putpixel((xm/2)+(25*t),(ym/2)-(50*y),15);
   delay(2);
  }
  for(i=-xm-400;i<xm+400;i++)
  {
   t=(i*22)/(7*180.0);
   y=cos(t);
   putpixel((xm/2)+(25*t),(ym/2)-(50*y),0);
   line((xm/2),0,(xm/2),ym);
   line(0,(ym/2),xm,(ym/2));
   line(0,0,xm,0);
   line(0,0,0,ym);
   line(xm,0,xm,ym);
   line(0,ym,xm,ym);
   delay(1);
  }
 }
 closegraph();
 printf("Press Any Key To Return.");
 getch();
}