#include<stdio.h>
#include<conio.h>
# define S1 3
int stack[S1],top=-1;
void push();
void pop();
void disp();
void main()
{
    int ch;
    clrscr();
    do
    {
	printf("\n\n1 to push: \n2 to pop: \n3 to display: \n4 to exit: \nenter your choice:");
	scanf("%d",&ch);

	switch(ch)
	{
	     case 1:
		push();
		break;
	     case 2:
		pop();
		break;
	     case 3:
		disp();
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
void push()
 {
	int ele;
	printf("\nenter element:");
	scanf("%d",&ele);

	if(top==(S1-1))
	{
	     printf("\nstack is overflown\n");
	}
	else
	{
	    top++;
	    stack[top]=ele;
	}
 }
void pop()
{
	if(top==-1)
	{
	     printf("\nstack is underflown\n");
	}
	else
	{
	     top--;
	}
}
void disp()
{
	int i;

	if(top==-1)
	{
	     printf("\nstack is empty\n");
	}
	for(i=top;i>=0;i--)
	{
	    printf("%d  ",stack[i]);
	}
}





