#include<stdio.h>
#include<conio.h>

void add(int,int);

void main()
{
       int a,b;
       clrscr();
       printf("enter a:");
       scanf("%d",&a);
       printf("enter a:");
       scanf("%d",&b);
       add(a,b);
       getch();
}

void add(int x,int y)
{
	printf("%d + %d = %d",x,y,x+y);
}