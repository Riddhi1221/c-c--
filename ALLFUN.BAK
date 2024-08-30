#include<stdio.h>
#include<conio.h>
int even(int i)
{
	return (i%2==0)?1:0;
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
	return (i==k)?1:0;
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
	return (i==k)?1:0;
}
void main()
{
	int i=121;
	clrscr();
	if(even(i))
	{
		printf("even no%d\n",i);
	}
	if else(arm(i))
	{
		printf("arm no%d\n",i);
	}
	if else(pali(i))
	{
		printf("pali no%d\n",i);
	}
	else
	{
		printf("the no does not meet any number");
	}
	/*
	int i,n,a;
	clrscr();
	i=even(1);
	if(i==123)
	{
		printf("even no\n");
	}
	else
	{
		printf("odd no\n");
	}
	n=pali(121);
	if(n==321)
	{
		printf("\npali");
	}
	else
	{
		printf("\nnot pali");
	}
	a=arm(153);
	if(a==1)
	{
		printf("\narm");
	}
	else
	{
		printf("\nnot arm");
	}
	*/
	getch();

}