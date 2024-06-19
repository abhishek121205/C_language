#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch;
    clrscr();
    X:
    printf("\nenter 1 to add\nenter 2 to sub\nenter 3 to multiply\nenter 4 to divide\nenter your choice:");
    scanf("%d",&ch);
    if(ch>=1 && ch<=4)
    {
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
    }
    else
    {
	printf("\ninvalid choice!");
	goto X;
    }
    if(ch==1)
    {
	printf("\n%d + %d = %d",a,b,a+b);
    }
    else if(ch==2)
    {
	printf("\n%d - %d = %d",a,b,a-b);
    }
    else if(ch==3)
    {
	printf("\n%d x %d = %d",a,b,(a*b));
    }
    else if(ch==4)
    {
	printf("\n%d / %d = %f",a,b,((float)a/b));
    }
    getch();
}