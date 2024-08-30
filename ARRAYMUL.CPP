#include<iostream.h>
#include<conio.h>
class myClass
{
	public:
	int n;
};
void main()
{
	clrscr();
	int i;
	myClass a[10];
	for(i=0;i<5;i++)
	{
		myClass m;
		a[i]=m;
	}
	for(i=0;i<5;i++)
	{
		a[i].n=i;
		cout<<a[i].n<<endl;
	}
	getch();
}