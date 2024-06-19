#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch;
    clrscr();
    do
    {
       printf("\nenter 1 to add\nenter 2 to sub\nenter 3 to multiply\nenter 4 to divide\nenter 5 to exit \nenter your choice:");
       scanf("%d",&ch);
       if(ch>=1 && ch<=4)
       {
	  printf("enter a:");
	  scanf("%d",&a);
	  printf("enter b:");
	  scanf("%d",&b);
       }
       switch(ch)
       {
	  case 1:
		printf("\n%d + %d = %d",a,b,a+b);
		break;
	  case 2:
		printf("\n%d - %d = %d",a,b,a-b);
		break;
	  case 3:
		printf("\n%d x %d = %d",a,b,a*b);
		break;
	  case 4:
		printf("\n%d / %d = %f",a,b,((float)a/b));
		break;
	  case 5:
		printf("\nthank you!");
		break;
	  default:
		printf("\ninalid value!");
       }

    }while(ch!=5);
    getch();
}