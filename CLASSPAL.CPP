#include<iostream.h>
#include<conio.h>
class myPali
{
	public:
	int pali(int a)
	{
		int c,k=0,i;
		i=a;
		while(a!=0)
		{
			c=a%10;
			k=k*10+c;
			a=a/10;
		}
		return (i==k)?1:0;
	}
};
void main()
{
	int st;
	clrscr();
	myPali m;
	st = m.pali(121);
	cout<<st;
	getch();
}