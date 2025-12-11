#include <stdio.h>
int main()
 {
    int X1, Y1, X2, Y2, cost1, cost2;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    cost1 = X1 + Y1;
    cost2 = X2 + Y2;
    if (cost1 < cost2)
        printf("%d", cost1);
    else
        printf("%d", cost2);
    return 0;
}
/*
Interior Design

Program Description
Pavan decided to redecorate his house,and now needs to decide between two different styles of interior design.
For first style,tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
For the second style,tiling the floor will cost X2 rupees and painting the wallls will cost Y2 rupees.
Pavan will choose whichever style has the lower total cost. How much will Pavan pay for his interior design?

Input Format
A single line of input containing four space- separated integers X1,Y1,X2,Y2.

Output Format
Print the output according to the description.

Constraints
0<=X1,Y1,X2,Y2<=100000


Input-1
100 43 85 61


Output-1
143


Input-2
10 20 9 25


Output-2
30


Input-3
10 20 9 25

Input 2:
10 20 9 20

Output 2:
29

Input 3:
10 20 20 10

Output 3:
30 


Output-3
29


Input-4
10 20 20 10


Output-4
30
*/
