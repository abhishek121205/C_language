#include<stdio.h>
#include<conio.h>
#define S 3
void main()
{
     int i,j,a[S][S],temp;
     int *p;
     clrscr();
     p=&a[0][0];
     for(i=0;i<S;i++)
     {
	for(j=0;j<S;j++)
	{
	    printf("enter ele:");
	    scanf("%d",&a[i][j]);
	}
     }

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

     for(i=0;i<(S*S);i++)
     {
	printf("%d\n",*(p+i));
     }
     getch();
}