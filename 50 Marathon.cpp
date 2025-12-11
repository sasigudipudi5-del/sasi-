#include <stdio.h>

int main() {
    int a, b, c, d, count = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b > a) count++;
    if (c > a) count++;
    if (d > a) count++;

    printf("%d", count);

    return 0;
}
/*
Marathon

Program Description
You are given four distinct integers a, b, c, d.
Bolt and three other people are running a Marathon. The value a is the distance that Bolt has run and b, c, d correspond to the distances the other three participants ran.
Output the number of participants in front of Bolt. 

Input Format
The only line of input consists of four distinct integers a, b, c, d.

Output Format
Output a single integer — the number of participants in front of Bolt.

Constraints
0 = a, b, c, d = 10000


Explaination
For Input 1, there are 2 people in front of Bolt, specifically the participants who ran distances of 3 and 4. The other participant is not in front of Bolt because he ran a shorter distance than Bolt.

For Input 2, no one is in front of Bolt, since he ran a distance of 10000 while all others ran a distance of 0, 1, and 2 respectively.

For Input 3, only the second person is in front of Bolt, who ran a total distance of 600 while Bolt ran a distance of 500.


Input-1
2 3 4 1 


Output-1
2


Input-2
10000 0 1 2


Output-2
0


Input-3
500 600 400 300


Output-3
1
*/
