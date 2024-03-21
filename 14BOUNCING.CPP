#include <graphics.h>
#include <conio.h>
#include <dos.h>

// Ball properties
int ballX, ballY;
int ballRadius = 20;
int velocity = 5; // Initial velocity of the ball

void drawBall(int x, int y) {
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x, y, ballRadius, ballRadius);
}

void clearBall(int x, int y) {
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x, y, ballRadius, ballRadius);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    // Initialize ball position
    ballX = getmaxx() / 2;
    ballY = ballRadius;

    // Draw initial ball
    drawBall(ballX, ballY);

    while (!kbhit()) {
	// Clear previous position
	clearBall(ballX, ballY);

	// Move ball
	ballY += velocity;

	// Bounce off the top and bottom edges
	if (ballY <= ballRadius || ballY >= getmaxy() - ballRadius) {
	    velocity = -velocity; // Change direction
	}

	// Draw ball at new position
	drawBall(ballX, ballY);

	delay(50); // Adjust speed
    }

    getch();
    closegraph();
    return 0;
}
