#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 250, y = 250; 
    int radius = 100;
    setcolor(RED);     
    circle(x, y, radius); 

    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(x - 80, y + radius + 30, "Roll No. : 240358(Ram)");

    outtextxy(x - 80, y + radius + 60, "Graphics Lab Report");

    getch();
    closegraph();
    return 0;
}
