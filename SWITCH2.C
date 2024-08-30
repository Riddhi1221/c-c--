#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,m;
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
			m = a+b;
			printf("%d",m);
			break;
		}
		case '1':
		{
			m = a+b;
			printf("%d",m);
			break;
		}
		case '-':
		{
			m=a-b;
			printf("%d",m);
			break;
		}
		case '2':
		{
			m=a-b;
			printf("%d",m);
			break;
		}
		case '*':
		{
			m = a*b;
			printf("%d",m);
			break;
		}
		case '3':
		{
			m = a*b;
			printf("%d",m);
			break;
		}
		case '/':
		{
			m = a/b;
			printf("%d",m);
			break;
		}
		case '4':
		{
			m = a/b;
			printf("%d",m);
			break;
		}
		default:
		{
			printf("invalid");
		}
	}
	getch();
}