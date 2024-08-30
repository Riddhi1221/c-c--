
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10,n;
	clrscr();
	printf("Enter No=>");
	scanf("%d",&n);
	abc:
	if(n<=i)
	{
		printf("%d",i);
		i=i-1;
		goto abc;
	}
	getch();
}