#include<stdio.h>
#include<conio.h>
//calculate sum of even numbers
void main(){

     int i,n,num,sum=0; //declaring variables
     clrscr();
     printf("enter positive integer:");
     scanf("%d",&n);        //taking input from user

     if(n<0) //	validate input
     {
	printf("\nwrong value\n"); //exiting with wrong value
     }

     else
     {
	for(i=2;i<=n;i++)    //calculating sum of even numbers
	{
	    num=i%2;
	    if(num==0)
	    {
		sum=sum+i;
	    }
	}
	printf("\n%d",sum); //printing result
     }
     getch();
}