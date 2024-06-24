#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
   int a[SIZE],i;
   clrscr();

   for(i=0;i<SIZE;i++)
   {
       printf("enter the elements:");
       scanf("%d",&a[i]);
   }
   printf("\nelements content\n");
   for(i=0;i<SIZE;i++)
   {
       printf("%d is address of %u\n",a[i],&a[i]);

   }
   getch();

}