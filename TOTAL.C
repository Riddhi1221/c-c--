#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("N=");
	scanf("%d",&n);
	input:
	if(i<=n)
	{
		printf("%d",i);
		i=i+1;
		i=i+n;
		//printf("%d",i);
		goto input;
	}
	getch();
}