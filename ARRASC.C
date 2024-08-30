#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={10,33,55,22,3,2,77,1},n,i,j,k;
	clrscr();
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
		printf("\na[%d]=%d",i,a[i]);
	}
	getch();
}