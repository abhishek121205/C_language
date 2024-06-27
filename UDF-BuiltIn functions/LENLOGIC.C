#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[50];
	int i,count=0;
	clrscr();

	puts("enter the string:");
	gets(x);

	for(i=0;x[i]!=NULL;i++)
	{
	   count++;
	}

	printf("the length is: %d",count);
	getch();
}