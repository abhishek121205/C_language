#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,choice;
  clrscr();


  do{
  printf("\nenter 1 to add\nenter 2 to subtract\nenter 3 to multiply\nenter 4 to divide\nenter 5 to exit\nenter your choice:");
  scanf("%d",&choice);
  if(choice>=1 && choice<=4)
  {
     printf("a:");
     scanf("%d",&a);
     printf("b:");
     scanf("%d",&b);
  }

  switch(choice)
  {
    case 1:
	   printf("%d + %d = %d",a,b,a+b);
	   break;
    case 2:
	   printf("%d - %d = %d",a,b,a-b);
	   break;
    case 3:
	   printf("%d x %d = %d",a,b,a*b);
	   break;
    case 4:
	   printf("%d / %d = %f",a,b,(float)a/b);
	   break;
    case 5:
	   printf("\nthanks");
	   break;
   default:
	   printf("\ninvalid value");

  }

  }
  while(choice!=5);

  getch();
}


