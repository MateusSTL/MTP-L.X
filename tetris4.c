#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main() 
{
	textbackground(WHITE);
	clrscr();
	for(y = 1; y < 10; y++)
	{
		textcolor(WHITE);
		gotoxy(10, y -1);
		printf("\xDC");
		gotoxy(10, y);
		textcolor(GREEN);
		printf("\xDC");
		sleep(1);
		
	}
	return 0;
}
