#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	clrscr();
	printf("Enter No=>");
	scanf("%d",&i);
	abc:
	if(i<=10)
	{
		printf("%d",i);
		i++;
		goto abc;
	}
	getch();

}