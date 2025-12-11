/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk
Sample Output 2

1 1 1 2 0 1 2 0 5 0 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count[11]={0};
    char s[1001];
    scanf("%s",s);
    int s_length = strlen(s);
    int i, j;
    for(i=0;i<s_length;i++)
    {
        if((s[i]>='0')&&(s[i]<='9'))
        {
            count[s[i]-'0']+=1;
        }
    }
    for(i=0;i<10;i++)
    {
        if(i!=0){
            printf(" ");
        }
        printf("%d", count[i]);
    }
    printf("\n");
    return 0;
}

