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


 
