#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,c,s;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(s=i;s<5;s++)
		{
			printf(" ");
		}
		for(j=i;j<=69;j++)
		{
			c=(char)i;
			printf(" %c",c);
			/*if(i==i )
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" ");
			}*/
		}
		printf("\n");
	}
	getch();
}