#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter No=>");
	scanf("%d",&n);
	abc:
	if(i<=n)
	{
		printf("%d",i);
		i++;
		goto abc;
	}
	getch();
}