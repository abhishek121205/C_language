#include<stdio.h>
#include<conio.h>
#define S 3
void input(int [][S]);
void sort(int *);
void disp(int *);
void main()
{
     int a[S][S];
     clrscr();
     input(a);
     sort(&a[0][0]);
     disp(&a[0][0]);
     getch();
}

void input(int a[][S])
{
     int i,j;
     for(i=0;i<S;i++)
     {
	for(j=0;j<S;j++)
	{
	    printf("enter ele:");
	    scanf("%d",&a[i][j]);
	}
     }
}

void sort(int *p)
{
     int i,j,temp;
     for(i=0;i<(S*S-1);i++)
     {
	for(j=0;j<(S*S-1);j++)
	{
	    if(*(p+j)>*(p+j+1))
	    {
		temp=*(p+j);
		*(p+j)=*(p+j+1);
		*(p+j+1)=temp;
	    }
	}
     }
}

void disp(int *p)
{
     int i;
     for(i=0;i<(S*S);i++)
     {
	printf("%d\n",*(p+i));
     }
}