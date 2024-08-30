#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,a;
	clrscr();
	printf("A=>");
	scanf("%d",&a);
	do
	{
		printf("\n%d*%d=%d",a,i,a*i);
		i++;
	}
	while(i<=10);
	getch();
}