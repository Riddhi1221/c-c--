#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50],i;
	int n;
	clrscr();
	printf("Enter string");
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("\n a[%d]=%c",i,a[i]);
	}
	n=0;
	for(i=0;a[i]!='\0';i++);
	{
		if(a[i]>=48 && a[i]<=57)
		{
			n++;
		}
	}
	printf("\n didit:= %d",n);
	getch();

}