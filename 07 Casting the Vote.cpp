#include <stdio.h>
int main() 
{
    int X;
    scanf("%d", &X);
    if (X >= 18)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Casting the Vote

Program Description
Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

Input Format
A single input contains an integer X.

Output Format
Print the output as YES or NO.

Constraints
0<=X<=200


Input-1
17


Output-1
NO


Input-2
18


Output-2
YES
*/
