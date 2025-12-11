#include <stdio.h>

int main(void) 
{
    long long X, Y, R;
    if (scanf("%lld %lld %lld", &X, &Y, &R) != 3) return 0;
    long long extra = R / 30;          
    long long total = X + extra;        
    long long plates = (total + Y - 1) / Y; 

    printf("%lld
", plates);
    return 0;
}
/*
Endless Appetizers

Program Description
Life is a like a box of of mozzarella sticks. You never know what you're gonna get, but you can predict with 100 percent accuracy that it will be a mozzarella stick.
Aditya's colleague issued a challenge to Aditya: "If you eat more than X mozzarella sticks, I'll give you 30 rupees for each extra one you eat".
For example, if X=5 and Aditya eats 8 sticks, he would receive 90 rupees because he ate 3 extra sticks.
You know that the restaurant serves Y mozzarella sticks per plate.
You also know that Aditya received R rupees from his colleague as a result of the challenge.
What's the maximum number of plates of mozzarella sticks that Aditya could have ordered? Note: Aditya won't order a new plate till he finishes eating all the sticks from the previous one. However, it's possible that Aditya didn't finish all the sticks from the final plate he ordered.

Input Format
A single line of input, containing three space-separated integers X,Yand R — the lower limit on the number of sticks, the number of sticks on a single plate, and the money received by Aditya.

Output Format
Print the maximum number of plates Aditya could have ordered.

Constraints
1<=X<=100 1<=Y<=10 0<=R<=3.104 It is guaranteed that R is a multiple of 30.


Explaination
For input1: Aditya received 30 rupees i.e. he ate 1 extra stick.
Since X = 7, this means he must've eaten exactly 8 sticks. At 5 sticks per plate, Aditya would need 2 plates to eat 8 sticks (and two sticks from the second plate will remain uneaten).


Input-1
7 5 30


Output-1
2


Input-2
16 5 0


Output-2
4
*/
