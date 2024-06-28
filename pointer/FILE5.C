#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *f1;
     int a;
     clrscr();
     f1=fopen("num.txt","r");
     while(1)
     {
	fscanf(f1,"%d",&a);
	if(feof(f1))
	{
		break;
	}
	printf("%d\n",a);
     }
     fclose(f1);
     printf("done!");
     getch();
}
