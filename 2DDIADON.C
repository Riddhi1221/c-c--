#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3] ={{1,2,3},{4,5,6},{7,8,9}},i,j,n,m1,m2;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	m1=a[0][0];
	m2 = a[0][3-1];
	for(i=0;i<3;i++)
	{
		if(i==j && m1>a[i][j])
		{
			m1=a[i][j];
		}
		if(i+j == 3-2 && m2>a[i][j])
		{
			m2=a[i][j];
		}
	}
	printf("a[%d][%d]=%d \n",i,j,m1);
	printf("a[%d][%d]=%d",i,j,m2);
	getch();
}