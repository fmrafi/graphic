#include <graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(700,600);
    int i;
    int m,n,r,c;
    setcolor(WHITE);
    for(i=1;i<1000;i++)
    {
        m=rand()%700;
        n=rand()%700;
        r=rand()%70;
        c=rand()%200;
        circle(m,n,r);
        delay(10);
        setfillstyle(SOLID_FILL,c);
        floodfill(m+1,n+1,WHITE);

    }

        getch();
     closegraph();
     return 0;
}
