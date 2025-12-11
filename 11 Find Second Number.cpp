#include <stdio.h>

int main() {
    int X, Y, second;
    scanf("%d %d", &X, &Y);
    second = (2 * X) - Y;
    printf("%d", second);
    return 0;
}
/*
Find Second Number

Program Description
The average of two numbers is X. The first number is Y. Find the second number.

Input Format
Single line input, contains two space separated integer values X and Y-average of two numbers, First number respectively.

Output Format
Print the second number.

Constraints
1<=X,Y<=1000

Input-1
10
5

Output-1
15

Input-2
56
45

Output-2
67
*/
