#include <stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    if (day == 1)
        printf("Monday");
    else if (day == 2)
        printf("Tuesday");
    else if (day == 3)
        printf("Wednesday");
    else if (day == 4)
        printf("Thursday");
    else if (day == 5)
        printf("Friday");
    else if (day == 6)
        printf("Saturday");
    else if (day == 7)
        printf("Sunday");
    else
        printf("Invalid input");
    return 0;
}
/*
Day Name

Program Description
Write a program to print days of week using if else ladder statement.
In this program, we will take a number between 1 to 7 as input from user, where 1 corresponds to Monday, 2 corresponds to Tuesday and so on. We will use if else ladder statement to print name of day in words.If any other input is given, then print "Invalid input".

put Format
A single line input containing one integer.

Output Format
Display output according to the description.

Constraints
0<=input<=10000


Input-1
8


Output-1
Invalid input


Input-2
1


Output-2
Monday
*/
