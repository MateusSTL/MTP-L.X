#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main() 
{
	textbackground;
	clrscr;
	textcolor;
	gotoxy(10,1);
	printf("\xC4\xB3\xB3\xB3");
	sleep(1);
	gotoxy(10,2);    //for(y = 2; y < 10; y++)  sleep(1)  gotoxy(10,y)  printf("\xB3")
	printf("\xB3");
	sleep(1);
	gotoxy(10,3);
	printf("\xB3");
	sleep(1);
	gotoxy(10,4);
	printf("\xB3");
	sleep(1);
	gotoxy(10,5);
	printf("\xB3");
	sleep(1);
	return 0;
}
