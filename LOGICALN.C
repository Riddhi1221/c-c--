#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("A=");
	scanf("%d",&a);

	if(!(a>100 || a>200))
	{
		printf("welcome");
	}
	else
	{
		printf("go back");
	}
	getch();
}