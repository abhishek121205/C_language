#include<stdio.h>
#include<conio.h>
#define S 9
void main()
{
     int i,src,rep,a[S],count=0;
     clrscr();
     for(i=0;i<S;i++)
     {
	 printf("enter ele:");
	 scanf("%d",&a[i]);
     }
     for(i=0;i<S;i++)
     {
	printf("\n%d ",a[i]);
     }
     printf("\nsearch ele:");
     scanf("%d",&src);
     for(i=0;i<S;i++)
     {
	if(src==a[i])
	{
	     count++;
	     printf("\n%d found at position %d",src,i+1);
	     printf("\nele to be replaced:");
	     scanf("\n%d",&rep);
	     a[i]=rep;
	}
     }
     if(count==0)
     {
	printf("\nele not found!\n\n");
     }
     else
     {
	 for(i=0;i<S;i++)
	 {
	    printf("\n%d",a[i]);
	 }
     }
     getch();
}