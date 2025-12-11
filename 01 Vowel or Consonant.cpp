#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("VOWEL");
    else
        printf("CONSONANT");

    return 0;
}
/*
Vowel or Consonant

Program Description
You're given a character ch. Figure out whether it's an Vowel or Consonant.

Input Format
A single line input containg one alphabet.

Output Format
Print the output according to the discription.

Constraints
Given character is in the range a-z or A-Z


Input-1
a


Output-1
VOWEL


Input-2
Z


Output-2
CONSONANT
*/
