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

	if(a>b)
	{
		if(a>c)
		{
			printf("A is max");
		}
		else
		{
			printf("C is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is max");
		}
		else
		{
			printf("C is max");
		}
	}
	getch();
}
