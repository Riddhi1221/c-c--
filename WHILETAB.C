#include<stdio.h>
#include<conio.h>
void main()
{
	int i=11,n;
	clrscr();
	printf("N=");
	scanf("%d",&n);
	while(i<=20)
	{
		printf("\n%d * %d = %d",n,i++,n*i);
		//i++;
	}
	getch();
}