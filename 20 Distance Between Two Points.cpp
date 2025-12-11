#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2;
    float distance;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2); 
    distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("%.4f
", distance); 
    return 0;
}
/*
Distance Between Two Points

Program Description
Calculate the distance between the two points (x1, y1) and (x2, y2).
Note: Adjust the result to 4 decimal places after point.

Input Format
Four different lines of input contains four integers x1, y1, x2 and y2.

Output Format
Print the distance between two points.

Constraints
1<=x1,y1,x2,y2<=1000

Input-1
25
15
35
10

Output-1
11.1803

Input-2
17
95
65
10

Output-2
97.6166
*/
