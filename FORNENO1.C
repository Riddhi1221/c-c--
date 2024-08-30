#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n,sum,neon;
	clrscr();
	//printf("A=>");
	//scanf("%d",&a);
	i=n*n;
	for(i=10;i<=1000;i++)
	{
		sum=0;
		n=i;
		while(n>0)
		{
		neon=n%10;
		sum=sum+neon;
		n=n/10;
		}
	}
	if(n == sum)
	{
		printf("neon no.");
	}
	else
	{
		printf("not neno no.");
	}
	getch();
}