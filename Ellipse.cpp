#include<graphics.h>
#include<conio.h>

int main()
{
   int gd=DETECT,gm;

   initgraph(&gd,&gm, "C:\\TC\\BGI");

   ellipse(250,100, 0,360, 60,30);

   getch();
   closegraph();
   return 0;
}
