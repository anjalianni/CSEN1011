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

/* ALGORITHM
Step 1: Start
Step 2: Declare num,a, r1 , result
Step 3: Read num from User
Step 4: Initialize Variable result=0 and a=num
Step 5: Repeat Until num>=0
     5.1 sum=sum + cube of last digit i.e [(num%10)*(num%10)*(num%10)]
     5.2 num=num/10
Step 6: IF result==r1
        Print "Armstrong Number"
        ELSE 
        Print "Not Armstrong Number"
Step 7: Stop

LEARNINGS:
Learnt what a armstrong number is and the process*/