#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char c;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(k=69;k>i;k--)
		{
			printf(" ");
		}
			for(j=65;j<=i;j++)
			{
				c=(char)i;
				printf("%c ",c);
			}
			for(i=69;i>=65;i--)
			{
				for(k=i;k<=69;k++)
				{
					printf(" ");
				}
				for(j=i;j>=69;j--)
				{
					c=(char)i;
					printf("%c",c);
				}
			}
		printf("\n");
	}

	getch();
}