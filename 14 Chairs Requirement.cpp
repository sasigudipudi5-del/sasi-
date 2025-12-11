#include <stdio.h>
int main() 
{
    int X, Y, required;
    scanf("%d %d", &X, &Y);
    if (X > Y)
        required = X - Y;
    else
        required = 0;
    printf("%d", required);
    return 0;
}
/*
Chairs Requirement

Program Description
The coding class is very famous in T-hub.
This year X students joined his class and each student will require one chair to sit on. Chef already has Y chairs in his class. Determine the minimum number of new chairs T-hub's manager must buy so that every student is able to get one chair to sit on.

Input Format
A single line of input contains two space separated integers.

X denotes number of studentsjoined in the class and Y denotes number of chairs already in the class.

Output Format
Print the output the minimum number of extra chairs required for the students.

Constraints
0<=X,Y<=10000


Input-1
50 100


Output-1
0


Input-2
20 14


Output-2
6


Input-3
20 14


Output-3
0


Input-4
35 0


Output-4
35
*/
