#include<stdio.h>
#include<conio.h>
void main()
{
    int a,d;
    float b;
    char c;
    clrscr();
    printf("enter the integer:");
    scanf("%d",&a);
    b=(float)a;
    printf("\nint to float: %f",b);
    printf("\n\nenter the character:");
    flushall();
    scanf("%c",&c);
    d=(int)c;
    printf("\n\nchar to int: %d",d);
    getch();
}