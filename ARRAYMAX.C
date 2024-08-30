#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={1,2,3,4,5,6},n,i,max=0;
	clrscr();
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		max=a[0];
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nMax=>%d",max);
	getch();
}
