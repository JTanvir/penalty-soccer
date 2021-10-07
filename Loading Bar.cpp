#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm,i,j=0;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(i=-17; i<16; i++)
    {
        setcolor(RED);
        setfillstyle(4,RED);
        bar(120,100,125+j,130);
        outtextxy(getmaxx()/2-30,135,"Loading...");
        j+=12;
        delay(70);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
