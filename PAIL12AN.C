#include<stdio.h>
#include<conio.h>
void pail(int a,int b)
{
	int n,c,k,i=a;
	do
	{
		n=i;
		k=0;
		do
		{
			c=n%10;
			k=k*10+c;
			n=n/10;
		}
		while(n!=0);
		if(k==i)
		{
			printf("%d  ",k);
		}
		i++;
	}
	while(i<=b);

}
void main()
{
	int  x,y;
	clrscr();
	pail(12,230);
	getch();



}