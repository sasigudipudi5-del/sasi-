#include <stdio.h>

int main() {
    int average, W1, W2, W3;
    scanf("%d %d %d", &average, &W1, &W2);
    W3 = (3 * average) - (W1 + W2);
    printf("%d", W3);
    return 0;
}
/*
Average Weight

Program Description
The average weight of a group of three boys is X kgs. The individual weights (in kgs) W1 (Boy1 ) and W2(Boy2) are given. Find the weight of the third boy.

Input Format
A single line input contains three integers Average, W1 and W2-Average,Weight of Boy1,Weight of Boy2 respectively.

Output Format
Print the weight of third boy.

Constraints
1<=Average,W1,W2<=100

Input-1
50 40 50

Output-1
60

Input-2
50 50 50

Output-2
50
*/
