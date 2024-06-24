#include<stdio.h>
#include<conio.h>
#define S 3
void main()
{
     int i,j,a[S][S],b[S*S],temp,id=0;
     clrscr();

     for(i=0;i<S;i++)
     {
	 for(j=0;j<S;j++)
	 {
	    printf("enter ele:");
	    scanf("%d",&a[i][j]);
	    b[id++]=a[i][j];
	 }
     }
     printf("\ndisplay\n");
     for(i=0;i<S*S;i++)
     {
	 for(j=0;j<S*S;j++)
	 {
	    if(b[j]>b[j+1])
	    {
		temp=b[j];
		b[j]=b[j+1];
		b[j+1]=temp;
	    }
	 }
     }
     id=0;
     for(i=0;i<S;i++)
     {
	 for(j=0;j<S;j++)
	 {
	     a[i][j]=b[id++];
	     printf("%5d",a[i][j]);
	 }
	 printf("\n");
     }
     getch();
}