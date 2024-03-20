#include <iostream.h>
#include <conio.h>
#include <graphics.h>

void main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");
    int x1, y1, x2, y2, dx, dy, p;

    cout << "Enter x1 && y1 : " << endl;
    cin >> x1 >> y1;
    cout << "Enter x2 && y2 : " << endl;
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    p = 2 * dy - dx;

    while (x1 < x2)
    {

        if (p >= 0)
        {

            p = p + 2 * dy - 2 * dx;
            y1++;
        }
        else
        {

            p = p + 2 * dy;
        }
        x1++;
        putpixel(x1, y1, RED);
    }

    getch();
    closegraph();
}