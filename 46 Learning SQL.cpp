#include <stdio.h>

int main() {
    int R, C, E, totalCells;
    scanf("%d %d %d", &R, &C, &E);
    totalCells = (R + E) * C;
    printf("%d", totalCells);
    return 0;
}
/*
Learning SQL

Program Description
Kumar has recently started learning from the new SQL course.
He has a table which initially has R rows and C columns. He then adds E extra rows to it. How many total cells does he have finally?

Input Format
The only line of input contains three space-separated integers R, C, and E — the number of initial rows, the number of columns, and the number of extra rows added, respectively.

Output Format
Output on a new line, a single integer, which should be the final total number of cells in the table.

Constraints
1<=R<=100 1<=C<=100 1<=E<=100

Input-1
5 2 1

Output-1
12

Input-2
6 10 3

Output-2
90
*/
