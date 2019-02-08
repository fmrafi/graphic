#include <graphics.h>
#include<stdio.h>
int main()
{
/* initialize graphics window at 400 x 300 */
initwindow(1060, 700);

while(1)
{
setcolor(GREEN);
circle(400,400,80);
circle(375,360,8);
circle(420,360,8);
arc(400,400,180,0,55);
delay(1000);
cleardevice();
setcolor(RED);
circle(400,400,80);
circle(375,360,8);
circle(420,360,8);
arc(400,450,0,180,55);
delay(1000);
cleardevice();
}
/* clean up */
getch();
closegraph();
return 0;
}
