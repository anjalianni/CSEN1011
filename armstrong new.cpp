#include<stdio.h>
int main()
{
	int num,a,r1,result=0;
	printf("enter a three digit num: ");
	scanf("%d",&num);
	a=num;
	while (a!=0)
{
	r1=a%10;
	result=r1+r1+r1;
	a/=10;
}
	if(result==num)
	printf("%dis an armstrong no",num);
	else printf("%d is not an armstrong num",num);
	return0;
}
