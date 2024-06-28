#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f1,*f2;
    char a;
    clrscr();
    f1=fopen("main.txt","r");
    f2=fopen("demo.txt","w");
    while((a=getc(f1))!=EOF)
    {
	putc(a,f2);
    }
    fclose(f1);
    fclose(f2);
    printf("\ndone");
    getch();
}