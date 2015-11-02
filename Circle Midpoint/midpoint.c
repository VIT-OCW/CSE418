#include <graphics.h>
#include "conio.h"
#include <math.h>
#include<windows.h>
#include<stdio.h>

using namespace std;
void gotoxy(short x, short y);
int main( )
{
    int radius x, y, p, h, k;
    initwindow(800, 800, "First Sample");
    std::cout<<"Enter Radius:\t";
    std::cin>>radius;
    x=0;
    y= radius;
    p = 1- radius;
    h= 400;
    k =400;
    gotoxy(h,k);
    line(400,0,400,800);
    line(0,400,800,400);
    while(x<y)
    {
              x++;
              if(p<0)
                     p=p+2*x+1;
              else
              {
                  y--;
                  p=p+2*(x-y);
              }
              putpixel((h+x),(k+y),RED);
              putpixel((h+y),(k+x),RED);
              putpixel((h+y),(k-x),RED);
              putpixel((h+x),(k-y),RED);
              putpixel((h-x),(k-y),RED);
              putpixel((h-y),(k-x),RED);
              putpixel((h-y),(k+x),RED);
              putpixel((h-x),(k+y),RED);
    }
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}

void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
