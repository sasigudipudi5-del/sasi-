#include <stdio.h>
#include <math.h>
int main() 
{
	int X, Y;
	double hypotenuse;
    scanf("%d %d", &X, &Y);
    hypotenuse = sqrt((X * X) + (YY));
    printf("%.21f", hypotenuse);
    return 0;
}
/*
Hypotenuse

Program Description
Find the Hypotenuse of a right angled triangle with two given sides X,Y.

Input Format
single line input containing, two separated integer values say X and Y.

Output Format
Print the hypotenuse of the right angled triangle. The result should be a double value with 2 decimal places.

Constraints
1<=X<=20 1<=Y<=20

Input-1
5 6 

Output-1
7.81

Input-2
3 4

Output-2
5.00
*/

