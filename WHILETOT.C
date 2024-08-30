#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,sum=0,a;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("\n %d",i);
		sum=sum+i;
		i++;
	}
	printf("\n total=%d",sum);
	getch();
}
