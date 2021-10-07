#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");

    //Setfillstyle() only sets "Pattern & Color" for next bar()(current shape only). It don't fill the shapes.
    setfillstyle(SOLID_FILL,GREEN);
    bar(5,10,100,150);

    setfillstyle(LINE_FILL,RED);
    bar(120,10,210,150);

    setfillstyle(WIDE_DOT_FILL,BLUE);
    bar(220,10,310,150);
    setfillstyle(CLOSE_DOT_FILL,YELLOW);
    bar(320,10,410,150);

    setfillstyle(SLASH_FILL,LIGHTGRAY);
    bar(420,10,510,150);
    setfillstyle(BKSLASH_FILL,LIGHTGRAY);
    bar(520,10,610,150);

    setfillstyle(LTSLASH_FILL,LIGHTGRAY);
    bar(420,160,510,300);
    setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
    bar(520,160,610,300);

    setfillstyle(HATCH_FILL,LIGHTMAGENTA);
    bar(220,160,310,300);
    setfillstyle(XHATCH_FILL,LIGHTCYAN);
    bar(320,160,410,300);

    setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
    bar(120,160,210,300);

    setfillstyle(EMPTY_FILL,LIGHTCYAN);
    bar(5,160,100,300);


    line(0,315,getmaxx(),315);


    setcolor(LIGHTGREEN);
    rectangle(10,330,100,470);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(50,400,LIGHTGREEN);

    setcolor(YELLOW);
    circle(160,390,50);
    setfillstyle(CLOSE_DOT_FILL,YELLOW);
    floodfill(160,390,YELLOW);

    setcolor(WHITE);
    rectangle(220,330,330,470);
    setfillstyle(XHATCH_FILL,RED);
    floodfill(250,400,WHITE);


    getch();
    closegraph();
    return 0;
}
