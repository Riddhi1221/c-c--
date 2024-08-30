#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;
	clrscr();
	printf("N=");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		sum=sum+rem;
		n=n/10;

	}
	printf("\nsum=>%d",sum);

	getch();
}