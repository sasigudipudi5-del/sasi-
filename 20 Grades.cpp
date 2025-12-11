#include <stdio.h>

int main() 
{
    int phy, chem, bio, math, comp;
    float percentage;
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
    percentage = (phy + chem + bio + math + comp) / 5.0;
    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}
/*
Grades
Program Description

Write a program that takes marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer Science as input and calculate percentage and grade according to given conditions:
If percentage >= 90% : Print:Grade A
If percentage >= 80% : Print:Grade B
If percentage >= 70% : Print:Grade C
If percentage >= 60% : Print:Grade D
If percentage >= 40% : Print:Grade E
If percentage < 40% : Print:Grade F

Input Format
A single line containing, five space-separated integers which denotes marks.

Output Format
Print the output according to the description.

Constraints
0<=each_subject_marks<=100


Input-1
56 67 89 78 89


Output-1
Grade C


Input-2
95 95 97 98 90


Output-2
Grade A
*/
