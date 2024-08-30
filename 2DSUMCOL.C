#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3] ={{10,2,3},{4,1,6},{7,8,9}},i,j,r=0,f=0,sum;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d]=%d\n",i,a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<3;j++)
	{
		sum=0;
		for(i=0;i<3;i++)
		{
			sum=sum+a[i][j];
			r=j;
		}
		printf("\n sum :a[%d]=%d",r,sum);
	}
	getch();
}