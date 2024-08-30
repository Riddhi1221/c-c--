#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s=0,p=1,d;
	clrscr();
	printf("Enter any no:=");
	scanf("%d",&a);
	for(;a>0;)
	{
		d=a%10;
		s=s+d;
		p=p*d;
		a=a/10;
	}
	printf("sum of digits = %d\n spy number=%d\n",s,p);
	if(s==p)
	{
		printf("number is a spy number");
	}
	else
	{
		printf("number is not spy number");
	}
	getch();
}