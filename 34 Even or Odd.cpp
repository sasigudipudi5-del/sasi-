#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
/*
Even or Odd

Program Description
Find out whether the given number is Even or Odd.

Input Format
A single line input containing one integer.

Output Format
Print the Output according to the description.

Constraints
-106<=X<=106


Input-1
6


Output-1
Even


Input-2
5


Output-2
Odd
*/
