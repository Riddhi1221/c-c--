#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10},i,n,sum=0;
	clrscr();
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		sum=sum+a[i];
	}
	printf("\nTotal: %d",sum);
	getch();
}