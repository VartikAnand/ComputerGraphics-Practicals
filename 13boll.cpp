#include <graphics.h>
#include <conio.h>

// Ball properties
int ballX, ballY;
int ballRadius = 20;

void drawBall(int x, int y) {
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x, y, ballRadius, ballRadius);
}

void clearBall(int x, int y) {
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x, y, ballRadius, ballRadius);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    // Initialize ball position
    ballX = getmaxx() / 2;
    ballY = getmaxy() / 2;

    // Draw initial ball
    drawBall(ballX, ballY);

    while (1) {
        // Check for arrow key presses
        if (kbhit()) {
            char ch = getch();
            if (ch == 0 || ch == 224) { // Special keys
                ch = getch();
                clearBall(ballX, ballY);
                switch (ch) {
                case 72: // Up arrow key
                    ballY -= 10;
                    break;
                case 80: // Down arrow key
                    ballY += 10;
                    break;
                case 75: // Left arrow key
                    ballX -= 10;
                    break;
                case 77: // Right arrow key
                    ballX += 10;
                    break;
                }
                drawBall(ballX, ballY);
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
