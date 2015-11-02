#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
void DDALine(int x1,int y1,int x2,int y2,int clr);
main()
{
    int gDriver=DETECT,gMode;

    int x1,x2,y1,y2,iColor;

    initgraph(&gDriver,&gMode,"c:\\tc\\bgi");
    cleardevice();
    std::cout<<endl<<"Enter x1  : ";
    std::cin>>x1;
    std::cout<<"Enter y1  : ";
    std::cin>>y1;
    std::cout<<endl<<"Enter x2  : ";
    std::cin>>x2;
    std::cout<<"Enter y2  : ";
    std::cin>>y2;
    std::cout<<endl<<"Enter colour: ";
    std::cin>>clr;
    cleardevice();
    DDALine(320,1,320,480,12);
    DDALine(1,240,640,240,12);
    circle(320,240,2);
    DDALine(320+x1,240-y1,320+x2,240-y2,clr);
    getch();
}

void DDALine(int x1,int y1,int x2,int y2,int clr)
{
    float dX,dY,steps;
    float xInc,yInc,count,x,y;

    dX = x1 - x2;
    dY = y1 - y2;

    if (fabs(dX) > fabs(dY))
    {
        steps = fabs(dX);
    }
    else
    {
        steps = fabs(dY);
    }

    xInc = dX/steps;
    yInc = dY/steps;

    x = x1;
    y = y1;
    circle(x,y,1);

    for (count=1; iCount<=steps; count++)
    {
        putpixel(floor(x),floor(y),clr%10);
        x -= xInc;
        y -= yInc;
    }
    circle(x,y,1);
    return;
}