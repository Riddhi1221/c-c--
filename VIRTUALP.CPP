#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	virtual void fun()=0;
};
class myclass :public demo
{
	public:
	void fun()
	{
		cout<<"this is override function"<<endl;
	}
};
void main()
{
	clrscr();
	myclass m;
	m.fun();
	getch();
}