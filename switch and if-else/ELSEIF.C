#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   clrscr();

   f:

   printf("\nenter the age:");
   scanf("%d",&age);

   if(age<=0)
   {
     printf("\ninvalid value enter again");
     goto f;
   }

   else if(age<18)
   {
     printf("\nminor");
   }
   else if(age>=18 && age<=60)
   {
     printf("\nadult");
   }
   else if(age>61)
   {
     printf("\nsenior citizen");
   }


   getch();
}