#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int a;
	int b;
	demo()
	{
		cout<<"Enter the number"<<endl;
		cin>>a;
		cout<<"Enter the number"<<endl;
		cin>>b;
	}
	operator ++()
	{
		cout<<"This is operator function"<<endl;
		a++;
		b++;
	}
	int operator +(demo e)
	{
		cout<<"This is + operator"<<endl;
		return a+e.a;
	}
};
void main()
{
	clrscr();
	demo d;
	demo e;
	d++;
	d.a=100;
	e.a=200;
	int total=d+e;
	cout<<"Total="<<total;
	getch();
}