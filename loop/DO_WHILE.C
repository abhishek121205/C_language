#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,n,r,count,sum,i,sav;
    clrscr();
    do
    {
	printf("\n\nenter 1 for prime\nenter 2 for magic\nenter 3 to exit\nenter your choice:");
	scanf("%d",&ch);
	if(ch>=1 && ch<=2)
	{
	     printf("\nenter number:");
	     scanf("%d",&n);
	}
	switch(ch)
	{
	     case 1:
		    count=0;
		    for(i=1;i<=n;i++)
		    {
			if(n%i==0)
			{
			    count++;
			}
		    }
		    if(count==2)
		    {
			printf("\n\nthe number %d is prime",n);
		    }
		    else
		    {
			printf("\n\nthe number %d is not prime",n);
		    }
		    break;
	     case 2:
		    sav=n;
		    sum=0;
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
			printf("\n\nthe number %d is magic number",sav);
		    }
		    else
		    {
			printf("\n\nthe number %d is no magic number",sav);
		    }
		    break;
	     case 3:
		    printf("\nthank you!");
		    break;
	     default:
		    printf("\ninvalid choice!");
	}
    }while(ch!=3);
    getch();
}




















































































































