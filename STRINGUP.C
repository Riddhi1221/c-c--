#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50],i;
	clrscr();
	printf("Enter string");
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	n=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<90)
		{
			n++;
		}
	}
	printf("\n upper char:= %d",n);
	getch();
}