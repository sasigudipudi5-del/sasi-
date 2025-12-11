#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double s, area;
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    if (a + b > c && a + c > b && b + c > a)
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    else
        area = 0.0;
    printf("%.4lf", area);
    return 0;
}
/*
Heron's Formula

Program Description
Find the area of Triangle using Heron's formula.
Hint:Heron's Formula= sqrt(s*(s-a)*(s-b)*(s-c).where a,b,c are sides.

Input Format
Only line input contains three integers a,b,c.

Output Format
Print area of triangle. The result should be decimal value with 4 decimal places.

Constraints
1<=a,b,c<=50


Explaination

Input-1
5 8 6


Output-1
14.9812


Input-2
2 3 5


Output-2
0.0000*/
