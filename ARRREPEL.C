#include<stdio.h>
#include<conio.h>
void arr(int a[],int b,int c)
{
	int i,k,v;
	for(i=0;i<4;i++)
	{
		if(a[i]==b)
		{
			a[i]=c;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("a[%d]=a[%d]\n",i,a[i]);
	}
}
void main()
{
	int a[]={1,20,30,20};
	clrscr();
	arr(a,20,80);
	getch();

}