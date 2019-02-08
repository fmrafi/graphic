#include <graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(1060,600);


    int x1,y1,x2,y2,x3,y3;
    line(x1,y1,x2,y2);
    t=45*(3.1416/180);
    x3=x2*cos(t)-y2*sin(t);
    y3=x2*sin(t)+y2*cos(t);
    line(x1,y1,x3,y3);

    getch();
    closegraph();
    return 0;


}
