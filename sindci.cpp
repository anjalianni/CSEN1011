#include<stdio.h>
int main()
{ 
int p,t,r,si,ci;
p=t=r=100;
si=p*t*r/100;
printf("simple interest:%d\n",si);
ci=(p*(1+r/100)*t)-1;
printf("compound interest:%d\n",ci);
}

OUTPUT:
simple interest : 10000
compund interest : 19999

  ALGORITHM:
Step 1:Start
Step 2:read principal amount, rate and time
Step 3:Calculate simple Interest using formula SI= ((amount*rate*time)/100)
Step 4:print simple interest
Step 5:Calculate compound interest using formula CI=((1+rate/100*time)-1)
Step 6:print compound interest 
step 7:Stop 

LEARNINGS: 
learnt how to solve simple interest and compund interest
 
