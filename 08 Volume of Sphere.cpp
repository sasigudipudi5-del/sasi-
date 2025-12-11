#include<stdio.h>
int main() 
{
    int r;
    float v, b = 4.0/3.0, c = 3.14; 
    scanf("%d", &r); 
    v = b * c * r * r * r;
    printf("%.2f", v); 
    return 0;
}
/*
Volume of Sphere

Program Description
Given Radius of Sphere (R).Calculate volume of Sphere.

Input Format
A single line input contains an integer R(Radius of Sphere).

Output Format
Display the volume of Sphere.

Constraints
1<=R<=30

Input-1
2

Output-1
33.49

Input-2
5

Output-2
523.33

Input-3
5

Output-3
4186.66

Input-4
15

Output-4
14130.00
*/
