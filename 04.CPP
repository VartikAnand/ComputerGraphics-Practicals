#include <iostream.h>
#include <conio.h>
#include <graphics.h>

void main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    int xc, yc, r, x, y, p;

    cout << "Enter xc && yc " << endl;
    cin >> xc >> yc;
    cout << "Enter r";
    cin >> r;

    x = 0;
    y = r;
    p = 1 - r;

    while (x <= y)
    {
        putpixel(xc + x, yc + y, BLUE);
        putpixel(xc - x, yc + y, BLUE);
        putpixel(xc + x, yc - y, BLUE);
        putpixel(xc - x, yc - y, BLUE);

        putpixel(xc + y, yc + x, BLUE);
        putpixel(xc - y, yc + x, BLUE);
        putpixel(xc + y, yc - x, BLUE);
        putpixel(xc - y, yc - x, BLUE);

        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            p = p + 2 * (x - y) + 1;
            y--;
        }
        x++;
    }

    getch();
    closegraph();
}
