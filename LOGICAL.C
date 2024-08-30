#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	printf("C=");
	scanf("%d",&c);

	if(c>a && c>b)
	{
		printf("C is Max");
	}
	else if(b>a)
	{
		printf("B is Max");
	}
	else
	{
		printf("A is Max");
	}

	getch();
}