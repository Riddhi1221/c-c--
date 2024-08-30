#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3] ={{10,2,3},{4,1,6},{7,8,9}},i,j,r=0,f=0,max;
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
		max=a[0][j];
			for(i=0;i<3;i++)
			{
				if(max<a[i][j])
				{
					max=a[i][j];
					r=j;
				}
			}
			printf("\n max :a[%d]=%d",r,max);
		}
	getch();
}