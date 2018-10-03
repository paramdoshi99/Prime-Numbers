#include<stdio.h>
#include<conio.h>
void prime(int n);
void prime(int n)
{
	int i,flag=0,j,count=0,s;
	printf("Press enter after each prime number is displayed\n");
	for(j=2;;j++)
	  {
	    for(i=1;i<=j;i++)
	    {
	      if(j%i==0)
	      {
		flag++;
	      }
	    }
	    if(flag==2)
	    {
		count++;
		printf("%d \n",j);
		getch();        //it is used to display prime number after pressing enter
		if(count==n)
		{
		   goto s;
		}
	    }
	    flag=0;
	  }

s:}
void main()
{
	int n,ch,s;
	clrscr();
	printf("1)Prime generator\n0)Exit\n");
s:	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter how many prime numbers you want");
		scanf("%d",&n);
		prime(n);
		goto s;
	case 0:
		printf("Thank You !!!");
	}
	getch();
}