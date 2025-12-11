#include <stdio.h>

int main() {
    int X, total;
    scanf("%d", &X);
    total = 4 * X;
    if (total <= 1000)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Tickets

Program Description
Four friends want to attend a concert.Each ticket costs X rupees.
They have decided to go to the concert if and and only if the total cost of the tickets does not exced 1000 rupees.
Determine whether they will be going to the concert or not.

Input Format
The first line of input contain a single integer X.

Output Format
Print the output YES if they will be going to the concert, NO otherwise.

Constraints
0<=X<=1000000


Input-1
100


Output-1
YES


Input-2
500


Output-2
NO
*/
