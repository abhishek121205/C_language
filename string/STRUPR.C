#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int x[50];
	clrscr();
	puts("enter the string:");
	gets(x);

	strupr(x);
	printf("uppercase of string: %s",x);
	getch();
}