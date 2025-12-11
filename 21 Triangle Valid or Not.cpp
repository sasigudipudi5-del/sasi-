#include <stdio.h>
int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid triangle");
    else
        printf("Invalid triangle");
    return 0;
}

/*
Triangle Valid or Not

Program Description
Write a Program that takes input as sides of a triangle and check whether the triangle is valid or not.
Hint:
A triangle is valid, if the sum of its two sides is greater than the third side. If three sides are a, b and c, then three conditions should be met.
1. a + b > c
2. a + c > b
3. b + c > a

Input Format
A single line contains three sides of a triangle a,b,c.

Output Format
Print the output according to the description.

Constraints
0<=a,b,c<=1000


Input-1
2 3 7


Output-1
Invalid triangle


Input-2
2 3 4


Output-2
Valid triangle
*/
