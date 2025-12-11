#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    if (X * 2 >= N)
        printf("YES");
    else
        printf("NO");

    return 0;
}
/*
Parliament

Program Description
An important resolution is being discussed in the Parliament. There are N members present in the Parliament out of which X members voted in favour of the resolution and the remaining voted against it.
According to the constitution, a resolution is passed if and only if half or more than half of the members present in the Parliament vote in favour of the resolution.
Determine if the resolution is passed or not.

Input Format
A single line input contains two space-separated integers N and X — the total number of members present in the Parliament and the number of members who voted in favour of the resolution.

Output Format
Output YES if the resolution is passed. Otherwise, output NO.

Constraints
1<=N<=100 0<=X<=N


Input-1
12 6


Output-1
YES


Input-2
9 4


Output-2
NO
*/
