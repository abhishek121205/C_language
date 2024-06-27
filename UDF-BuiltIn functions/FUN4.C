#include<stdio.h>
#include<conio.h>
# define S1 10

void sort(int[]);
void input(int[]);
void main()
{
    int a[S1];
    clrscr();
    input(a);
    sort(a);
    getch();

}
void input(int l[S1])
{
    int i;
    for(i=0;i<S1;i++)
    {
	printf("a[%d]",i);
	scanf("%d",&l[i]);
    }
}

void sort(int s[S1])
{
    int i,j,temp;
    for(i=0;i<S1-1;i++)
    {
	for(j=0;j<S1-1;j++)
	{
	    if(s[j]>s[j+1])
	    {
		temp=s[j];
		s[j]=s[j+1];
		s[j+1]=temp;
	    }
	}
    }
    printf("\nsorted elements\n");
    for(i=0;i<S1;i++)
    {
	printf("%d ",s[i]);
    }
}

