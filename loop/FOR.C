#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   clrscr();
   for(i=10;i>=1;i-=3)
   {
      printf("\n %d",i);
   }

   printf("\nvalue of i outside the loop=%d",i);
   getch();
}
