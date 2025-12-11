#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("%d", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d", num2);
    else
        printf("%d", num3);
    return 0;
}
/*
Largest Among 3 Numbers

Program Description
Write a Program to find the largest number among three numbers.

Input Format
A single line contains three numbers Num1,Num2, Num3.

Output Format
Display output according to the description.

Constraints
-100000<=num1,num2,num3<=100000


Input-1
456 678 23


Output-1
678


Input-2
2 3 4


Output-2
4
*/
