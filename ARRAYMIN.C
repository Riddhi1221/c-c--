#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={10,12,3,4,5,6,7,8,9,10},n,i,min;
	clrscr();
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(min>a[i])
			{
				min=a[i];
			}
		}
	printf("\nmin=>%d",min);
	getch();
}