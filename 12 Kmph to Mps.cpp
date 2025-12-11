#include <stdio.h>

int main() {
    double kmph, mps;
    scanf("%lf", &kmph);
    mps = kmph * (1000.0 / 3600.0);
    printf("%.2lf", mps);
    return 0;
}
/*
Kmph to Mps

Program Description
Convert the Speed kilometer per hour to meter per second.

Input Format
Single line input, contains one integer value Speed (kilometers).

Output Format
Print the speed in meter per second. The result should be decimal value with 2 decimal places.

Constraints
1<=Speed<=10000

Input-1
123

Output-1
34.17

Input-2
18

Output-2
5.00
*/
