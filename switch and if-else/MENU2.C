#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,choose;
    clrscr();


    do{
    printf("\npress 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\nenter 5 to exit \nenter your choice:");
    scanf("%d",&choose);

    if(choose>=1 && choose<=4)
    {
       printf("a:");
       scanf("%d",&a);
       printf("b:");
       scanf("%d",&b);
    }

    if(choose==1)
    {
      printf("%d + %d = %d",a,b,a+b);
    }

    else if(choose==2)
    {
      printf("%d - %d = %d",a,b,a-b);
    }

    else if(choose==3)
    {
      printf("%d x %d = %d",a,b,a*b);
    }

   else if(choose==4)
    {
      printf("%d % %d = %d",a,b,a/b);
    }

    else if(choose==5)
    {
       printf("\nthanks");
    }

    else
    {
      printf("\ninvalid value");
    }

    }
    while(choose!=5);

    getch();
}