#include<stdio.h>
#include<conio.h>
int even(int i)
{
	if(i%2==0)
	{
		return 123;
	}
	else
	{
		return 456;
	}
}
int pali(int n)
{
	int c,k=0,i;
	i=n;
	while(n!=0)
	{
		c=n%10;
		k=k*10+c;
		n=n/10;
	}
	if(i==k)
	{
		return 321;
	}
	else
	{
		return 654;
	}
}
int arm(int a)
{
	int c,k=0,i;
	i=a;
	while(a!=0)
	{
		c=a%10;
		k=k+(c*c*c);
		a=a/10;
	}
	if(i==k)
	{
		return 789;
	}
	else 
	{
		return 1;
	}
}
void main()
{
	int i,n,a;
	clrscr();
	i=even(1);
	if(i==123)
	{
		printf("even no");
	}
	else
	{
		printf("odd no");
	}
	n=pali(121);
	if(n==321)
	{
		printf("pali\n");
	}
	else
	{
		printf("not pali\n");
	}
	a=arm(153);
	if(a==789)
	{
		printf("arm\n");
	}
	else
	{
		printf("not arm\n")
	}
	getch();

}