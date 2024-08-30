#include<iostream.h>
#include<conio.h>
#include<string.h>
class validator
{
	public:
	char email[50],pass[6];
	validator()
	{
		cout<<"Enter Email="<<endl;
		cin>>email;
		cout<<"Enter password="<<endl;
		cin>>pass;
	}
	void display()
	{
		cout<<"Email="<<email<<endl;
		cout<<"password="<<pass<<endl;
	}
	int checkemail(char email[])
	{
		int a,c=0,n=0,m=0,g=0;
		for(a=0;email[a]!='\0';a++)
		{
			if(email[a]=='@')
			{
				c++;
			}
			if(email[a]=='.')
			{
				n++;
			}
			if(email[a]=='c' && email[a]=='o' && email[a]=='m')
			{
				m++;
			}
			if(email[a]=='g' && email[a]=='m' && email[a]=='a' && email[a]=='i' && email[a]=='l')
			{
				g++;
			}

		}
		if(c > 0 && n>0 && m>0 && g>0)
		{
			return 1;

		}
		else
		{
			return 0;
		}
	}
	int password(char pass[])
	{
		int b,c=0,s=0 ,l=0,u=0;
		for(b=0;pass[b]!='\0';b++)
		{
			if((pass[b]>=48 && pass[b]<=57) || pass[b]==32 || (pass[b]>=97 || pass[b]<=122) || (pass[b]>=65 || pass[b]<=90))
			{
				c++;
			}
			if(pass[b]==32)
			{
				s++;
			}
			if(pass[b]>=97 && pass[b]<=122)
			{
				l++;
			}
			if(pass[b]>=65 && pass[b]<=90)
			{
				u++;
			}
		}
		if(c>0 && s>0 && l>0 && u>0 )
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
void main()
{
	clrscr();
	validator v;
	v.display();
	int emailResult = v.checkemail(v.email);
	cout<<"Result="<<emailResult<<endl;
	int passResult =v.password(v.pass);
	cout<<"Result="<<passResult;
	getch();
}