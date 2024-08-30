#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,total,per;
	clrscr();
	printf("1:=");
	scanf("%d",&a);
	printf("2:=");
	scanf("%d",&b);
	printf("3:=");
	scanf("%d",&c);

	total=a+b+c;
	printf("\ntotal:=%d",total);

	per =total/3;
	printf("\nper:=%d",per);

	if(per >= 90)
	{
		printf("\nGrade A+");
	}
	else
	{
		if(per >= 75)
		{
			printf("\nGrade A");
		}
		else
		{
			if(per >= 60)
			{
				printf("\nGrade B");
			}
			else
			{
				if(per >= 40 )
				{
					printf("\nGrade C");
				}
				else
				{
					printf("\nFail");
				}
			}
		}
	}

	getch();
}