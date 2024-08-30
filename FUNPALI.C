#include<stdio.h>
#include<conio.h>
int fun(int a);
void main()
{
	int i;
	clrscr();
	i=fun(121);
	printf("Max Number %d",i);
	getch();
}
int fun(int a)
{
	for(i=a;i>0;)
	{
		r=i%10;
		s=s*10+r;
		i=i/10;
	}
	if(s==a)
	{
		return a;
	}
}