#include<stdio.h>
#include<conio.h>
void main()
{
	const pin=123;
	int uPin=0,i=5;
	clrscr();
	do
	{
		printf("Enter the pin=>");
		scanf("%d",&uPin);
		if(uPin == pin)
		{
			printf("pin accepted");
		}
		else
		{
			i--;
			if(i>0)
			{
				printf("you have %d attempt left.\n",i);
			}
			else
			{
				printf("fail\n");
				break;
			}
		}
	}
	while(1);
	getch();
}