#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X >= 2 * Y)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Good Investment or Not

Program Description
Pavan has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum.
An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
Determine whether the investment made by Pavan is good or not.

Input Format
A single line of input contains two space separated integers X,Y. Here X is the interest rate, and Y is the current inflation rate respectively.

Output Format
Print the output YES if the investment is good, NO otherwise.

Constraints
0<=X,Y<=10000


Explaination
Testcase 1 :

The interest rate is 7 and the current inflation rate is 4. Since the interest rate is less than twice of current inflation rate, the investment is not good.


Input-1
7 4


Output-1
NO


Input-2
6 3


Output-2
YES
*/
