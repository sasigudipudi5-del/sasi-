#include <stdio.h>

int main() {
    int X, Y, Z, mangoes;
    scanf("%d %d %d", &X, &Y, &Z);
    mangoes = (Z - Y) / X;
    printf("%d", mangoes);
    return 0;
}
/*
Can Cross the Bridge

Program Description
A mango weighs X kilograms and a truck weighs Y kilograms. A truck can cross the bridge safely with the weight of Z kilograms.
Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.
It is guaranteed that X <= Y <= Z

Input Format
Single line input, contains three space-separated integers X,Y,Z.

Output Format
Print maximum number of mangoes you can load in the truck.

Constraints
X<=Y<=Z 1<=X,Y,Z<=100

Input-1
2
5
11

Output-1
3

Input-2
4
10
20

Output-2
2
*/
