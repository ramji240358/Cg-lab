#include <stdio.h>
#include <graphics.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
putpixel(170,100,WHITE);

setcolor(GREEN);
line(201,280,150,150);

setcolor(CYAN);
line(50,50,250,250);

setcolor(RED);
line(220,202,155,155);

setcolor(BLUE);
circle(250,250,170);

setcolor(12);
rectangle(110,20,10,170);
outtextxy(119,400,"Ramji");
outtextxy(121,420,"240358");


setbkcolor(03);

getch();
closegraph();
return 0;


}
