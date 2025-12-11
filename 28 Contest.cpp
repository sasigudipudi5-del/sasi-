#include <stdio.h>

int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    int score = (A * 1) + (B * 2);

    if (score >= X)
        printf("Qualify");
    else
        printf("Not Qualify");

    return 0;
}
/*
Contest:

Program Description
In a coding contest, there are two types of problems:
Easy problems, which are worth 1 point each
Hard problems, which are worth 2 points each
To qualify for the next round, a contestant must score at least X points. Professor solved A Easy problems and B Hard problems. Will Professor qualify or not?

Input Format
A single line input containing three space-separated integers. as follows :

X denotes qualify points.
A denotes number of easy problems solved by the Professor.
B denotes number of hard problems solved by the Professor.
Output Format
Print the output whether Professor Qualified or not .

Constraints
0<=X,A,B<=10000


Input-1
5 3 0


Output-1
Not Qualify


Input-2
15 9 3


Output-2
Qualify
*/
