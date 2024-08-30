#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,input;
	clrscr();
	printf("A");
	scanf("%d",&a);
	printf("B");
	scanf("%d",&b);
	printf("input");
	scanf("%d",&input);
	switch(input)
	{
		case 1:
		{
			input=a+b;
			printf("%d",input);
			break;
		}
	}
}