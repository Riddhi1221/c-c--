#include<stdio.h>
#include<conio.h>
void main()
{
	int a,rem;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	for(;a>0;a/=10)
	{
		rem=a%10;
		printf("%d",rem);
	}
	getch();
}