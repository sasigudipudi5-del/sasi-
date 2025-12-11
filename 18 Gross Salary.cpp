#include <stdio.h>

int main() {
    float basic, DA, HRA, gross;
    scanf("%f", &basic);

    if (basic <= 10000) {
        DA = 0.80 * basic;
        HRA = 0.20 * basic;
    }
    else if (basic <= 20000) {
        DA = 0.90 * basic;
        HRA = 0.25 * basic;
    }
    else {
        DA = 0.95 * basic;
        HRA = 0.30 * basic;
    }

    gross = basic + DA + HRA;
    printf("%.2f", gross);

    return 0;
}
/*
Description

Gross Salary
Program Description
Given basic salary of an employee as input and calculate its gross salary according to following.
Basic Salary <=10000 ==> DA = 80% & HRA = 20%
Basic Salary <=20000 ==> DA = 90% & HRA = 25%
Basic Salary >20000 ==> DA = 95% & HRA = 30%
Gross Salary = Basic Salary + DA + HRA
Note: Display the gross salary in a single line with 2 decimal places after point.

Input Format
Single line input containing, one integer value.

Output Format
Print output according the description.

Constraints
0<=basic_salary<=100000


Input-1
22000


Output-1
49500.00


Input-2
8500


Output-2
17000.00
*/
