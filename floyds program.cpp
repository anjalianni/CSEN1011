#include<stdio.h>
int main()
{
	int no, i,j,x=1;
	
	printf("enter a no : ");
	scanf("%d",&no);
	for(i = 1; i<= no;i++)
	{ 
	for (j=1;j<=i; j++)
	{
		printf("%d ", x++);		
	}
	printf("\n");
}
}

/* ALGORITHM:
1.Start
2.Declare and initialize required variables for controlling loop, inputting number of rows and printing numbers.
3.Enter the number of rows to be printed.
4.Print the number in standard format utilizing the application of    loop as follows
         do for x=1 to n

         do for y=1 to n

         print number

         increase the number ans y by 1

          go to next line

5.Print triangle
LEARNINGS:
learnt c program of floyds triangle using for loop.*/