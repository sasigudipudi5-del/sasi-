#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T, CI;
    scanf("%lf %lf %lf", &P, &R, &T);
    CI = P * (pow((1 + R / 100), T)) - P;
    printf("%.2lf", CI);
    return 0;
}
/*
Compound Interest

Program Description
Given Principal (P) , Rate of Interest (R), and Time Period (T). Calculate the Compound Interest (CI).
Note 1: Assume that interest is compounded annully for only once.
Note 2: Adjust the result to 2 decimal places after point

Input Format
Single line input contains three space-separated integers P, R, T-Principal,Rate of Interest,Time Period respectively.

Output Format
Print the Compound Interest in decimal with 2 decimal places.

Constraints
1000<=P<=50000 1<=T<=5

Input-1
5400
8
3

Output-1
1402.45

Input-2
3000
6
2

Output-2
370.80
*/
