#include <stdio.h>

int main() {
    int num1, num2;
    double avg;
    scanf("%d %d", &num1, &num2);
    avg = (num1 + num2) / 2.0;
    printf("Average of %d and %d is: %.2lf", num1, num2, avg);
    return 0;
}

/*
Average of Two Numbers

Program Description
You'll be given 2 integers num1 and num2, find the Average of those 2 integers.

Input Format
A single line input contains two numbers num1, num2.

Output Format
Display the average of two numbers in a single line with 2 decimal places.

Constraints
1<=num1,num2<=1000

Input-1
12 13

Output-1
Average of 12 and 13 is: 12.50

Input-2
26 31

Output-2
Average of 26 and 31 is: 28.50
*/
