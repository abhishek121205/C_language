#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *f1,*f2,*f3;
     int a;
     clrscr();
     f1=fopen("num.txt","r");
     f2=fopen("even.txt","w");
     f3=fopen("odd.txt","w");
     while(1)
     {
	fscanf(f1,"%d",&a);
	if(feof(f1))
	{
		break;
	}
	if(a%2==0)
	{
	   fprintf(f2,"%d\n",a);
	}
	else if(a%2==1)
	{
	    fprintf(f3,"%d\n",a);
	}
     }
     fclose(f1);
     fclose(f2);
     printf("done!");
     getch();
}
