#include <stdio.h>
int main() {
    int X;
    scanf("%d", &X);
    if (X > 98)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Fever

Program Description
Pavan is not feeling well today.He measured his body temperature using a thermometer and it came out to be X °F.
A person is said to have fever if his body temperature is strictly greater than 98 °F.

Input Format
A single line of input contains an integer x.

Output Format
Print the output as YES or NO.

Constraints
0<=X<=500


Input-1
102


Output-1
YES


Input-2
100


Output-2
YES


Input-3
98


Output-3
NO


Input-4
96


Output-4
NO
*/
