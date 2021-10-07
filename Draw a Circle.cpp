#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT,gm;
    int x,y,radius=150;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /* Initialize center of circle with center of screen */
    x = getmaxx()/2;
    y = getmaxy()/2;

    outtextxy(220,10,"Hi, everyone. Lets draw a circle :)");
    outtextxy(x-90,y,"Circle using Graphics in C");
    circle(x,y,radius);

    getch();
    closegraph();
    return 0;
}
