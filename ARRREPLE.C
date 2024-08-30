#include<stdio.h>
#include<conio.h>
void arr(int a[],int n,int b)
{
	int i;
	for(i=n;i<4;i++)
	{
		a[i]=b;
	}
	for(i=0;i<4;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void main()
{
	int a[]={2,3,4,6};
	clrscr();
	arr(a,2,80);
	getch();
}
