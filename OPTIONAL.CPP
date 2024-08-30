#include<iostream.h>
#include<conio.h>
class myClass
{
	public:
	void display(int a ,int b=0)
	{
		cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
	}
};
void main()
{
	clrscr();
	int a=500;
	myClass m;
	m.display(a);
	myClass n;
	n.display(123,12);
	getch();
}