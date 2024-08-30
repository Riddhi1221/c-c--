#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,r,sum;
	clrscr();
	//printf("N=>");
	//scanf("%d",&n);
	for(i=1;i<=1000;i++)
	{
		n=i;
		sum=0;
		while(n>0)
		{
			r=n%10;
			sum=sum+r*r*r;
			n=n/10;
		}
		if(sum==i)
		{
			printf("%d \t",i);
		}
       }
       getch();
}