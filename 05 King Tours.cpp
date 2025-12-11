#include <stdio.h>

int main() {
    int N, M, total;
    scanf("%d %d", &N, &M);
    total = (N * 5) + (M * 7);
    printf("%d", total);
    return 0;
}
/*
King Tours

Program Description
King loves to go on tours with his friends.
King has N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.

Input Format
The first and only line of each test case contains two space-separated integers N and M — the number of cars of 5-seaters and 7-seaters, respectively.

Output Format
Display maximum number of people that they can travel together.

Constraints
0 = N , M = 100

Explaination
Test case 1: King has 4 cars that seat 5 each and 8 cars that seat 7 each. So, 4 × 5 + 8 × 7 = 76 people can travel together.
Test case 2: King has 2 cars that seat 5 each and 13 cars that seat 7 each. So, 2 × 5 + 13 × 7 = 101 people can travel together.
Test case 3: King has 14 cars that seat 5 each and 5 cars that seat 7 each. So, 14 × 5 + 7 × 7 = 105 people can travel together.

Input-1
4 8

Output-1
76

Input-2
2 13

Output-2
101

Input-3

Output-3
105
*/
