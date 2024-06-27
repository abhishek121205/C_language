#include<stdio.h>
#include<conio.h>

int a,b;
void add();

void main()
{
	clrscr();
       printf("enter a:");
       scanf("%d",&a);
       printf("enter a:");
       scanf("%d",&b);
       add();
       getch();
}

void add()
{
	printf("%d + %d = %d",a,b,a+b);
}