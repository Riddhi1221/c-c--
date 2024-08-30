#include<stdio.h>
#include<conio.h>
void fun(int*a , int*b)
{
	int x=10,y=20;
	*a=x;
	*b=y;
}
void main()
{
	int a,b;
	clrscr();
	fun(&a,&b);
	printf("%p %p\n",a,b);
	printf("%d %d",a,b);
	getch();
}