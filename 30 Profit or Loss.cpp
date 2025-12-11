#include <stdio.h>

int main() {
    int cost, selling;
    scanf("%d", &cost);
    scanf("%d", &selling);

    if (selling > cost)
        printf("Profit");
    else if (selling < cost)
        printf("Loss");
    else
        printf("No Profit and No Loss");

    return 0;
}
/*
Profit or Loss

Program Description
Write a program to calculate profit or loss on a transaction. Given that, the cost price and selling price of an item respectively.
Note: If cost price and selling price are equal then print "No Profit and No Loss".

Input Format
The first line of input contains cost price of an item.

The second line of input contains selling price of an item.

Output Format
Print the output according to the description.

Constraints
0<=selling price<=100000


0<=cost price<=100000


Input-1
400

300


Output-1
Loss


Input-2
500

700


Output-2
Profit
*/
