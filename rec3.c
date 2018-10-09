#include <stdio.h>

int main() 
{
	int a, b, c, d, o, ol, s, sl, resto, mdc, somafn, somafd;
	scanf("%d/%d,%d/%d", &a, &b, &c, &d);
    o = b * d;  //y
    s = ((d*a) + (b*c));  //x
    ol = b * d;
    sl = ((d*a) + (b*c));
	resto = s % o;
    while(resto!=0)
    {
        s = o;
        o = resto;
        resto = s%o;         
        mdc = o;
	}
    somafn = (sl / mdc);
    somafd = (ol / mdc);
    printf("\n%d/%d", somafn, somafd);
	return 0;
}
