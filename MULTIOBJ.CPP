#include<iostream.h>
#include<conio.h>
class myClass
{
	public:
	int a;
	void getvalue()
	{
		cout<<"Enter number"<<endl;
		cin>>a;
		cout<<endl;
	}
};
void main()
{
	clrscr();
	myClass x;
	x.getvalue();
	myClass y;
	y.getvalue();
	getch();

}