#include<stdio.h>
#include<conio.h>
void getArr (int a[],int n,char c);
int size(int h);
void printArr(int a[],int n,char c);
void main()
{
	int a[10],n,b[20],n1;
	clrscr();

	n=size(10);
	getArr(a,n,'A');
	printArr(a,n,'A');

	n1=size(20);
	getArr(b,n1,'B');
	printArr(b,n1,'B');

	getch();
}
void printArr(int a[],int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c[%d]=%d\n",c,i,a[i]);
	}
}
void getArr(int a[],int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c[%d]=",c,i);
		scanf("%d\n\n",&a[i]);
	}
}
int size(int h)
{
	int n;
	do
	{
		printf("Enter no:(1 to %d)",h);
		scanf("%d",&n);
	}
	while(n<=0 || n>h);
	return n;
}
