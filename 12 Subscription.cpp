#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if (X > 40)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Subscription

Program Description
Pavan Wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes.The meeting paltform supports a meeting of 40 minutes without subscription and a meeting of unlimited duration with subscription. Determine whether Pavan need to take a subscription or not for setting the meet.

Input Format
A single line of input contains X integer.

Output Format
Print the output according to the description.

Constraints
0<=X<=10000


Input-1
70


Output-1
YES


Input-2
50


Output-2
YES


Input-3
50


Output-3
NO


Input-4
35


Output-4
NO
*/
