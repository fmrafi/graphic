#include <graphics.h>
#include<stdio.h>
int main()
{
/* initialize graphics window at 400 x 300 */
initwindow(1060, 700);
int i=10,j,k,l,m,val1,val2,val3,val4;

setcolor(YELLOW);
while(i<1000)
{
    delay(10);
  circle(i,230,100);
delay(10);
cleardevice();
i=i+10;
}

/*val4=(int)GetTickCount();
printf("%d",val4);
/* draw a line */
/*line(0, 0, 188, 188);
line(1060,0,860,188);
line(1060,700,860,512);
line(0,700, 188, 512);
for(i=2;i<20;i++){
        if(i%2==0)
        setcolor(YELLOW);
if(i%2==1)
    setcolor(RED);
    delay(200);
    val1=i*50;
        circle(50*i,100,90);
}
for(j=2;j<13;j++){
    if(j%2==0)
        setcolor(YELLOW);
if(j%2==1)
    setcolor(RED);
    delay(200);
    val2=j*50;
        circle(val1,j*50,90);
}
for(k=19;k>=2;k--){
    if(k%2==0)
        setcolor(YELLOW);
if(k%2==1)
    setcolor(RED);
    delay(200);
        circle(50*k,val2,90);
}
for(l=12;l>1;l--){
    if(l%2==0)
        setcolor(YELLOW);
if(l%2==1)
    setcolor(RED);
   delay(200);

        circle(100,l*50,90);
}
/* clean up */
getch();
closegraph();
return 0;
}
