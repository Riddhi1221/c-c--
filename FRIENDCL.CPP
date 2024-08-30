#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	int a;
	public:
	demo():a(100)
	{}
	friend class xyz;
};
class xyz
{
	public:
	void print(demo& d)
	{
		cout<<"a="<<d.a<<endl;
	}
};
void main()
{
	clrscr();
	demo d;
	xyz x;
	x.print(d);
	getch();
}