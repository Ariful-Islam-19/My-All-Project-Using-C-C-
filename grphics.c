
#include<conio.h>
#include<graphics.h>
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm," ");
    line(0,0,100,200);
    getch();
    closegraph();
    return 0;
}
