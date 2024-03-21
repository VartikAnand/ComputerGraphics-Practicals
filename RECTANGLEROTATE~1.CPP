#include<iostream.h>  
#include<graphics.h>
#include<math.h>
#include <conio.h>
main()
{
    int x1=400,y1=400,x2=400,y2=200,x3=200,y3=400;
    double s,c, angle;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    setcolor(RED);

    setbkcolor(WHITE);
    cleardevice();
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    getch();
    setbkcolor(BLACK);
   cout << "Enter rotation angle: ";
    cin >> angle;
    setbkcolor(WHITE);
    c = cos(angle *M_PI/180);
    s = sin(angle *M_PI/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);  
    y3 = floor(-x3 * s + y3 * c);  
    cleardevice();  
    line(x1, y1 ,x2, y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    getch();  
    closegraph();  
    return 0;  
}  