#include<stdio.h>
#include<conio.h>
void main()
{
	int s,e,i,neon,n,c;
	clrscr();
	printf("S");
	scanf("%d",&s);
	printf("E");
	scanf("%d",&e);
	for(i=s;i<=1000;i++)
	{
		n=i*i;
		neon=0;
		for(;n!=0;)
		{
			c=n%10;
			neon=neon+c;
			n=n/10;
		}
		if(i==neon)
		{
			printf("\n%d",i);
		}
	}
	getch();
}