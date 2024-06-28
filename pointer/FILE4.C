#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *f1,*f2;
     char a;
     clrscr();
     f1=fopen("file4.c","r");
     f2=fopen("world.txt","w");
     while((a=getc(f1))!=EOF)
     {
      if(a>='A' && a<='Z')
	{
	    a=a+32;
	}
	else if(a>='a' && a<='z')
	{
	    a=a-32;
	}
	putc(a,f2);
      //	printf("%c",a);
     }
     fclose(f1);
     fclose(f2);
     printf("\ndone!\n");
     getch();
}