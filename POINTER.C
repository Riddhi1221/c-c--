#include<stdio.h>
#include<stdio.h>
void main()
{
	int a=123;
	int* p=&a;
	clrscr();
	printf("%p",p);
	printf("%d",*p);
	getch();
}