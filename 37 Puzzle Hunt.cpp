#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    if (N >= 6 && N <= 8)
        printf("Yes");
    else
        printf("No");
    return 0;
}
/*
Puzzle Hunt

Program Description
Ram and some of his friends are planning to participate in a puzzle hunt event.
The rules of the puzzle hunt state: "This hunt is intended for teams of 6 to 8 people."
Ram's team has N people in total.Are they eligible to participate?

Input Format
The first and only line of input contain a single integer N-the number of people present in Ram's team.

Output Format
Print Yes if Ram's team is eligible to participate, and No otherwise.

Constraints
1<=N<=10

Input-1
4

Output-1
No

Input-2
7

Output-2
Yes

Input-3
8

Output-3
Yes
*/
