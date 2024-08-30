#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int abc;
	static int a;
};
int demo::a=0;
void main()
{
	clrscr();
	demo::a=150;
	cout<<"a="<<demo::a;
	getch();
}