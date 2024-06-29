#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b,c,sum;
    clrscr();

    b=a++;
    c=++a;
    sum=a+b+c;
    printf("a:%d,b:%d,c:%d",a,b,c);
    printf("\nsum:%d",sum);
    getch();
}