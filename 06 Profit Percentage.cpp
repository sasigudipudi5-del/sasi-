#include <stdio.h>

int main() {
    double CP, SP, profit, profitPercent;
    scanf("%lf %lf", &CP, &SP);
    profit = SP - CP;
    profitPercent = (profit / CP) * 100;
    printf("%.2lf", profitPercent);
    return 0;
}
/*
Profit Percentage

Program Description
Given Cost Price and Selling Price. Calculate the Profit Percentange.
Note: It's guaranteed that the test cases are designed in such way that you always get a Profit.

Input Format
A single line input contains two space separated integers CP = X, SP= Y.

Output Format
Print the profit Percentage. The result should be double value with 2 decimal places.

Constraints
1<=X,Y<=104 X

Input-1
500 1000

Output-1
100.00

Input-2
1500 2000

Output-2
33.33
*/
