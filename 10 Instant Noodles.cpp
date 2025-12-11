#include <stdio.h>

int main() 
{
    int X, Y, customers;
    scanf("%d %d", &X, &Y);
    customers = X * Y;
    printf("%d", customers);
    return 0;
}
/*
Instant Noodles

Program Description
Ravi has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook. 
Ravi's Restaurant has X stoves and only 1 packet can be cooked on a single stove at any minute.
How many customers can Ravi serve in Y minutes if each customer orders exactly 1 packet of noodles?

Input Format
A single line of input contains two space-separated integers X and Y minutes-the number of stoves and the number of minutes respectively.

Output Format
Print a single integer, the maximum number of customers Ravi can serve in Y minutes.

Constraints
1 = X, Y = 1000

Explaination
Test Case 1: Ravi cooks for Y = 7 minutes and can cook X = 3 packets per minute, one on each stove. So, the total number of packets that can be cooked is X · Y = 3 · 7 = 21.
Each person orders one packet, so the maximum number of customers that can be served is 21.
Test Case 2: Ravi cooks for Y = 8 minutes and can cook X = 7 packets per minute, one on each stove. So, the total number of packets that can be cooked is X · Y = 7 · 8 = 56.
Each person orders one packet, so the maximum number of customers that can be served is 56.

Input-1
3 7

Output-1
21

Input-2
7 8

Output-2
56
*/
