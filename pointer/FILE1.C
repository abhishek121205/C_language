#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *f1;
     char a;
     clrscr();
     f1=fopen("hello.txt","r");
     while((a=getc(f1))!=EOF)
     {
	printf("%c",a);
     }
     printf("\ndone!\n");
     getch();
}