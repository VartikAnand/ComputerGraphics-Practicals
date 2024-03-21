#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

#define PI 3.14

void rotateRectangle(int x1, int y1, int x2, int y2, int angle) {
    // Calculate midpoint of rectangle
    int midX = (x1 + x2) / 2;
    int midY = (y1 + y2) / 2;

    // Convert angle to radians
    float rad = angle * PI / 180.0;

    // Calculate new coordinates after rotation
    int newX1 = midX + (x1 - midX) * cos(rad) - (y1 - midY) * sin(rad);
    int newY1 = midY + (x1 - midX) * sin(rad) + (y1 - midY) * cos(rad);
    int newX2 = midX + (x2 - midX) * cos(rad) - (y2 - midY) * sin(rad);
    int newY2 = midY + (x2 - midX) * sin(rad) + (y2 - midY) * cos(rad);

    // Draw rotated rectangle
    rectangle(newX1, newY1, newX2, newY2);
}


void scaleRectangle(int &x1, int &y1, int &x2, int &y2, float scaleX, float scaleY) {
    // Calculate new coordinates after scaling
    int midX = (x1 + x2) / 2;
    int midY = (y1 + y2) / 2;
    x1 = midX + (x1 - midX) * scaleX;
    y1 = midY + (y1 - midY) * scaleY;
    x2 = midX + (x2 - midX) * scaleX;
    y2 = midY + (y2 - midY) * scaleY;
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:/turboc3/bgi");

    // Coordinates of original rectangle
    int x1 = 100, y1 = 100, x2 = 300, y2 = 200;

    // Draw original rectangle
    rectangle(x1, y1, x2, y2);
    getch();



    // Angle of rotation
   // int angle = 45;

    // Rotate rectangle and draw
    // rotateRectangle(x1, y1, x2, y2, angle);
  float scaleX = 1.5, scaleY = 0.8;

    cleardevice();
    cout<<"After scaling it :" ;
    // Scale rectangle
    scaleRectangle(x1, y1, x2, y2, scaleX, scaleY);
    // Draw scaled rectangle
    rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
