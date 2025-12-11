#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);
    if (num % 9 == 0)
        printf("True");
    else
        printf("False");
    return 0;
}
/*
Divisible with 9

Program Description
Write a Program to check whether the given number is divisible with 9 or not?

Input Format
A single line input containing one integer.

Output Format
Print the output according to the description.

Constraints
-10000<=INPUT<=10000


Input-1
991


Output-1
False


Input-2
999


Output-2
True
*/
