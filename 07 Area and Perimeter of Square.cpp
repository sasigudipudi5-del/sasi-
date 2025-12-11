#include <stdio.h>

int main() {
    int side, area, perimeter;
    scanf("%d", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("%d %d", area, perimeter);
    return 0;
}
/*
Area and Perimeter of Square

Program Description

Given side of the square.Calculate the Area and perimeter of a square.

Input Format:
A single line input contains one integer i.e Side of square

Output Format
Print Area and Perimeter of square.

Constraints
1<=Side<=20

Input-1
7

Output-1
49 28

Input-2
10

Output-2
100 40

Input-3
10

Output-3
16 16

Input-4
9

Output-4
81 36
*/
