#include <stdio.h>
int main() {
    float units, amount, surcharge, total;
    scanf("%f", &units);
    if (units < 200)
        amount = units * 1.20;
    else if (units < 400)
        amount = units * 1.50;
    else if (units < 600)
        amount = units * 1.80;
    else
        amount = units * 2.00;
    if (amount > 400)
        surcharge = amount * 0.15;
    else
        surcharge = 100;
    total = amount + surcharge;
    printf("%.2f", total);
    return 0;
}
/*
Current Bill

Program Description
Write a program to calculate and print the Electricity bill of a given customer. Units consumed by the user should be taken from the keyboard and display the total amount to be paid by the customer. The charges are as follows
Unit Charge/unit
upto 199 @1.20
200 and above but less than 400 @1.50
400 and above but less than 600 @1.80
600 and above @2.00
If the bill exceeds Rs. 400 then a surcharge of 15% will be charged.
If the bill is less than Rs. 400 then a minimum surcharge amount should be Rs. 100/-. 

Input Format
A single line input containing, one integer.

Output Format
Display output according to the description.

Constraints
0<=input<=10000


Input-1
800


Output-1
1840.00
*/
