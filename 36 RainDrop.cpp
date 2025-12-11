#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int printed = 0;
    if (N % 3 == 0) {
        printf("Pling");
        printed = 1;
    }
    if (N % 5 == 0) {
        printf("Plang");
        printed = 1;
    }
    if (N % 7 == 0) {
        printf("Plong");
        printed = 1;
    }
    if (!printed)
        printf("%d", N);

    return 0;
}
/*
RainDrop

Program Description
Your task is to convert a number into a string that contains raindrop sounds corresponding to certain potential factors. A factor is a number that evenly divides into another number, leaving no remainder.
The rules of raindrops are that if a given number:
has 3 as a factor, add 'Pling' to the result.
has 5 as a factor, add 'Plang' to the result.
has 7 as a factor, add 'Plong' to the result.
does not have any of 3, 5, or 7 as a factor, the result should be the digits of the number.

Input Format
Single line containing an integer N

Output Format
Based on the given rules of raindrop print result.

Constraints
-10000<=INPUT<=10000


Explaination
Testcase 1 :

28 has 7 as a factor, but not 3 or 5, so the result would be "Plong".

Testcase 2:

30 has both 3 and 5 as factors, but not 7, so the result would be "PlingPlang".

Testcase 3:

34 is not factored by 3, 5, or 7, so the result would be "34".


Input-1
28


Output-1
Plong


Input-2
34


Output-2
34


Input-3
30


Output-3
PlingPlang
*/
