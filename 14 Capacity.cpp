#include <stdio.h>

int main() {
    int T, S, B;
    double capacityKB;
    scanf("%d %d %d", &T, &S, &B);
    capacityKB = (2.0 * T * S * B * 512) / 1024;
    printf("%.0lf KB", capacityKB);
    return 0;
}
/*
Capacity

Program Description
Consider a disk has 2 surfaces, each surface is divided into T tracks and each track is divided into S sectors, 
each sector is divided into B blocks. Each block has 512 bytes of memory. So find the capacity of the disk (in KB's).

Input Format
Single line input, containing three space-separated integers T, S, B.

Output Format
Print the Capacity of the disk(in KB's).

Constraints
1<=T,S,B<=100

Explaination
Test Case 1: Capacity = 2 x T x S x B x 512 bytes.= 2 x 15 x 20 x 30 x 512= 92,16,000 bytes
1KB= 1024 bytes
So, Capacity in KB = Total Capacity in bytes/1024
= 92,16,000/1024==> 9000 KB

Input-1
15
20
30

Output-1
9000 KB

Input-2
10
10
10

Output-2
1000 KB
*/
