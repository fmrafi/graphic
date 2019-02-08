#include <graphics.h>
#include<math.h>
#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
initwindow(600,600);
int x1,x2,y1,y2,yyy,xxx;
cout<<"enter the number x1"<<endl;
cin>>x1;
cout<<"enter the number x2"<<endl;
cin>>x2;
cout<<"enter the number y1"<<endl;
cin>>y1;
cout<<"enter the number y2"<<endl;
cin>>y2;
cout<<"enter the number xxx"<<endl;
cin>>xxx;
cout<<"enter the number yyy"<<endl;
cin>>yyy;
rectangle(x1,y1,x2,y2);
int dx=x2-x1;
int dy=y2-y1;
int xx=dx/2;
int yy=dy/2;
int x3=xxx*xx;
int y3=yyy*yy;
rectangle(x1-x3,y1-y3,x2+x3,y2+y3);

getch();
closegraph();
return 0 ;

}
