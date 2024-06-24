#include<stdio.h>
#include<conio.h>
#define S 3
int add(int [][S]);
void main()
{
     int a[S][S];
     clrscr();
     printf("\n%d",add(a));
     getch();
}
int add(int a[][S])
{
     int i,j,sum=0;
     for(i=0;i<S;i++)
     {
	for(j=0;j<S;j++)
	{
	     printf("enter ele:");
	     scanf("%d",&a[i][j]);
	}
     }

     for(i=0;i<S;i++)
     {
	 for(j=0;j<S;j++)
	 {
	      sum=sum+a[i][j];
	 }
     }
     return sum;
}