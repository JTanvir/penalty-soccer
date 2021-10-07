#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char ch;
    int i=0,j=0,a=100,b=100,x=150,y=150,t=5,z=0;
    int up=0,right=0,left=0,down=0,dela=80,flag=0;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    //x=rand()%getmaxx();
    //y=rand()%getmaxy();

    while(1)
    {
        //The Movie Circle
        circle(a+i,b+j,15);
        if(flag>0)
        {
            for(int u=1; u<flag+5; u+=5)
                circle(a+i+u,b+j,15);
        }

        //The Target Circle


        if(up==1)
            j=j-5;
        if(down==1)
            j=j+5;
        if(left==1)
            i=i-5;
        if(right==1)
            i=i+5;

        if(kbhit())
        {
            circle(rand()%getmaxx(),rand()%getmaxy(),5);
            ch=getch();
            if(ch==72)
            {
                up=1;
                right=0;
                left=0;
                down=0;
                //j=j-5;
                // cleardevice();
            }
            if(ch==75)
            {
                up=0;
                right=0;
                left=1;
                down=0;
                //i=i-5;
                // cleardevice();
            }
            if(ch==77)
            {
                up=0;
                right=1;
                left=0;
                down=0;
                //i=i+5;
                //cleardevice();
            }
            if(ch==80)
            {
                up=0;
                right=0;
                left=0;
                down=1;
                //j=j+5;
                //cleardevice();
            }
            //cleardevice();
        }
        if(((a+i>=x-14)&&(a+i<=x+14))&&((b+j<=y+14)&&(b+j>=y-14)))
        {
            flag++;

            //x=rand()%getmaxx();
            //y=rand()%getmaxy();

            continue;
            //getch();
        }
        delay(dela);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
