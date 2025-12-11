#include <stdio.h>

int main() 
{
    int B1, B2, B3;
    scanf("%d %d %d", &B1, &B2, &B3);
    int empty = (B1 == 0) + (B2 == 0) + (B3 == 0);
    if (empty >= 2)
        printf("Water filling time");
    else
        printf("Not now");
    return 0;
}
/*
Water Filling

Program Description
Priya has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.
You are given three integers - B1,B2, and B3. If B1=1, it means that the first bottle is full. If B1=0, it means that the first bottle is empty.
Similarly, B2 denotes whether the second bottle is full or empty, and B3 denotes it for the third bottle.
Output "Water filling time", if Priya has to fill the bottles now. If not, output "Not now".

Input Format
A single line input contains three space-separated integers, B1, B2, B3.

Output Format
Output on a new line, either "Water filling time", or "Not now".

Constraints
Bi is either 0 or 1.


Input-1
0 0 0


Output-1
Water filling time


Input-2
1 1 1


Output-2
Not now
*/
