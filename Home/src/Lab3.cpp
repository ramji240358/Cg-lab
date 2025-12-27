#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

void BresenhamLine(int x1, int y1, int x2, int y2, int color) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (1) {
        putpixel(x1, y1, color);
        if (x1 == x2 && y1 == y2) break;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1 = 20, y1 = 60, x2 = 150, y2 = 200;
    BresenhamLine(x1, y1, x2, y2, 7);
    outtextxy(20, 20, "240358");
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    int textX = 50; 
    int textY = 250; 
    outtextxy(textX, textY, "line using Bresenham's Algorithm");

    getch();
    closegraph();
    return 0;
}
