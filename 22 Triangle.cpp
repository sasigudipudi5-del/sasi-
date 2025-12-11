#include <stdio.h>
int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b || a == c || b == c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
    return 0;
}
/*
Triangle

Program Description
Write a program to check whether a triangle is Equilateral, Isosceles or Scalene.
1. A triangle is said to be Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c
2. A triangle is said to be Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.
3. A triangle is said to be Scalene Triangle, if none of its sides are equal.
Input Format

A single line contains three sides of a Triangle S1, S2, S3.

Output Format
Display the output according to the description.

Constraints
0<=a,bc<=1000


Input-1
13 9 8


Output-1
Scalene triangle


Input-2
10 10 10


Output-2
Equilateral triangle


Input-3
10 10 10


Output-3
Isosceles triangle
*/
