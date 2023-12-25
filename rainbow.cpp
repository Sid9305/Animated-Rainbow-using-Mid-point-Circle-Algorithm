#include <stdio.h>
#include <graphics.h>

void drawCircle(int xc, int yc, int radius,int color) 
{
    int x = 0;
    int y = radius;
    int p = 1 - radius;

    while (x <= y) 
	{
        putpixel(xc + x, yc - y, color); //top
        putpixel(xc - x, yc - y, color); //top
        putpixel(xc + y, yc - x, color); //top to center
        putpixel(xc - y, yc - x, color); //top to center
//        putpixel(xc + y, yc + x, 7); //bottom to center
//        putpixel(xc - y, yc + x, 7); //bottom to center
//        putpixel(xc + x, yc + y, 7); //bottom
//        putpixel(xc - x, yc + y, 7); //bottom


        if (p < 0) 
		{
            p += 2 * x + 3;
        } 
		else 
		{
            p += 2 * (x - y) + 5;
            y--;
        }
        x++;
        delay(2); // Adjust the delay as needed
    }
}

int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	setfillstyle(SOLID_FILL,RED);
	drawCircle(300,300,225,4); //red
	drawCircle(300,301,201,4); //red
	setcolor(4);
	line(75,300,100,300); //left line
	line(500,300,525,300); //right line
	floodfill(100,200,RED);
	
	
	setfillstyle(SOLID_FILL,12);
	setcolor(12);
	line(100,300,125,300); //left line
	line(475,300,500,300); //right line
	drawCircle(300,300,200,12); //orange
	drawCircle(300,301,176,12); //orange
	floodfill(150,200,12);
	
	setfillstyle(SOLID_FILL,YELLOW);
	drawCircle(300,300,175,14); //yellow
	drawCircle(300,301,151,14); //yellow
	setcolor(14);
	line(125,300,150,300);
	line(450,300,475,300); //right line
	floodfill(175,200,YELLOW);

	setfillstyle(SOLID_FILL,2);	
	drawCircle(300,300,150,2); //green
	drawCircle(300,301,126,2); //green
	setcolor(2);
	line(150,300,175,300);
	line(425,300,450,300); //right line
	floodfill(200,200,2);	

	setfillstyle(SOLID_FILL,1);
	drawCircle(300,300,125,1); //blue
	drawCircle(300,301,101,1); //blue
	setcolor(1);
	line(175,300,200,300);
	line(400,300,425,300); //right line
	floodfill(225,220,1);

	setfillstyle(SOLID_FILL,13);	
	drawCircle(300,300,100,13); //indigo
	drawCircle(300,301,76,13); //indigo
	setcolor(13);
	line(200,300,225,300);
	line(375,300,400,300); //right line
	floodfill(250,230,13);

	setfillstyle(SOLID_FILL,MAGENTA);	
	drawCircle(300,300,75,5); //violet
	drawCircle(300,301,51,5); //violet
	setcolor(5);
	line(225,300,250,300);
	line(350,300,375,300); //right line
	floodfill(275,250,MAGENTA);

	getch();
	closegraph();
	return 0;
}
