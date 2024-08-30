#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
	/*
	char c[100];
	char d[100];
	clrscr();
	printf("Enter: ");
	gets(c);
	printf("Enter: ");
	gets(d);


	printf("len: %d\n",strlen(c));
	printf("upp: %s\n",strupr(c));
	printf("lwr: %s\n",strlwr(c));
	printf("rev: %s\n",strrev(c));

	if(strcmp(c,d)==0)
	{
		printf("equal");
	}
	else
	{
		printf("diff");
	}
	strcpy(d,c);
	printf("\nnew: %s",d);
	*/
	clrscr();
	printf("%d\n",(int) abs(-12));
	printf("%d\n",(int) ceil(12.1));
	printf("%d\n",(int) floor(12.9));
	printf("%d\n",(int) sqrt(16));
	printf("%d\n",(int) pow(2,6));
	getch();
}