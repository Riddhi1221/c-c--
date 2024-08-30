#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A is max");
	}
	else
	{
		printf("B is max");
	}
	getch();
}