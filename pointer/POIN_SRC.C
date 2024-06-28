#include<stdio.h>
#include<conio.h>
void search(char *,char *);
void main()
{
    char a[100],sr;
    clrscr();
    puts("enter string:");
    gets(a);
    puts("enter ch to be searched");
    scanf("%c",&sr);
    search(&a[0],&sr);
    getch();
}
void search(char *p,char *q)
{
    int i,c=0;
    for(i=0;*(p+i)!=NULL;i++)
    {
	if(*(p+i)==*q)
	{
	    c++;
	    printf("%c is found at %d\n",*q,i+1);
	}
    }
    if(c==0)
    {
	printf("not found!");
    }
}
