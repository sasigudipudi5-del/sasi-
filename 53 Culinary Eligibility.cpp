#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if ((y * 100) / x >= 75)
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");

    return 0;
}
/*
Culinary Eligibility

Program Description
Kumar wants to organize a culinary competition for his students. However, he has made it mandatory that only students who have attended 75% or more of the culinary classes will be eligible to participate in the competition.
Given the total number of culinary classes conducted and the number of classes attended by a student, help Kumar to determine whether the student is eligible to participate in the culinary competition or not.

Input Format
A single line input contains two space-separated integers x and y – the total number of classes conducted and the number of classes attended by that student.

Output Format
output on a single line “ELIGIBLE” if the student is eligible to participate in the competition, and “NOT ELIGIBLE” otherwise.

Constraints
1<=x<=104 1<=y<=104 1<=y<=x


Input-1
20 5


Output-1
NOT ELIGIBLE


Input-2
100 80


Output-2
ELIGIBLE
*/
