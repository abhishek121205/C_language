#include<stdio.h>
#include<conio.h>
void main ()
{
   int i=1;
   clrscr();

   while(i>=-10)
   {
      printf("\ni=%d",i);
      i-=2;
   }
   printf("\nvalue of i outside the loop is %d",i);

   getch();
}