#include<stdio.h>
int main()
{
int rows, coef = 1, space, i, j;
printf("\nEnter the number of rows : ");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j;

printf("%4d", coef);
}
printf("\n\n");
}

return 0;
}

ALGORITHM:

1. Start
2. Declare variables x, y, n, a, z, s
3. Enter the limit
4. Initialize the value of variables, s=n , x=0, y=0 , z=s
5. Do the following operations in loop
  1. x = 0 to n
  2. a= 1, x++
  3. z=s to 0
  4. print space
  5. z—-
  6. y = o to x
  7. print a
  8. a = a*(x-y)/(y+1)
  9. y= y+1
 10. go to next line
6. Repeat the process to n
7. Print the final required triangle
8. Stop

LEARNINGS:
   learnt what a pascles triangle is and how it works 
