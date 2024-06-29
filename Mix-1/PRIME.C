#include<stdio.h>
#include<conio.h>
void main()
{

    int i,num,count=0;
    clrscr();

    printf("enter the value:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
      {
	 if(num%i==0)
	   {
	     count++;
	   }

      }

      if(count==2)
	{
	  printf("prime number");
	}

	else{
	  printf("not prime");
      }




    getch();
}