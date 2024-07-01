#include<stdio.h>
#include<conio.h>
#define S 3
void input(int [][S],int []);
void sort(int []);
void disp(int [][S],int []);
void main()
{
     int a[S][S],b[S*S];
     clrscr();

     input(a,b);
     sort(b);
     disp(a,b);
     getch();
}

void input(int a[][S],int b[])
{
     int i,j,id=0;
     for(i=0;i<S;i++)
     {
	 for(j=0;j<S;j++)
	 {
	    printf("enter ele:");
	    scanf("%d",&a[i][j]);
	    b[id++]=a[i][j];
	 }
     }
}
void sort(int b[])
{
     int i,j,temp;
     printf("display\n");
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
}

void disp(int a[][S],int b[])
{
     int i,j,id=0;
     for(i=0;i<S;i++)
     {
	 for(j=0;j<S;j++)
	 {
	     a[i][j]=b[id++];
	     printf("%d ",a[i][j]);
	 }
	 printf("\n");
     }
}
