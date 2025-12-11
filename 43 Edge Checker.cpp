#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (abs(a - b) == 1 || (a == 1 && b == 10) || (a == 10 && b == 1))
        printf("Yes");
    else
        printf("No");

    return 0;
}
/*
Edge Checker

Program Description
In the figure shown in the image below, are the points numbered a and b directly connected by a line segment? 
undefined
Input Format

Input is given from Standard Input in the following format:

a b

Output Format
If the points numbered a and b are directly connected by a line segment, print Yes; otherwise, print No.
The judge is case-sensitive: be sure to print uppercase and lowercase letters correctly.

Constraints

1=a

a and b are integers.


Explaination
Explanation for Sample Input 1 :

In the figure shown in the Problem Statement, the points numbered 4 and 5 are directly connected by a line segment.
Thus, Yes should be printed.

Explanation for Sample Input 2 :

In the figure shown in the Problem Statement, the points numbered 3 and 5 are not directly connected by a line segment.
Thus, No should be printed.


Input-1
4 5


Output-1
Yes


Input-2
3 5


Output-2
No


Input-3
1 10


Output-3
Yes
*/
