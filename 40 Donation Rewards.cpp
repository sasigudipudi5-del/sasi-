#include <stdio.h>
int main() 
{
    int X;
    scanf("%d", &X);
    if (X <= 3)
        printf("BRONZE");
    else if (X <= 6)
        printf("SILVER");
    else
        printf("GOLD");
    return 0;
}
/*
Donation Rewards

Program Description
On the occasion of World Blood Donor Day, Ram has organized an event to reward regular blood donars in Aditya
If the donor has made less than or equal to 3 donations, they receive a BRONZE donor badge.
If the donor has made more than 3 but less than equal to 6 donations, they receive a SILVER donor badge.
If the donor has made more than 6 donations, they receive a GOLD donor badge.
Given that a person has made X donations, find the badge they receive.

Input Format
A single line of input contains an integer X-denoting the number of blood donations the person has made.

Output Format
Print the output as:

BRONZE, if the person has made less than or equal to 3 donations
SILVER, if the person has made more than 3 but less than equal to 6 donations
GOLD, if the person has made more than 6 donations.
Constraints
1<=x<=10


Input-1
1


Output-1
BRONZE


Input-2
5


Output-2
SILVER
*/
