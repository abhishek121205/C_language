#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    clrscr();
    printf("enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
	for(j=n;j>i;j--)
	{
	     printf(" ");
	}
	for(j=1;j<=(2*i)-1;j++)
	{
	    if(j==1 || j==(2*i)-1)
	    {
		printf("*");
	    }
	    else
	    {
		printf(" ");
	    }
	}
	printf("\n");
    }
    for(i=n;i>=1;i--)
    {
	for(j=n;j>i;j--)
	{
	     printf(" ");
	}
	for(j=1;j<=(2*i)-1;j++)
	{
	    if(j==1 || j==(2*i)-1)
	    {
		printf("*");
	    }
	    else
	    {
		printf(" ");
	    }
	}
	printf("\n");
    }
    getch();
}