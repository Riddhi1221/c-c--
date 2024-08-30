#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	int n,i;
	clrscr();
	printf("Enter string");
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("\na[%d]=%c",i,a[i]);
	}
	n=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ' && a[i+1]!=' ')
		{
			n++;
		}
	}
	printf("\n\nword=%d",n);
	getch();
}