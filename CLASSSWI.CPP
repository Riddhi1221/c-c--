#include<iostream.h>
#include<conio.h>
class mySwitch
{
	public:
	int a,b,c;

	void userinput()
	{
		cout<<"Enter number a"<<endl;
		cin>>a;
		cout<<"Enter number b"<<endl;
		cin>>b;
		cout<<endl;
		}
	void select()
	{
		cout<<"1=add"<<endl<<"2=sub"<<endl<<"3=multi"<<endl<<"4=div"<<endl;
		cout<<"Enter number "<<endl;
		cin>>c;
	}

	void calculator()
	{
		switch(c)
		{
			case 1:
				cout<<"add=>"<<a+b<<endl;
				break;
			case 2:
				cout<<"sub=>"<<a-b<<endl;
				break;
			case 3:
				cout<<"multi=>"<<a*b<<endl;
				break;
			case 4:
				cout<<"div=>"<<a/b<<endl;
				break;
			default:
				cout<<"invalid"<<endl;
				break;
		}
	}
};
void main()
{
	clrscr();
	mySwitch m;
	m.userinput();
	m.select();
	m.calculator();
	getch();
}