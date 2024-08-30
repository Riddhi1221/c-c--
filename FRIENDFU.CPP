#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	int a;
	public:
	demo():a(100)
	{}
	friend void print(demo& d);
};
void print(demo& d)
{
	cout<<"a="<<d.a<<endl;
}
void main()
{
	clrscr();
	demo d;
	print(d);
	getch();
}