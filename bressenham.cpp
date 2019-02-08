#include <graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(1060,600);

    int x1=200,x2=300,x4=40;
    int y1=300,y2=400,y5=50;
    int x=x1;
    int y=y1;
    int dx=x2-x1;
    int dy=y2-y1;
    int dt=2*(dy-dx);
    int ds=2*dy;
    int d=ds-dx;
    putpixel(x,y,RED);
    while(x<x2)
    {
        x++;

    if(d<0)
    {
        d=d+ds;
    }

    else
    {
        y++;
        d=d+dt;

           putpixel(x,y,GREEN);

    }
    }
    getch();
   closegraph();
   return 0;
}


