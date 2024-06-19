#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum,product,diff;
    float division;
    clrscr();

    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    sum=a+b;
    product=a*b;
    division=(float)a/b;
    if(b>a)
    {
	diff=b-a;
    }
    else
    {
	diff=a-b;
    }
    printf("\naddition: %d\nmultiplication: %d\ndivision: %f\nsubtraction: %d",sum,product,division,diff);
    getch();
}