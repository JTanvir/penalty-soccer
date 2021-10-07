#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd=DETECT,gm;
    int radius1=100,radius2=90;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    outtextxy(290,10,"Jahid Tanvir");
    delay(500);

    circle(getmaxx()/2,getmaxy()/2,100);
    circle(getmaxx()/2,getmaxy()/2,110);
    delay(500);

    circle(0,0,radius1);
    circle(0,0,radius2);
    delay(500);
    circle(getmaxx(),0,radius1);
    circle(getmaxx(),0,radius2);
    delay(500);
    circle(getmaxx(),getmaxy(),radius1);
    circle(getmaxx(),getmaxy(),radius2);
    delay(500);
    circle(0,getmaxy(),radius1);
    circle(0,getmaxy(),radius2);

    getch();
    closegraph();
    return 0;
}
