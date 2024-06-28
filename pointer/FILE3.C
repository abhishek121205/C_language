#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *f1;
     char a;
     clrscr();
     f1=fopen("hello.txt","a");
     while((a=getchar())!=EOF)
     {
	putc(a,f1);
     }
     fclose(f1);
     printf("\ndone!\n");
     getch();
}