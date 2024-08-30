#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum,r,s,e;
	clrscr();
	printf("Enter number");
	scanf("%d",&s);
	printf("Enter number");
	scanf("%d",&e);
	if(s<e)
	{
		for(i=s;i<=e;i++)
		{
			n=i;
			sum=0;
			while(n>0)
			{
				r=n%10;
				sum=sum*10+r;
				n /=10;
			}
			if(sum == i)
			{
				printf("%d\t",i);
			}
		}
	}
	else
	{
		for(i=s;i>=e;i--)
		{
			n=i;
			sum=0;
			while(n>0)
			{
				r=n%10;
				sum=sum*10+r;
				n /=10;
			}
			if(sum == i)
			{
				printf("%d\t",i);
			}
		}
	}
	getch();
}