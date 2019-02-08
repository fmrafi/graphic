#include <graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(600,600);
int dx,dy,x=200,y=200,x1=300,y1=300,x2=2,y2=3,x3,y3,x4,y4;
    rectangle(x,y,x1,y1);
    dx=x1-x;
    dy=y1-y;
    x3=dx/2;
    y3=dy/2;
    x4=x2*x3;
    y4=y2*y3;
    rectangle(x-x4,y-y4,x1+x4,y1+y4);
    getch();
   closegraph();
   return 0;
}
