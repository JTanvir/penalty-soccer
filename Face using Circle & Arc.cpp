#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm,"C:\\TC\\BGI");

    //arc(320,200, 0,270, 100);

    circle(getmaxx()/2,getmaxy()/2, 150);
    circle(getmaxx()/2-70,getmaxy()/2-55, 25);
    circle(getmaxx()/2-70,getmaxy()/2-57, 5);
    circle(getmaxx()/2+70,getmaxy()/2-55, 25);
    circle(getmaxx()/2+70,getmaxy()/2-57, 5);
    circle(getmaxx()/2,getmaxy()/2+20, 15);

    arc(getmaxx()/2,getmaxy()/2+40, 190,350, 55);
    arc(getmaxx()/2-110,getmaxy()/2-35, 102,223, 55);
    arc(getmaxx()/2+110,getmaxy()/2-35, 318,76, 55);

    delay(800);
    outtextxy(getmaxx()/2-60,getmaxy()-40,"Hi, I am Eccho  :)");

    getch();
    closegraph();
    return 0;
}

