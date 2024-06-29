#include<stdio.h>
#include<conio.h>
# define S1 5
int f=-1,r=-1;
void insert(int[]);
void del();
void disp();
void main()
{
    int ch,q[S1];
    clrscr();
    do
    {
	printf("\nEnter 1 to insert: \nEnter 2 to delete: \nEnter 3 to display: \nEnter 4 to exit: \nEnter your choice:");
	scanf("%d",&ch);

	switch(ch)
	{
	     case 1:
		insert(q);
		break;
	     case 2:
		del(q);
		break;
	     case 3:
		disp(q);
		break;
	     case 4:
		printf("thanks!");
		break;
	     default:
		printf("invalid choice");
	}
    }
   while(ch!=4);
   getch();
 }
void insert(int q[])
 {
	int ele;
	printf("\nenter element:");
	scanf("%d",&ele);

	if(r==(S1-1))
	{
	     printf("\nstack is overflown\n");
	     return;
	}
	else if(r==-1)
	{
	    r=f=0;
	}
	else
	{
	    r++;
	}
	q[r]=ele;
 }
void del(int q[])
{
	if(r==-1)
	{
	     printf("\nstack is underflown\n");
	     return;
	}
	else if(r==f)
	{
	      r=f=-1;
	}
	else
	{
	     f++;
	}
}
void disp(int q[])
{
	int i;

	if(r==-1)
	{
	     printf("\nstack is empty\n");
	     return;
	}
	for(i=f;i<=r;i++)
	{
	    printf("%d  ",q[i]);
	}
}





