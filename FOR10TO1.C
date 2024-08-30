#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	clrscr();
	printf("A=>");
	scanf("%d",&a);
	for(i=10;a<=i;i--)
	{
		printf("%d",i);
	}
	getch();
}