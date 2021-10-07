#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");

//z:
    for(int i=0; i<=getmaxx(); i++)
    {
        //First make the car using bar() function
        bar(23+i,350,98+i,400);
        bar(3+i,375,23+i,400);
        bar(98+i,375,118+i,400);
        setcolor(DARKGRAY);
        circle(27+i,402,10);
        circle(27+i,402,9);
        circle(27+i,402,8);
        circle(94+i,402,10);
        circle(94+i,402,9);
        circle(94+i,402,8);

        //Lets make the road
        setcolor(WHITE);
        line(0,411,getmaxx(),411);
        line(0,412,getmaxx(),412);

        //Lets make signboard
        rectangle(12,280,68,310);
        line(39,411,39,310);
        line(42,411,42,310);
        setcolor(LIGHTRED);
        outtextxy(16,288,"Parking");

        //Lets make sun
        setcolor(RED);
        circle(100,100,25);
        circle(100,100,24);
        line(128,100,150,100);
        line(50,100,72,100);
        line(100,50,100,72);
        line(100,128,100,150);

        line(52,56,77,80);
        line(122,80,145,55);
        line(78,120,53,142);
        line(117,122,137,140);

        //Lets make birds
        setcolor(LIGHTCYAN);
        line(260+i/2,160-i/2,280+i/2,160-i/2);
        line(270+i/2,160-i/2,264+i/2,150-i/2);
        line(270+i/2,160-i/2,276+i/2,150-i/2);

        line(290+i/2,155-i/2,310+i/2,155-i/2);
        line(300+i/2,155-i/2,294+i/2,145-i/2);
        line(300+i/2,155-i/2,306+i/2,145-i/2);

        line(320+i/2,165-i/2,340+i/2,165-i/2);
        line(330+i/2,165-i/2,324+i/2,155-i/2);
        line(330+i/2,165-i/2,336+i/2,155-i/2);

        if(i==0)
        {
            setcolor(LIGHTRED);
            outtextxy(200,430,"Press any key to start the car  :)");
            getch();
        }

        delay(12);
        if(i<getmaxx())
            cleardevice();

        /*//To hold the Background
        setcolor(WHITE);
        line(0,411,getmaxx(),411);
        line(0,412,getmaxx(),412);
        rectangle(12,280,68,310);
        line(39,411,39,310);
        line(42,411,42,310);
        setcolor(LIGHTRED);
        outtextxy(16,288,"Parking");
        setcolor(RED);
        circle(100,100,25);
        circle(100,100,24);
        line(128,100,150,100);
        line(50,100,72,100);
        line(100,50,100,72);
        line(100,128,100,150);
        line(52,56,77,80);
        line(122,80,145,55);
        line(78,120,53,142);
        line(117,122,137,140);*/

    }

    /*char ch;
    outtextxy(200,430,"Press Y to play again");
    getch();
    scanf("%c,&ch");
    if(ch=='Y' || ch=='y')
        goto z;*/

    getch();
    closegraph();
    return 0;
}
