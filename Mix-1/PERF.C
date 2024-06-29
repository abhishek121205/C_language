#include<stdio.h>
#include<conio.h>
void main()
{
   int num,i,sum=0;
   clrscr();
   printf("enter the value:");
   scanf("%d",&num);

   for(i=1;i<num;i++)
   {
      if(num%i==0)
      {
	sum=sum+i;
      }
   }
   if(sum==num)
   {
     printf("perfect number:");
   }
   else
   {
     printf("non-perfect number:");
   }


   getch();
}
