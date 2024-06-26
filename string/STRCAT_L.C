#include<stdio.h>
#include<conio.h>

void main()
{
    char x[100],y[100];
    int len1,len2,i;
    clrscr();

    puts("enter the string 1:");
    gets(x);
    puts("enter the string 2:");
    gets(y);

    for(len1=0;x[len1]!=NULL;len1++);
    for(len2=0;y[len2]!=NULL;len2++);
    for(i=0;i<=len2;i++)
    {
	x[len1+i]=y[i];
    }
    printf("%s",x);
    getch();
}