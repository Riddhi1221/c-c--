#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n,i,sum=0;
	clrscr();
	cout<<"Enter Arr"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	cout<<endl;
	cout<<"sum="<<sum;
	getch();
}