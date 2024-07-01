#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j;
     char x=97;
     clrscr();

     for(i=1;i<=7;i++)
     {
	 for(j=7;j>i;j--)
	 {
	    printf(" ");
	 }

	 for(j=1;j<=((2*i)-1);j++)
	 {
	      printf("%c",x);
	 }
	 x++;
	 printf("\n");
     }
     getch();
}