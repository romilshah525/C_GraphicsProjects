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
 for(j=0;j<=300;j+=2)
 {
  for(i=-xm-1200;i<xm+400;i++)
  {
   t=(i*22)/(7*180.0);
   y=sin(t);
   putpixel((xm/2)+(25*t)+j,(ym/2)-(50*y),15);
  }
  delay(10);
  for(i=-xm-1200;i<xm+400;i++)
  {
   t=(i*22)/(7*180.0);
   y=sin(t);
   putpixel((xm/2)+(25*t)+j,(ym/2)-(50*y),0);
  }
  delay(10);
 }
 closegraph();
 printf("Press Any Key To Return.");
 getch();
}