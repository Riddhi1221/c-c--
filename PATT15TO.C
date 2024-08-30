#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=15;
	clrscr();
	for(i=15;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			k-=1;
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}