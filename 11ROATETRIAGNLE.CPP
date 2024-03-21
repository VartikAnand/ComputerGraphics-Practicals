#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include <conio.h>
void  main()
{

int gd =DETECT, gm;

    double s,c, angle;
    initgraph(&gd, &gm, "c:/turboc3/bgi");
    setcolor(RED);
    int x1=200,y1=200, x2=100,y2=100 ;

    cleardevice();
    setbkcolor(WHITE);
    line(x1,y1,x2,y2);
    getch();
    setbkcolor(BLACK);
    cout << "Enter rotation angle: ";
   cin >> angle;
    setbkcolor(WHITE);
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    cleardevice();
    line(x1, y1 ,x2, y2);
    getch();
    closegraph();
}