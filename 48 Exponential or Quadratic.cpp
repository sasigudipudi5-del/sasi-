#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    double exp_val = pow(2, n);
    double quad_val = (double)n * n;

    if (exp_val > quad_val)
        printf("Yes");
    else
        printf("No");

    return 0;
}
/*
Exponential or Quadratic

Program Description
Does 2 ^n > n^2 hold? 

Input Format
Input is given from Standard Input in the following format:

n

Output Format
If 2 ^n > n^2 , print Yes; otherwise, print No.

Constraints

n is an integer between 1 and 10^9 (inclusive).


Explaination
Explanation for Input 1 :

Since 2^5 =32, 5^2 =25, we have 2^n >n^2, so Yes should be printed.


Input-1
5


Output-1
Yes


Input-2
2


Output-2
No


Input-3
2


Output-3

*/
