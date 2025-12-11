#include <stdio.h>

int main() {
    int A, B, attacks;
    scanf("%d %d", &A, &B);
    attacks = B / A;
    printf("%d", attacks);
    return 0;
}
/*
Required Points

Program Description
Pavan Playing a mobile game. In the game Pavan's character is "Unstoppable force" that means he can perform special attack.
However for each special attack it costs A points to "Unstoppable force". If Pavan currently has B points,determine the number of special attacks he performed.

Input Format
A single line of input contains two space separated integers A,B.

Output Format
Print the number of special attacks he performed while playing the game.

Constraints
1<=A,B<=1000

Input-1
10 40

Output-1
4

Input-2
50 2

Output-2
0

Input-3
6 41

Output-3
6

Input-4
7 50

Output-4
7
*/
