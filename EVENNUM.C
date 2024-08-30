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
		if(i%2==0)
		{
			printf("\n %d",i);
		}
			i=i+1;
			goto input;

	}
	getch();
}