#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("lowercase alphabet");
    else
        printf("not an alphabet");
    return 0;
}
/*
Character is Uppercase or Lowercase

Program Description
Write a program to check whether a character is uppercase or lowercase.
Character is uppercase alphabet if(ch >= 'A' and ch <= 'Z').
Character is lowercase alphabet if(ch >= 'a' and ch <= 'z').
If none of the above conditions met, then character is "not an alphabet."

Input Format
Single line input containing, one character.

Output Format
Print output according to the discription.

Constraints
length of input=1


Input-1
1


Output-1
not an alphabet


Input-2
A


Output-2
uppercase alphabet


Input-3
A


Output-3
lowercase alphabet
*/
