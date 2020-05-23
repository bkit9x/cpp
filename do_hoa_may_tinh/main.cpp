#include <winbgim.h>
int main(int argc, char *argv[])
{
	initwindow(200, 200);
	int x = getmaxx(), y = getmaxy();
	setbkcolor(0);
   	cleardevice();
	setcolor(2);

	circle(100,100,30);
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}
