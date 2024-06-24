#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{
  int i,a[size],max;
  clrscr();
  for(i=0;i<size;i++)
  {
    printf("enter the elements:");
    scanf("%d",&a[i]); //a[0]=10, a[1]=50, a[2]=20, a[3]=30, a[4]=40
  }
  max=a[0]; //a[0]=10=max
  for(i=0;i<size;i++)
  {
    if(a[i]>max)         //10>10, 50>10 , 20>50 , 30>50, 40>50


    {
      max=a[i];          //max=50
    }
  }
  printf("maximum value=%d",max);


  getch();
}