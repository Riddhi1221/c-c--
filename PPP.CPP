#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int a;
};
class child:private demo
{
	public:
	int abc;
	child()
	{
		int a;
		abc=500;
		cout<<"a="<<a<<endl;
	}
};
void main()
{
	clrscr();
	child d;
	cout<<"a"<<d.abc;
	getch();
}