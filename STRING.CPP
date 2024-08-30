#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char c[100];
	int i;
	clrscr();
	cout<<"Enetr World"<<endl;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		puts(c[i]);
	}
	cout<<endl;
	puts(c);
	getch();
}