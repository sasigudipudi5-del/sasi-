#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if (x < 3)
        printf("LIGHT");
    else if (x >= 3 && x < 7)
        printf("MODERATE");
    else if (x >= 7)
        printf("HEAVY");
    return 0;
}
/*
Rain Fall

Program Description
In Andhra Pradesh, precipitation is measured using the rain in mm/hr.
Categories rainfall as:
LIGHT, If rainfall is less than 3 mm/hr.
MODERATE, If rainfall is greater than equal to 3 mm/hr and less than 7 mm/hr.
HEAVY, If rainfall is greater than equal to 7 mm/hr.
Given that rains at x mm/hr on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

Input Format
A single line input contains an integer x.

Output Format
Print the output caaording to description.

Constraints
-10000<=x<=10000


Input-1
7


Output-1
HEAVY


Input-2
1


Output-2
LIGHT


Input-3
1


Output-3
HEAVY


Input-4
3


Output-4
MODERATE
*/
