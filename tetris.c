#include <stdio.h>
#include <conio2.h>

int main()
{
	textbackgroung(WHITE)
	clrscr();
	textcolor(RED);
	gotoxy(20,10);
	printf("\xDB");
	textcolor(GREEN);
	gotoxy(8,25);
    printf("\xC0");
    textcolor(BLUE);
    gotoxy(30,30);
    printf("\xAC");
    
	
}
