#include<stdio.h>
#include<conio.h>
void fun(int n)
{
	if(n>=1)
	{
		printf("%d",n);
		fun(n-1);
	}
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
void main()
{
	clrscr();
	fun(10);
	printf("\n");
	printf("fact %d",fact(5));
	getch();
}
