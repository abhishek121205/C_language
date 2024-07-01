#include<stdio.h>
#include<conio.h>
#include<string.h>
void input(char [][100]);
void sort(char [][100],char []);
void disp(char[][100]);
void main()
{
    char a[6][100],temp[100];
    clrscr();
    input(a);
    sort(a,temp);
    disp(a);
    getch();
}
void input(char a[][100])
{
    int i;
    for(i=0;i<6;i++)
    {
	printf("enter string %d: ",i+1);
	gets(a[i]);
    }
}
void sort(char a[][100],char temp[])
{
    int i,j;
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
}
void disp(char a[][100])
{
    int i;
    for(i=0;i<6;i++)
    {
	printf("\n%s",a[i]);
    }
}
