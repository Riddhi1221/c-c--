#include<stdio.h>
#include<conio.h>
void prime(int n);
void main()
{
	int n=10;
	clrscr();
	prime(n);
	getch();
}
void prime(int n)
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	printf("\n");
}
