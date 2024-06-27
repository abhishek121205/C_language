#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char x[100],y[100],z[100];
    int len;
    clrscr();
    printf("enter string 1:");
    gets(x);
    printf("enter string 2:");
    gets(y);
    printf("enter string 3:");
    gets(z);
    strupr(x);
    printf("\n1.string 1 in uppercase:%s",x);
    strlwr(y);
    printf("\n2.string 2 in lowercase:%s",y);
    len=strlen(x);
    printf("\n3.string 1 length:%d",len);
    strcat(x,y);
    printf("\n4.string 1 concatenate:%s",x);
    strcpy(y,z);
    printf("\n6.string 3 copied in 2:%s",y);
    strrev(x);
    printf("\n5.string 1 in reverse:%s",x);
    getch();
}