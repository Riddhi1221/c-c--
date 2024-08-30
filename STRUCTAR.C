#include<stdio.h>
#include<conio.h>
struct Test
{
	int a;
	float f;
};
void printTest(struct Test t)
{
	printf("a: %d,  ",t.a);
	printf("f: %2f,  \n",t.f);
}
void main()
{
	struct Test t[3];
	int i;
	clrscr();
	t[0].a=20;
	t[0].f=12.23;

	t[1].a=21;
	t[1].f=23.32;

	t[2].a=10;
	t[2].f=4.32;

	for(i=0;i<3;i++)
	{
		printTest(t[i]);
	}
	getch();
}