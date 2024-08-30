#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={12,44,33,22,88,2,1,3},i,n,max;
	clrscr();
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\n max:%d",max);
	getch();
}