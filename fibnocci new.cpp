#include<stdio.h>
int main()
 {
 	  int num,i=0,next,first=0,second=1;
 	  printf("\n please enter the range num: ");
 	  scanf("%d",&num);
 	  while (i<num){
 	    if (i<=1){
 	      next=i; 
    }
   else{
	     next=first+second;
	     first+second;
	     second=next;}
         printf("%d\t",next);
	     i++;
	 }
return 0;
}

/*ALGORITHM: 
 1. Start
 2. Declare variables i, next,first , second
 3. Initialize the variables, i=0, second=1, and first =0
 4. Enter the number of terms of Fibonacci series to be printed
 5. Print First two terms of series
 6. Use loop for the following steps
    -> show=a+b
    -> a=b
    -> b=show
    -> increase value of i each time by 1
    -> print the value of show
 7. End  
 
 LEARNINGS : 

Learnt what a fibnocii series is and how to arrange them.*/


 
