#include<stdio.h>
#include<conio.h>
#define S 6
void main()
{
     int i,j,a[S],temp;
     clrscr();

     for(i=0;i<S;i++)
     {
	 printf("enter ele:");
	 scanf("%d",&a[i]);
     }

     printf("display\n");
     for(i=0;i<S-1;i++)
     {
	 for(j=0;j<S-1;j++)
	 {
	     if(a[j]>a[j+1])
	     {
	       temp=a[j];
	       a[j]=a[j+1];
	       a[j+1]=temp;
	     }
	 }
     }
     for(i=0;i<S;i++)
     {
	 printf("%d ",a[i]);
     }
     getch();
}