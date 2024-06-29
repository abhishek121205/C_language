#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,count=0,i;
    clrscr();
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	if(n%i==0)
	{
	    sum=sum+i;
	    count++;
	}
    }
    if(count==2)
    {
	printf("the number %d is prime.",n);
    }
    else
    {
	printf("the number %d is not prime.",n);
    }
    getch();
}