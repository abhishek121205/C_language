#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int x[50];
	clrscr();
	puts("enter the string:");
	gets(x);

	strrev(x);
	printf("reverse of string: %s",x);
	getch();
}