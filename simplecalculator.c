#include <stdio.h>
int main(){
    char ch;
    int a, b, result;
    
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);
    
    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

/*ALGORITHM:
1. Start of algorithm.

2. Take two numbers as input and store it inthe variables a and b.

3. Take an input to let the user choose the operation that needs to be performed.

4. If the user chooses addition, then perform a+b.

5. If the user chooses subtraction, then perform a-b.

6. If the user chooses multiplication, then perform a*b.

7. If the user chooses division, then perform a/b.

8. Print the value after carrying out the operation according to the user's choice.
9. End of algorithm.


OUTPUT:
Enter an operator(+,-,*,/): +
Enter two operands: 2 4
Result = 6 
 
 LEARNINGS: 
  learnt to write a simple calculator program using switch case */


