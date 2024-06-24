#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
   int a[SIZE],i,sum=0;
   clrscr();

   for(i=0;i<SIZE;i++)
   {
       printf("enter the elements:");
       scanf("%d",&a[i]);
       sum=sum+a[i];
   }
   printf("\nthe sum of all elements is:%d and average is:%f",sum,(float)sum/SIZE);
   getch();
}
