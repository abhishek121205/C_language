#include<stdio.h>
#include<conio.h>
void main()
{
   int n,ans,r,sum=0;
   clrscr();
   printf("enter the number:");
   scanf("%d",&n);
   while(n!=0)
   {
	r=n%10;
	sum=sum+r;
	n=n/10;
	if(n==0 && sum>=10)
	{
	    n=sum;
	    sum=0;
	}
   }
   if(sum==1)
   {
	   printf("\nthe number %d is magic number",n);
   }
   else
   {
	   printf("\nthe number %d is not magic number",n);
   }
   getch();
}




















































































































