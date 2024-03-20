# Write a program to draw a animation using increasing circle filled with color

## code 

```CPP
#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");
    int x, y;

    x = getmaxx() / 2;
    y = getmaxy() / 2;
    setbkcolor(WHITE);
    setcolor(RED);

    for (int i = 0; i <= 5; i++)
    {

        setfillstyle(i, i);
        delay(500);
        circle(x, y, i * 20);
        floodfill(x - 2 + i * 20, y, RED);
    }
    getch();
    closegraph();
}
```



## Output

![Output](1.png)