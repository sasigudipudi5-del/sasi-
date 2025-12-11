#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("VOWEL");
    else
        printf("CONSONANT");

    return 0;
}
/*
Vowel or Consonant

Program Description
Find out the given character is Vowel or Consonant?

Input Format
A single line input containg one alphabet.

Output Format
Print the output according to the description.

Constraints
a<=character<=z


A<=character<=Z


Input-1
Z


Output-1
CONSONANT


Input-2
a


Output-2
VOWEL
*/
