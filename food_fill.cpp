#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

void food_fill(int x,int y,int fill_color,int boundary_color)
{
    if (getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color )
    {
        putpixel(x,y,fill_color);
        //food_fill(x+1,y,fill_color,boundary_color);
        food_fill(x,y+1,fill_color,boundary_color);
        food_fill(x-1,y,fill_color,boundary_color);
        food_fill(x,y-1,fill_color,boundary_color);

        food_fill(x-1,y-1,fill_color,boundary_color);
        food_fill(x-1,y+1,fill_color,boundary_color);
        food_fill(x+1,y-1,fill_color,boundary_color);
        food_fill(x+1,y+1,fill_color,boundary_color);
    }
   // delay(1);
}
int main()
{
      int x,y,a;
     cout<<"X:";
     cin>>x;
     cout<<"Y:";
     cin>>y;
     cout<<"A:";
     cin>>a;

     initwindow(600,600);

     circle(x,y,a);

     food_fill(x,y,4,15);

      getch();
    closegraph();
    return 0;

}
