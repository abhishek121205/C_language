#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[6][100],temp[100];
    int i,j;
    clrscr();

    for(i=0;i<6;i++)
    {
	printf("enter string %d: ",i+1);
	gets(a[i]);
    }

    for(i=0;i<5;i++)
    {
	for(j=0;j<5;j++)
	{
	    if(strcmp(a[j],a[j+1])>0)
	    {
		strcpy(temp,a[j]);
		strcpy(a[j],a[j+1]);
		strcpy(a[j+1],temp);
	    }
	}
    }

    for(i=0;i<6;i++)
    {
	printf("\n%s",a[i]);
    }
    getch();
 }