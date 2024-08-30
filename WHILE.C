#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	clrscr();
	while(a++ + ++a)
	{
		printf("%d",a);
	}
	getch();
}