#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	char c;
	clrscr();

	printf("A=");
	scanf("%d",&a);

	printf("B=");
	scanf("%d",&b);

	printf("1.+\n2.-\n3.*\n4./\nenter choise=>");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':
		{
			n = a+b;
			printf("%d",n);
			break;
		}
		case '-':
		{
			n = a-b;
			printf("%d",n);
			break;
		}
		case '*':
		{
			n = a*b;
			printf("%d",n);
			break;
		}
		case '/':
		{
			n= a/b;
			printf("%d",n);
			break;
		}
		default:
		{
			printf("invaild");
		}
	}
	getch();
}