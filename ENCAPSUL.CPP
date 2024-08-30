#include<iostream.h>
#include<conio.h>
class demo
{
	protected:
	int a;
	int k;
	public:
	demo():a(100)
	{}
	int geta()
	{
		return a;
	}
	void seta()
	{
		this->a=a;
	}
	int getk()
	{
		return k;
	}
	void setk()
	{
		this->k=k;
	}
};
void main()
{
	clrscr();
	demo d;
	d.geta(1000);
	d.getk(2000);
	cout<<"a="<<d.geta();
	getch();
}