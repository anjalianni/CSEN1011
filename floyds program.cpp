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
