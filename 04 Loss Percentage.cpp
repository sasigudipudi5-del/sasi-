#include <stdio.h>

int main() {
    double CP, SP, loss, lossPercent;
    scanf("%lf %lf", &CP, &SP);
    loss = CP - SP;
    lossPercent = (loss / CP) * 100;
    printf("%.2lf", lossPercent);
    return 0;
}
/*Loss Percentage

Program Description
Find the loss percentage with given Cost Price and Selling Price
Note: It's guaranteed that the test cases are designed in such way that you always get a loss.

Input Format
A single line input contains two space-separated integers CP = X, SP = Y.

Output Format
Print the Loss percentage value in double with 2 decimal places.

Constraints
1

Input-1
1000 500

Output-1
50.00

Input-2
3000 2000

Output-2
33.33

Input-3
3000 2000

Output-3
92.50

Input-4

Output-4
*/
