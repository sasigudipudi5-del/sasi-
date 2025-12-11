#include <stdio.h>
int main() 
{
    int X;
    scanf("%d", &X);

    if (X <= 10)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Masterchef Finals

Program Description
Teja has been working hard to compete in MasterChef. He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals.
Check whether Teja made it to the top 10 or not?

Input Format
A single line of input consists of one integer X — the current rank of Teja.

Output Format
output on a new line, YES, if Teja made it to the top 10 and NO otherwise.

Constraints
1<=X<=100


Input-1
15


Output-1
NO


Input-2
2


Output-2
YES
*/
