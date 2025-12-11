#include <stdio.h>
int main() {
    float height;
    scanf("%f", &height);

    if (height < 150)
        printf("Person is Dwarf.");
    else if (height > 150 && height <= 165)
        printf("Person is average heighted.");
    else if (height > 165 && height <= 195)
        printf("Person is taller.");
    else
        printf("Abnormal height.");
    return 0;
}
/*
Categorize
Program Description

Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
If the Person's height is less than 150 cm, then print Person is Dwarf.
If the Person's height is greater than 150 cm and less than or equal to 165 cm, then print Person is average heighted.
If the Person's height is greater than 165 cm and less than or equal to 195 cm, then print Person is taller.
If the above conditions are not satisfied, print Abnormal height.

Input Format
A single line input contains Height.

Output Format
Print the output according to the description

Constraints
0<=height<=10000


Input-1
140.5


Output-1
Person is Dwarf.


Input-2
195.5


Output-2
Person is taller.
 


Input-3
165.5


Output-3
Person is average heighted. 
*/
