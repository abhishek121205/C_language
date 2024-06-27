#include<stdio.h>
#include<conio.h>

int oddnEve(int);

void main()
{
       int a,ans;
       clrscr();
       printf("enter a:");
       scanf("%d",&a);

       ans=oddnEve(a);
       if(ans==1)
       {
	   printf("the number %d is odd",a);
       }
       else
       {
	   printf("the number %d is even",a);
       }
       getch();
}

int oddnEve(int a)
{
	return a%2;
}