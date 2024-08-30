#include<iostream.h>
#include<conio.h>
class myDemo
{
	public:
	int a,b;
	myDemo():a(10),b(100)
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};
void main()
{
	clrscr();
	myDemo d;
	getch();
}