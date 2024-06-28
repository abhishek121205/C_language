#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *f1,*f2,*f3;
    int prono,qut,uqut,flag=0;
    char pronm[100],upronm[100],phno[100],x;
    float prc,total;
    clrscr();

    f1=fopen("stock.txt","r");
    f2=fopen("bil.txt","a");
    f3=fopen("temp.txt","w");
    printf("enter the product to be searched:");
    gets(upronm);
    while(1)
    {
	fscanf(f1,"%d",&prono);
	if(feof(f1))
	{
	     break;
	}
	fscanf(f1,"%s",&pronm);
	fscanf(f1,"%d",&qut);
	fscanf(f1,"%f",&prc);

	if(strcmpi(pronm,upronm)==0)
	{
	      flag=1;
	      printf("\nproduct found\nenter the quantity to be purchased:");
	      scanf("%d",&uqut);
	      if(uqut<=qut)
	      {
		   flag=2;
		   puts("enter phone no.:");
		   flushall();
		   gets(phno);
		   total=uqut*prc;
		   fprintf(f2,"\ncustomer's phone no.:%s",phno);
		   fprintf(f2,"\nproduct name:%s",pronm);
		   fprintf(f2,"\nqantity:%d",uqut);
		   fprintf(f2,"\ntotal bill:%f",total);
		   qut=qut-uqut;
	      }
	      else
	      {
		   printf("\nquantity not available");
	      }
	}
	fprintf(f3,"\n%d\n%s\n%d\n%f",prono,pronm,qut,prc);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    if(flag==0)
    {
	printf("\nwe don't sell this product");
    }
    else if(flag==2)
    {
	f1=fopen("temp.txt","r");
	f2=fopen("stock.txt","w");
	while((x=getc(f1))!=EOF)
	{
	     putc(x,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("\ndone!");
    }
    getch();
}
