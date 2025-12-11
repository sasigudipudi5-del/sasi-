#include <stdio.h>

int main() {
    long long N, M, requiredVotes;
    scanf("%lld %lld", &N, &M);
    requiredVotes = (M / 2) + 1;
    printf("%lld", requiredVotes);
    return 0;
}
/*
Gymkhana Election IIIT-A

Program Description
In the Gymkhana elections of IIIT-A, N members are nominated for senator positions. The total number of voters in the college is M.
Om, one of the N nominees, wants to secure a strict majority win in the election.
Assuming all voters cast their votes, find the minimum number of votes Om requires to ensure a strict majority win.
Note that in a strict majority win, all the nominees have strictly lesser votes than the winner.

Input Format
A single line of input consists of two space-separated integers N and M — the number of nominated members and the number of voters respectively.

Output Format
Output the minimum number of votes Om requires to ensure a strict majority win.

Constraints
2<=N<=M<=109

Input-1
5 12

Output-1
7

Input-2
4 5

Output-2
3
*/
