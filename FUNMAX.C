#include<stdio.h>
#include<conio.h>
int fun(int a,int b);
void main()
{
	int i;
	clrscr();
	i=fun(10,20);
	printf("Max Number %d",i);
	getch();
}
int fun(int a,int b)
{
	/*if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	} */
	return a>b?a:b;
}