#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Sum:%d", num1 + num2);
    printf("Difference:%d", num1 - num2);
    printf("Product:%d", num1 * num2);
    printf("Quotient:%d", num1 / num2);
    printf("Remainder:%d", num1 % num2);
    return 0;
}
/*
Arithmetic Operations

Program Description
Perform all arithmetic operations on given two numbers num1,num2.

Input Format
Single line input contains two space-separated integers num1 and num2.

Output Format
Print the output of all Arithmetic Operations.

Constraints
1<=num1,num2<=1000 num1>num2


Input-1
10
3

Output-1
Sum:13
Difference:7
Product:30
Quotient:3
Remainder:1

Input-2
15
4

Output-2
Sum:19
Difference:11
Product:60
Quotient:3
Remainder:3
*/
