#include <stdio.h>
int main() 
{
    int A;
    scanf("%d", &A);
    if (A % 2 == 0 && A % 7 == 0)
        printf("Alice");
    else if (A % 2 != 0 && A % 9 == 0)
        printf("Bob");
    else
        printf("Charlie");
    return 0;
}
/*
Favourite Numbers

Program Description
Alice likes numbers which are even, and are a multiple of 7.
Bob likes numbers which are odd, and are a multiple of 9.
Alice, Bob, and Charlie find a number A.
If Alice likes A, Alice takes home the number.
If Bob likes A, Bob takes home the number.
If both Alice and Bob don't like the number, Charlie takes it home.
Given A, find who takes it home.
Note: You can prove that there is no integer A such that both Alice and Bob like it.

Input Format
A single line of input contains an integer A

Output Format
output on a new line who takes the number home - "Alice", "Bob", or "Charlie".

Constraints
1<=A<=1000


Input-1
7


Output-1
Charlie


Input-2
14


Output-2
Alice
*/
