#include<stdio.h>
#include<conio.h>
#define S 6
void main()
{
     int i,j,a[S],temp,max,min;
     clrscr();

     for(i=0;i<S;i++)
     {
	 printf("enter ele:");
	 scanf("%d",&a[i]);
     }

     printf("display\n");
     max=min=a[0];
     for(i=0;i<S;i++)
     {
	 if(max<a[i])
	 {
	    max=a[i];
	 }
	 else if(min>a[i])
	 {
	    min=a[i];
	 }
     }
     printf("maximum value=%d\nminimum value=%d\n",max,min);
     getch();
}