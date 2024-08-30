#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter No A"<<endl;
	cin>>a;
	cout<<"Enter No B"<<endl;
	cin>>b;
	cout<<"Enetr '+'=1 '*'=2 '-'=3 '/'=4"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
		{
			c=a+b;
			cout<<c;
			break;
		}
		case 2:
		{
			c=a*b;
			cout<<c;
			break;
		}
		case 3:
		{
			c=a-b;
			cout<<c;
			break;
		}
	}
	getch();
}