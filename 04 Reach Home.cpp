#include <stdio.h>

int main() {
    long long X, Y, maxDistance;
    scanf("%lld %lld", &X, &Y);
    maxDistance = X * 5;

    if (maxDistance >= Y)
        printf("YES");
    else
        printf("NO");

    return 0;
}
/*
Reach Home

Program Description
Pavan is hungry and wants to reach home.
Pavan can travel up to 5 kilometres on 1 litre of fuel on his motorcycle.
Currently, his motorcycle is filled with X litres of fuel and his home is Y kilometres away.
Determine whether Pavan can reach his home on his motorcycle or not.

Input Format
The first line of input contains two space-separated integers X and Y.- the amount of fuel in Pavan's motorcycle and the distance to Pavan's home in kilometres.

Output Format
Print the output as YES or NO.

Constraints
0<=X,Y<=1000000


Explaination
Test case 2:

With 2 litres of fuel, Pavan can go up to 10 kilometres. Since his home is 10 kilometres away, he can reach his home on his motorcycle.


Input-1
3 17


Output-1
NO


Input-2
2 10


Output-2
YES
*/
