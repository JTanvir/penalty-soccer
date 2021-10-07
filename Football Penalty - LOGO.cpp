#include<stdio.h>
#include<conio.h>>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm,i=1;
    initgraph(&gd,&gm, "c:\\tc\\bgi");

    for(int i=1; i<=16; i++)
    {
        int j=i%13;
        setfillstyle(CLOSE_DOT_FILL,j);
        bar(320,50,410,190);
        setfillstyle(CLOSE_DOT_FILL,j+1);
        bar(180,110,320,190);
        setfillstyle(CLOSE_DOT_FILL,j+2);
        bar(230,190,319,325);
        setfillstyle(CLOSE_DOT_FILL,j+3);
        bar(319,190,460,275);
        delay(200);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
