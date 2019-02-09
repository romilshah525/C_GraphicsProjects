#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
 int gdriver = DETECT,gmode,xm,ym,j,c=50;
 double x,t,y,i;
 clrscr();
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 xm=getmaxx();
 ym=getmaxy();
 line(0,0,xm,0);
 line(0,0,0,ym);
 line(xm,0,xm,ym);
 line(0,ym,xm,ym);
 for(j=0;j<3;j++)
 {
  line((xm/2),0,(xm/2),ym);
  line(0,(ym/2),xm,(ym/2));
  for(i=0;i<=360;i+=0.5)
  {
   t=(i*22)/(7*180.0);
   x=cos(t)*(1+cos(t));
   y=sin(t)*(1+cos(t));
   putpixel((xm/2)+(c*x),(ym/2)+(c*y),15);
   delay(3);
  }
  delay(1000);
  for(i=0;i<=360;i+=0.5)
  {
   t=(i*22)/(7*180.0);
   line((xm/2),0,(xm/2),ym);
   line(0,(ym/2),xm,(ym/2));
   x=cos(t)*(1+cos(t));
   y=sin(t)*(1+cos(t));
   putpixel((xm/2)+(c*x),(ym/2)+(c*y),0);
   delay(3);
  }
  line(0,ym/2,xm,ym/2);
  delay(1000);
 }
 closegraph();
 printf("Press Any Key To Return.");
 getch();
}