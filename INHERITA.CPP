#include<iostream.h>
#include<conio.h>
class myClass
{
	public:
	int a;
	void getdata()
	{
		cout<<"Entar number = ";
		cin>>a;
	}
};
class demo : public myClass
{
	public:
	void print()
	{
		cout<<"value is ="<<a<<endl;
	}
};
void main()
{
	clrscr();
	demo m;
	m.getdata();
	m.print();
	getch();
}