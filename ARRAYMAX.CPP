#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n,i,max=0,k;
	clrscr();
	cout<<"Enter array"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<endl;
	/*
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	cout<<endl;
	*/
	max=a[0];
	for(k=0;k<n;k++)
	{
		if(max<a[k])
		{
			max=a[k];
		}
	}
	cout<<"max="<<max;
	getch();
}