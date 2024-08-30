#include<iostream.h>
#include<conio.h>
class parent
{
	public:
	int a;
	parent():a(10)
	{
		cout<<"This is parent class"<<endl;
	}
};
class child
{
	public:
	child()
	{
		cout<<"This is child class"<<endl;
	}
};
class child2 : public parent,public child
{
	public:
	child2()
	{
		cout<<"This is child2 class"<<endl;
		cout<<"a number"<<a<<endl;
	}
};
void main()
{
	clrscr();
	child2 c;
	getch();
}