# Write a program to Translate a line. 

## code 

```CPP
// Write a program to Translate a line

#include <iostream.h>
#include <graphics.h>
#include <conio.h>

void translateLine(int x1, int y1, int x2, int y2, int tx, int ty)
{

    setcolor(BLUE);
    x1 = x1 + tx;
    y1 = y1 + ty;
    x2 = x2 + tx;
    y2 = y2 + ty;

    line(x1, y1, x2, y2);
}

void main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    int x1, y1, x2, y2, tx, ty;
    cout << "Enter x1 && y1 " << endl;
    cin >> x1 >> y1;
    cout << "Enter x2 && y2 " << endl;
    cin >> x2 >> y2;

    setcolor(WHITE);
    line(x1, y1, x2, y2);
    getch();
    cout << "Enter tx && ty " << endl;
    cin >> tx >> ty;
    translateLine(x1, y1, x2, y2, tx, ty);

    getch();

    closegraph();
}

```



## Output

![Output](1.png)