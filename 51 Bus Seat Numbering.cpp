#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 15) {
        if (N >= 11)
            printf("Lower Single");
        else
            printf("Lower Double");
    } 
    else if (N >= 16 && N <= 30) {
        if (N >= 26)
            printf("Upper Single");
        else
            printf("Upper Double");
    }

    return 0;
}
/*
Bus Seat Numbering

Program Description
There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image.


As can be seen in the image, the bus is divided into two decks - The Lower deck, and the Upper deck, with 15 seats each. And some of the seats come as Single and some as Double. For example, Seats 1 and 2 are Double, whereas Seat 11 is a Single.
You will be given a Seat number, and your job is to classify it as one of these 4 types:
Lower Single
Lower Double
Upper Single
Upper Double

Input Format
A single line input consists a single integer N — the seat number.

Output Format
Output on a new line,the type of seat

Constraints
1<=N<=30


Input-1
6


Output-1
Lower Double


Input-2
28


Output-2
Upper Single
*/
