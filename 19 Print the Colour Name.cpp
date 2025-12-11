#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    ch = toupper(ch);
    switch (ch) 
    {
        case 'V': 
        printf("Violet"); 
        break;
        case 'I': 
        printf("Indigo"); 
        break;
        case 'B':
         printf("Blue"); 
         break;
        case 'G': 
        printf("Green"); 
        break;
        case 'Y': 
        printf("Yellow"); 
        break;
        case 'O': 
        printf("Orange"); 
        break;
        case 'R': 
        printf("Red"); 
        break;
        default: 
        printf("-1");
    }

    return 0;
}
/*
Print the Color Name

Program Description
Write a Program to print the color name by taking the Color code as input.
V -> Violet
I -> Indigo
B -> Blue
G -> Green
Y -> Yellow
O -> Orange
R -> Red
Note: If none of the above mentioned character is entered as input, print -1 as output.

Input Format
Single line input containing, one character

Output Format
Print the output according to the description.

Constraints
Input is case sensitive i.e. V and v are same .


Input-1
Z


Output-1
-1


Input-2
G


Output-2
Green


Input-3
G


Output-3
Blue
*/
