#include<stdio.h>
#include<conio.h>
int max (int a)
{
	int k=0,c,n;
	a=n*n;
	while(a!=0)
	{
		c=a%10;
		k=k+c;
		//m=m*c;
		a=a/10;
	}
	return (n==k)?1:0;
}
int even(int b)
{
	return (b%2==0)?1:0;
}
void value(int x,int y,int * sum,int * multi)
{
	* sum=x+y;
	* multi=x*y;
}
void swap(int *p,int *q)
{
	*p +=*q;
	*q-=*p;
	*p-=*q;
}
void main()
{
	int a,b,x,y,sum,multi,p=10,q=20;
	clrscr();
	a=max(9);
	if(a==1)
	{
		printf("pali no\n");
	}
	else
	{
		printf("not pali no\n");
	}
	b=even(10);
	if(b==1)
	{
		printf("even no\n");
	}
	else
	{
		printf("odd no\n");
	}
	value(10,20,&sum,&multi);
	printf("sum=%d\n",sum);
	printf("multi=%d\n",multi);
	swapl
	//printf("%d",max(10,20));
	getch();

}