#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	clrscr();
	printf("A=>");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2==1)
		{
			printf("%d",i);
		}
	}
	getch();
}