#include <winbgim.h>
int main(int argc, char *argv[])
{
	initwindow(1357, 700);
	int x = getmaxx(), y = getmaxy();
	setbkcolor(0);
   	cleardevice();
	setcolor(2);
	int margin = 1, color = 1, n=0;
	
	while(!kbhit()){
	while((x*0.1+n*margin)<x/2 && (y*0.1+n*margin)<y/2){
	   	cleardevice();	

		if(color>15) color = 1;
//		setfillstyle(1,color);
		setcolor(color);
		color++;



		rectangle(10,10,60,y-10);
		
//		rectangle(x*0.1+n*margin, y*0.1+n*margin, x - x*0.1-n*margin, y - y*0.1-n*margin);


		n++;
		delay(1);

	}
	n=0;
}
	return 0;
}
