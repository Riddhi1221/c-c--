#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,min;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	printf("C=");
	scanf("%d",&c);
	printf("D=");
	scanf("%d",&d);
	min=(a<b && a<c && a<d)?a:(b<c && b<d)?b:c<d?c:d;//logical
	//min=a<b?a:a<c?a:a<d?a:b<c?b:b<d?b:c<d?c:d; //ternary
	printf("%d",min);
	getch();
}