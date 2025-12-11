#include <stdio.h>
int main() 
{
    float N, M, online_cost;
    scanf("%f %f", &N, &M);
    online_cost = N - (N * 0.10);
    if (online_cost < M)
        printf("ONLINE");
    else if (online_cost > M)
        printf("DINING");
    else
        printf("EITHER");
    return 0;
}
/*
Online or Offline

Program Description
Vijay is confused whether to go out and eat at the restaurant or order food online.
The online order costs N rupees while the cost of eating at the restaurant is M rupees. However, Vijay has a discount coupon with which he can avail flat 10% off on his online order.
Find the cheaper option for Vijay to eat, i.e., whether to order food online or eat at the restaurant.

Input Format
A Single line of input consists of two space-separated integers N and M, the cost of ordering online and eating at the restaurant respectively.

Output Format
output on a new line:

ONLINE, if Vijay gets a better deal in online ordering,
DINING, if Vijay gets a better deal in eating at the restaurant,
EITHER, if both deals cost the same.
Constraints
1<=N,M<=1000


Explaination
Test Case1: The final price of ordering online would be 500-(10% of 500)=450 which is less than the price of dining. Thus, Vijay should order online.


Input-1
500 500


Output-1
ONLINE


Input-2
500 400


Output-2
DINING
*/
