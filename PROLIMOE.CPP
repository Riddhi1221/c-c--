#include<iostream.h>
#include<conio.h>
/*
object overloding
class demo
{
	public:
	void print()
	{
		cout<<"this is print function"<<endl;
	}
	void print(int a)
	{
		cout<<"value of a="<<a<<endl;
	}
	void print(int a, int b)
	{
		cout<<"a="<<a<<endl<<"b="<<b<<endl;
	}
};
void main()
{
	clrscr();
	demo d;
	d.print(10,1002);
	getch();
}
*/

//operators overloding

class demo
{
	operator ++()
	{
		cout<<"this is operator";
	}
	operator ++(int a)
	{
		cout<<"a="<<a;
	}
	operator ++(int a,int b)
	{
		cout<<"a="<<a<<endl<<"b="<<b;
	}
};
void main()
{
	clrscr();
	demo d;
	d++;
	getch();
}