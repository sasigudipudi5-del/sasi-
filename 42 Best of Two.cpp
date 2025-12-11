#include <stdio.h>
int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);
    int a_high1, a_high2, b_high1, b_high2;
    if (A1 >= A2 && A1 >= A3) 
    {
        a_high1 = A1;
        a_high2 = (A2 >= A3) ? A2 : A3;
    } else if (A2 >= A1 && A2 >= A3) 
    {
        a_high1 = A2;
        a_high2 = (A1 >= A3) ? A1 : A3;
    } 
    else 
    {
        a_high1 = A3;
        a_high2 = (A1 >= A2) ? A1 : A2;
    }
    if (B1 >= B2 && B1 >= B3) 
    {
        b_high1 = B1;
        b_high2 = (B2 >= B3) ? B2 : B3;
    } 
    else if (B2 >= B1 && B2 >= B3) 
    {
        b_high1 = B2;
        b_high2 = (B1 >= B3) ? B1 : B3;
    } 
    else 
    {
        b_high1 = B3;
        b_high2 = (B1 >= B2) ? B1 : B2;
    }

    int alice_score = a_high1 + a_high2;
    int bob_score = b_high1 + b_high2;

    if (alice_score > bob_score)
        printf("Alice");
    else if (bob_score > alice_score)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}
/*
Best of Two

Program Description
Alice and Bob are playing a game. Each player rolls a regular six faced dice 3 times.
The score of a player is the sum of the values of the highest 2 rolls. The player with the highest score wins, and the game ends in a Tie if both players have the same score.
Find the winner of the game or determine whether it is a tie.

Input Format
A single line of input contains six space-separated integers A1, A2, A3, B1, B2 and B3 — the values Alice gets in her 3 dice rolls, followed by the values which Bob gets in his 3 dice rolls.

Output Format
Output on a new line Alice if Alice wins, Bob if Bob wins and Tie in case of a tie.

Constraints
1<=A1,A2,A3,B1,B2,B3<=6


Input-1
3 2 5 6 1 1


Output-1
Alice


Input-2
4 4 5 6 4 1


Output-2
Bob
*/
