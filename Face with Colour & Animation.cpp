#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm,"C:\\TC\\BGI");

    for(; ;)
    {
        setcolor(WHITE);
        outtextxy(getmaxx()/2-35,10,"Meet Eccho");
        line(getmaxx()/2-37,27,getmaxx()/2+40,27);
        setcolor(BLUE);
        circle(getmaxx()/2,getmaxy()/2, 150);
        circle(getmaxx()/2,getmaxy()/2, 149);
        circle(getmaxx()/2,getmaxy()/2, 148);
        setcolor(WHITE);
        circle(getmaxx()/2-70,getmaxy()/2-55, 25);
        circle(getmaxx()/2-70,getmaxy()/2-57, 5);
        circle(getmaxx()/2+70,getmaxy()/2-55, 25);
        circle(getmaxx()/2+70,getmaxy()/2-57, 5);
        circle(getmaxx()/2,getmaxy()/2+20, 15);

        arc(getmaxx()/2,getmaxy()/2+40, 195,345, 55);
        setcolor(BLUE);
        arc(getmaxx()/2-110,getmaxy()/2-35, 102,223, 55);
        arc(getmaxx()/2-111,getmaxy()/2-35, 101,224, 55);
        arc(getmaxx()/2-112,getmaxy()/2-35, 100,225, 55);
        arc(getmaxx()/2+110,getmaxy()/2-35, 318,76, 55);
        arc(getmaxx()/2+111,getmaxy()/2-35, 317,77, 55);
        arc(getmaxx()/2+112,getmaxy()/2-35, 316,78, 55);
        setcolor(LIGHTGREEN);
        outtextxy(getmaxx()/2-38,getmaxy()-50,"I am Happy :)");

        delay(1000);
        cleardevice();

        setcolor(WHITE);
        outtextxy(getmaxx()/2-35,10,"Meet Eccho");
        line(getmaxx()/2-37,27,getmaxx()/2+40,27);
        setcolor(RED);
        circle(getmaxx()/2,getmaxy()/2, 150);
        circle(getmaxx()/2,getmaxy()/2, 149);
        circle(getmaxx()/2,getmaxy()/2, 148);
        setcolor(WHITE);
        circle(getmaxx()/2-70,getmaxy()/2-55, 25);
        circle(getmaxx()/2-70,getmaxy()/2-57, 5);
        circle(getmaxx()/2+70,getmaxy()/2-55, 25);
        circle(getmaxx()/2+70,getmaxy()/2-57, 5);
        circle(getmaxx()/2,getmaxy()/2+20, 15);

        arc(getmaxx()/2,getmaxy()/2+110, 15,165, 55);
        setcolor(RED);
        arc(getmaxx()/2-110,getmaxy()/2-35, 102,223, 55);
        arc(getmaxx()/2-111,getmaxy()/2-35, 101,224, 55);
        arc(getmaxx()/2-112,getmaxy()/2-35, 100,225, 55);
        arc(getmaxx()/2+110,getmaxy()/2-35, 318,76, 55);
        arc(getmaxx()/2+111,getmaxy()/2-35, 317,77, 55);
        arc(getmaxx()/2+112,getmaxy()/2-35, 316,78, 55);
        setcolor(LIGHTRED);
        outtextxy(getmaxx()/2-38,getmaxy()-50,"I am Sad :(");

        delay(1000);
        cleardevice();
    }
    //cleardevice();

    getch();
    closegraph();
    return 0;
}
