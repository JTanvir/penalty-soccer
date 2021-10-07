#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<iostream>
#include<fstream>

using namespace std;

int num_goal=0, countt=0;
char score[100];

void body();
int middle(int a, int random, int ran1, int ran2);
int left(int a,int random, int ran1, int ran2);
int right(int a,int random, int ran1, int ran2);
void dis_score();
void goal();
void no_goal();
void player_name(int x);

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");

    while(1)
    {
        int gk_move=0,pl_move=0,movement=0, i=0,ch;
        int bx=325,by=345,  gx1=305,gy1=100,gx2=335,gy2=140;
        //int num_goal=0;

        body();

        //Field
        setcolor(GREEN);
        rectangle(0,160,getmaxx(),getmaxy());
        setfillstyle(CLOSE_DOT_FILL,GREEN);
        floodfill(1,390,GREEN);

        delay(1300);
        cleardevice();
Home:
        cleardevice();
        setcolor(LIGHTCYAN);
        settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
        outtextxy(105,95,"Welcome to Penalty Soccer");
        setcolor(LIGHTGREEN);
        line(100,125,555,125);
        line(100,126,555,126);
        delay(500);
        setcolor(LIGHTBLUE);
        settextstyle(3,HORIZ_DIR,1);
        for(i=0; i<250; i++)
        {
            outtextxy(-10+i,190,"Press  P  to Play");
            outtextxy((getmaxx()-150)-i,215,"Press  I  to Read Instruction");
            outtextxy(-10+i,250,"Press  Esc  to Exit");
            outtextxy(10,(getmaxy()+185)-i,"Do Not Bother Pressing Other Keys");
            delay(10);
        }
        delay(100);
        setcolor(LIGHTMAGENTA);
        settextstyle(5,HORIZ_DIR,2);
        outtextxy(370,getmaxy()-55,"Developed by Jahid Tanvir");
        outtextxy(420,getmaxy()-33,"& Abu Saleh Shipon");

again1:
        ch=getch();

        if(ch==80 || ch==112)     //For Playing
        {
            cleardevice();
            //Logo
            int k=0;
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
                //Loading Bar
                setcolor(RED);
                setfillstyle(4,RED);
                bar(170,370,175+k,400);
                setcolor(LIGHTBLUE);
                settextstyle(3,HORIZ_DIR,1);
                outtextxy(getmaxx()/2-17,405,"Loading...");
                k+=20;
                //delay(35);
                //cleardevice();
                delay(180);
                cleardevice();
            }
            cleardevice();

            while(1)  ///Main Gaming Part
            {
                srand (time(NULL));
                int r = rand()%2;
                int r1 = rand()%2;
                int r2 = rand()%2;
                int dir,kick;

                //void dis_score();
                //Score
                memset(score,0,100);
                sprintf(score, "Goal : %d", num_goal);
                setcolor(LIGHTGREEN);
                settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
                outtextxy(30,10,score);

                setcolor(WHITE);
                body();

                //Goalkeeper
                circle(320+gk_move,90,10);
                setfillstyle(SOLID_FILL,WHITE);
                floodfill(325+gk_move,95,WHITE);
                setfillstyle(SOLID_FILL,YELLOW);
                bar(gx1+gk_move,gy1,gx2+gk_move,gy2);
                setfillstyle(SOLID_FILL,BLUE);
                bar(308+gk_move,140,318+gk_move,158);
                bar(322+gk_move,140,332+gk_move,158);
                bar(292+gk_move,103,305+gk_move,113);
                bar(335+gk_move,103,348+gk_move,113);
                //Field
                setcolor(GREEN);
                rectangle(0,160,getmaxx(),getmaxy());
                setfillstyle(CLOSE_DOT_FILL,GREEN);
                floodfill(1,390,GREEN);
                setcolor(WHITE);
                circle(bx,by-movement*2,10);
                setfillstyle(SOLID_FILL,WHITE);
                floodfill(bx,by-movement*2,WHITE);
                //Player & Kick
                circle(380-pl_move,315-pl_move,10);
                circle(376-pl_move,313-pl_move,3);
                circle(384-pl_move,313-pl_move,3);
                setfillstyle(SOLID_FILL,LIGHTBLUE);
                bar(365-pl_move,325-pl_move,395-pl_move,365-pl_move);
                setfillstyle(SOLID_FILL,RED);
                bar(368-pl_move,365-pl_move,378-pl_move,385-pl_move);
                bar(382-pl_move,365-pl_move,392-pl_move,385-pl_move);
                bar(348-pl_move,328-pl_move,365-pl_move,340-pl_move);
                bar(395-pl_move,328-pl_move,413-pl_move,340-pl_move);

again2:
                dir=getch();

                if(dir==27)
                {
                    cleardevice();
                    for(int i=1; i<=16; i++)
                    {
                        setcolor(i);
                        settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
                        outtextxy(100,getmaxy()/2,"Please Open Other Console");
                        delay(170);
                        cleardevice();
                    }
                    player_name(num_goal);
                    goto Home;
                }

                else if(dir==50||dir==56 || dir==49||dir==55 || dir==51||dir==57)
                {
again3:
                    kick=getch();

                    if(kick==53)
                    {
                        if((dir==50 || dir==56) && kick==53)
                        {
                            num_goal=middle(dir,r,r1,r2);
                        }
                        else if((dir==49 || dir==55) && kick==53)
                        {
                            num_goal=left(dir,r,r1,r2);
                        }
                        else if((dir==51 || dir==57) && kick==53)
                        {
                            num_goal=right(dir,r,r1,r2);
                        }
                    }
                    else
                        goto again3;
                }
                else
                    goto again2;
            }
        }

        else if(ch==73 || ch==105) //For Instruction
        {
            delay(100);
            cleardevice();
            setcolor(WHITE);
            settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
            outtextxy(180,100,"INSTRUCTIONS");
            setcolor(GREEN);
            rectangle(172,92,458,127);
            rectangle(171,91,459,128);

            setcolor(LIGHTGRAY);
            settextstyle(3,HORIZ_DIR,1);
            outtextxy(105,155,"Press 7 or 1 to kick to the left upper corner and left down corner");
            outtextxy(130,180,"Press 8 or 2 to kick to the middle upper and middle down");
            outtextxy(105,205,"Press 9 or 3 to kick to the left right corner and right down corner");
            outtextxy(179,235,"And Finally Press 5 to make the KICK!!!!!");
            setcolor(RED);
            outtextxy(135,310,"**Do Not Bother Pressing Other Keys Whilew Playing**");

            setcolor(LIGHTMAGENTA);
            outtextxy(390,getmaxy()-35,"Press Anykey for Home Screen");
            getch();
            goto Home;
        }
        else if(ch==27)
            exit(0);
        else
            goto again1;

    }

    getch();
    closegraph();
    return 0;
}

void body()  ///Always used this figure
{
    //Football bar
    setcolor(WHITE);
    line(184,44,456,44);
    line(185,45,455,45);
    line(184,44,184,161);
    line(185,45,185,160);
    line(455,45,455,160);
    line(456,44,456,161);

    //Main Body
    line(190,50,450,50);
    line(190,50,190,160);
    line(450,50,450,160);

    //Net
    setcolor(LIGHTCYAN);
    rectangle(191,50,449,159);
    setfillstyle(HATCH_FILL,LIGHTCYAN);
    floodfill(200,100,LIGHTCYAN);

    //Border
    setcolor(WHITE);
    line(0,160,185,160);
    line(455,160,getmaxx(),160);

    //Penalty Box Line
    line(530,160,530,230);
    line(531,160,531,231);
    line(120,160,120,230);
    line(119,160,119,231);
    line(119,230,530,230);
    line(119,231,531,231);

    line(10,390,getmaxx()-10,390);
    line(10,391,getmaxx()-10,391);
    line(10,160,10,390);
    line(9,160,9,391);
    line(getmaxx()-10,160,getmaxx()-10,390);
    line(getmaxx()-11,160,getmaxx()-11,391);

    arc(getmaxx()/2,390,182,358,85);
    arc(getmaxx()/2,389,181,359,85);
}


int middle(int a, int random, int ran1, int ran2) ///Middle Side
{
    int movement=0, gk_move=0,pl_move=0, flag1=0,flag2=0;
    int i=0,n=0,  bx=325,by=345,  gx1=305,gy1=100,gx2=335,gy2=140;
    if(a==50)
        n=85;
    else
        n=110;

    for(i=0; i<=n; i++)
    {
        int m1=((gx1+gk_move)+(gx2+gk_move))/2, m2=(gy1+gy2)/2;

        dis_score();
        body();

        //Right or Left Movement
        if(i==0)
        {
            if(random==1)
            {
                gk_move+=2;
                flag1=0;
            }
            else
            {
                gk_move-=2;
                flag1=1;
            }
        }

        //Dodging
        if(m1<270 && ran1==1)
            flag1=0;
        else if(m1>374 && ran2==1)
            flag1=1;

        //Goalkeeper Movement Conditions Checking
        if(m1<219)
            flag1=0;
        else if(m1>428)
            flag1 = 1;

        //Goalkeeper
        circle(320+gk_move,90,10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(320+gk_move,90,WHITE);

        setfillstyle(SOLID_FILL,YELLOW);
        bar(gx1+gk_move,gy1, gx2+gk_move,gy2);
        setfillstyle(SOLID_FILL,BLUE);
        //Legs
        bar(308+gk_move,140,318+gk_move,158);
        bar(322+gk_move,140,332+gk_move,158);
        //Hands
        bar(292+gk_move,103,305+gk_move,113);
        bar(335+gk_move,103,348+gk_move,113);

        if(flag1==0)
            gk_move+=2;
        else
            gk_move-=2;

        //Field
        setcolor(GREEN);
        rectangle(0,160,getmaxx(),getmaxy());
        setfillstyle(CLOSE_DOT_FILL,GREEN);
        floodfill(1,390,GREEN);

        //Football & Movement
        if(flag2<20)
            pl_move++;
        else
        {
            pl_move = pl_move;
            movement=i-19;
        }
        setcolor(WHITE);
        circle(bx,by-(movement*3),10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(bx,by-(movement*3),WHITE);

        //Player & Kick
        circle(380-pl_move,315-pl_move,10);
        circle(376-pl_move,313-pl_move,3);
        circle(384-pl_move,313-pl_move,3);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(365-pl_move,325-pl_move,395-pl_move,365-pl_move);
        setfillstyle(SOLID_FILL,RED);
        bar(368-pl_move,365-pl_move,378-pl_move,385-pl_move);
        bar(382-pl_move,365-pl_move,392-pl_move,385-pl_move);

        bar(348-pl_move,328-pl_move,365-pl_move,340-pl_move);
        bar(395-pl_move,328-pl_move,413-pl_move,340-pl_move);
        flag2++;

        if( (bx>=m1-35&&bx<=m1+35) && (by-(movement*3)<=m2+45&&by-(movement*3)>=m2-45) )
        {
            no_goal();
            break;
        }

        delay(30);
        if(i<n+1)
            cleardevice();
    }
    if(i==n+1)
    {
        countt++;
        goal();
    }

    return (countt);
}


int left(int a,int random, int ran1, int ran2)  ///Left Side
{
    int movement=0, gk_move=0,pl_move=0, flag1=0,flag2=0;
    int i=0,n=0,  bx=325,by=345,  gx1=305,gy1=100,gx2=335,gy2=140;

    if(a==49)
        n=83;
    else
        n=100;

    for(i=0; i<=n; i++)
    {
        int m1=((gx1+gk_move)+(gx2+gk_move))/2, m2=(gy1+gy2)/2;

        dis_score();
        body();

        //Right or Left Movement
        if(i==0)
        {
            if(random==1)
            {
                gk_move+=2;
                flag1=0;
            }
            else
            {
                gk_move-=2;
                flag1=1;
            }
        }

        //Dodging
        if(m1<270 && ran1==1)
            flag1=0;
        else if(m1>374 && ran2==1)
            flag1=1;

        //Goalkeeper Movement Conditions Checking
        if(m1<219)
            flag1=0;
        else if(m1>428)
            flag1 = 1;

        //Goalkeeper
        circle(320+gk_move,90,10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(325+gk_move,95,WHITE);

        setfillstyle(SOLID_FILL,YELLOW);
        bar(gx1+gk_move,gy1,gx2+gk_move,gy2);
        setfillstyle(SOLID_FILL,BLUE);
        //Legs
        bar(308+gk_move,140,318+gk_move,158);
        bar(322+gk_move,140,332+gk_move,158);
        //Hands
        bar(292+gk_move,103,305+gk_move,113);
        bar(335+gk_move,103,348+gk_move,113);

        if(flag1==0)
            gk_move+=2;
        else
            gk_move-=2;

        //Field
        setcolor(GREEN);
        rectangle(0,160,getmaxx(),getmaxy());
        setfillstyle(CLOSE_DOT_FILL,GREEN);
        floodfill(1,390,GREEN);

        //Football & Movement
        if(flag2<18)
            pl_move++;
        else
        {
            pl_move = pl_move;
            movement=i-17;
        }
        setcolor(WHITE);
        circle(bx-(movement*1.5),by-(movement*3),10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(bx-(movement*1.5),by-(movement*3),WHITE);

        //Player & Kick
        circle(380-pl_move,315-pl_move,10);
        circle(376-pl_move,313-pl_move,3);
        circle(384-pl_move,313-pl_move,3);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(365-pl_move,325-pl_move,395-pl_move,365-pl_move);
        setfillstyle(SOLID_FILL,RED);
        bar(368-pl_move,365-pl_move,378-pl_move,385-pl_move);
        bar(382-pl_move,365-pl_move,392-pl_move,385-pl_move);

        bar(348-pl_move,328-pl_move,365-pl_move,340-pl_move);
        bar(395-pl_move,328-pl_move,413-pl_move,340-pl_move);
        flag2++;

        if( (bx-(movement*1.5)>=m1-35&&bx-(movement*1.5)<=m1+35) && (by-(movement*3)<=m2+45&&by-(movement*3)>=m2-45) )
        {
            no_goal();
            break;
        }

        delay(30);
        if(i<n+1)
            cleardevice();
    }
    if(i==n+1)
    {
        countt++;
        goal();
    }

    return (countt);
}


int right(int a,int random, int ran1, int ran2)  ///Right Side
{
    int movement=0, gk_move=0,pl_move=0, flag1=0,flag2=0;
    int i=0,n=0,  bx=325,by=345,  gx1=305,gy1=100,gx2=335,gy2=140;

    if(a==51)
        n=80;
    else
        n=100;

    for(i=0; i<=n; i++)
    {
        int m1=((gx1+gk_move)+(gx2+gk_move))/2, m2=(gy1+gy2)/2;

        dis_score();
        body();

        //Right or Left Movement
        if(i==0)
        {
            if(random==1)
            {
                gk_move+=2;
                flag1=0;
            }
            else
            {
                gk_move-=2;
                flag1=1;
            }
        }

        //Dodging
        if(m1<270 && ran1==1)
            flag1=0;
        else if(m1>374 && ran2==1)
            flag1=1;

        //Goalkeeper Movement Conditions Checking
        if(m1<219)
            flag1=0;
        else if(m1>428)
            flag1 = 1;

        //Goalkeeper
        circle(320+gk_move,90,10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(325+gk_move,95,WHITE);

        setfillstyle(SOLID_FILL,YELLOW);
        bar(gx1+gk_move,gy1,gx2+gk_move,gy2);
        setfillstyle(SOLID_FILL,BLUE);
        //Legs
        bar(308+gk_move,140,318+gk_move,158);
        bar(322+gk_move,140,332+gk_move,158);
        //Hands
        bar(292+gk_move,103,305+gk_move,113);
        bar(335+gk_move,103,348+gk_move,113);

        if(flag1==0)
            gk_move+=2;
        else
            gk_move-=2;

        //Field
        setcolor(GREEN);
        rectangle(0,160,getmaxx(),getmaxy());
        setfillstyle(CLOSE_DOT_FILL,GREEN);
        floodfill(1,390,GREEN);

        //Football & Movement
        if(flag2<18)
            pl_move++;
        else
        {
            pl_move = pl_move;
            movement=i-17;
        }
        setcolor(WHITE);
        circle(bx+(movement*1.5),by-(movement*3),10);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(bx+(movement*1.5),by-(movement*3),WHITE);

        //Player & Kick
        circle(380-pl_move,315-pl_move,10);
        circle(376-pl_move,313-pl_move,3);
        circle(384-pl_move,313-pl_move,3);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(365-pl_move,325-pl_move,395-pl_move,365-pl_move);
        setfillstyle(SOLID_FILL,RED);
        bar(368-pl_move,365-pl_move,378-pl_move,385-pl_move);
        bar(382-pl_move,365-pl_move,392-pl_move,385-pl_move);

        bar(348-pl_move,328-pl_move,365-pl_move,340-pl_move);
        bar(395-pl_move,328-pl_move,413-pl_move,340-pl_move);
        flag2++;

        if( (bx+(movement*1.5)>=m1-40&&bx+(movement*1.5)<=m1+40) && (by-(movement*3)<=m2+45&&by-(movement*3)>=m2-45) )
        {
            no_goal();
            break;
        }

        delay(30);
        if(i<n+1)
            cleardevice();
    }
    if(i==n+1)
    {
        countt++;
        goal();
    }

    return (countt);
}

void dis_score()
{
    //Score
    memset(score,0,100);
    sprintf(score, "Goal : %d", num_goal);
    setcolor(LIGHTGREEN);
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
    outtextxy(30,10,score);
}

void goal()
{
    cleardevice();
    for(int j=5; j<=16; j++)
    {
        setcolor(j);
        circle(getmaxx()/2,getmaxy()/2, 150);
        circle(getmaxx()/2,getmaxy()/2, 149);
        circle(getmaxx()/2,getmaxy()/2, 148);
        circle(getmaxx()/2-70,getmaxy()/2-55, 25);
        circle(getmaxx()/2-70,getmaxy()/2-57, 5);
        circle(getmaxx()/2+70,getmaxy()/2-55, 25);
        circle(getmaxx()/2+70,getmaxy()/2-57, 5);
        circle(getmaxx()/2,getmaxy()/2+20, 15);

        arc(getmaxx()/2,getmaxy()/2+40, 195,345, 55);
        arc(getmaxx()/2-110,getmaxy()/2-35, 102,223, 55);
        arc(getmaxx()/2-111,getmaxy()/2-35, 101,224, 55);
        arc(getmaxx()/2-112,getmaxy()/2-35, 100,225, 55);
        arc(getmaxx()/2+110,getmaxy()/2-35, 318,76, 55);
        arc(getmaxx()/2+111,getmaxy()/2-35, 317,77, 55);
        arc(getmaxx()/2+112,getmaxy()/2-35, 316,78, 55);

        settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
        outtextxy(getmaxx()/2-160,30,"GOAL  GOAL  GOAL");

        delay(200);
        cleardevice();
    }
    return;
}

void no_goal()
{
    cleardevice();
    for(int j=0; j<16; j++)
    {
        setcolor(j);

        settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
        outtextxy(100,getmaxy()/2,"You MISS, Next Time Bro :) ");
        delay(200);
        cleardevice();
    }
    return;
}

void player_name(int x)
{
    time_t now = time(0);
    char* play_time = ctime(&now);

    char pl_name[100];
    cout<<"Enter Your Name : "<<endl;
    gets(pl_name);

    ofstream out;

    out.open("Game_History.txt",ios::app);
    out << pl_name << endl;
    out << "Goal Number : "<<x<<endl;
    out << play_time << endl;

    out.close();
    cout<<"Return to The Field "<<endl;

    return;
}
