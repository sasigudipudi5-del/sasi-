#include <stdio.h>

int main() {
    int X, Y, H, total;
    scanf("%d %d %d", &X, &Y, &H);

    if (H <= 1)
        total = X;
    else
        total = X + (H - 1) * Y;

    printf("%d", total);
    return 0;
}
/*
Parking Charges

Program Description
Priya needs to park her car while she watches a movie. The parking charges at the theater are as follows:
Rs. X for the first 1 hour
Rs. Y for every extra hour after the first hour
If Priya parks her car for H hours, what is the total parking charges that she should pay?

Input Format
The only line of the input will contain three space separated integers - X, Y, and H.

Output Format
Output a single integer, which should be the total amount that Priya pays as parking charge.

Constraints
1<=X<=100 1<=Y<=100 1<=H<=100

Input-1
10 1 5

Output-1
14

Input-2
1 10 100

Output-2
991
*/
