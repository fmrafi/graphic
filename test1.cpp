#include<stdio.h>
#include<iostream>
#include <graphics.h>
#include<math.h>
int main()
{
    initwindow(600,600);
    int x1,y1,x2,y2,x3,y3;
    float t;
    x1=200;
    y1=200;
    x2=400;
    y2=400;

    line(x1,y1,x2,y2);
    t=45*(3.1416/180);
    x3=x2*cos(t)-y2*sin(t);
    y3=x2*sin(t)+y2*cos(t);
    line(x1,y1,x3,y3);

    getch();
    closegraph();
    return 0;
}
