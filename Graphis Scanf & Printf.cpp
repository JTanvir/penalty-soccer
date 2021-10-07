#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()

{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    char *arr[300];
    *arr="Jahid Tanvir";
    outtextxy(200,200,*arr);
    int i = 4;
    char buff[80];

    memset(buff,0,80);
    sprintf(buff, "My text has this variable: %d", i);
    outtextxy(250,250,buff);


    /*char num[100];
    int gd=DETECT, gm;
    initgraph(&gd,&gm," ");
    settextstyle(1,0,2);
    outtextxy(100,100,"Enter number here : ");
    scanf("%s",&num);
    outtextxy(100,200,"num");
    */
    getch();
    closegraph();
    return 0;
}
