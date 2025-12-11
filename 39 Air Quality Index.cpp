#include <stdio.h>

int main() 
{
    int X;
    scanf("%d", &X);
    if (X < 100)
        printf("YES");
    else
        printf("NO");
    return 0;
}
/*
Air Quality Index

Program Description
In the light of G-20 summit, government has decided to keep the average air quality index (AQI) strictly below 100.
On some random day, Ram measures the AQI and found the value to be X.
Find whether the government was able to keep the AQI within limits.

Input Format
A single line of input contains an integer X-the AQI Ram measured.

Output Format
Output YES ,if the government was able to keep the AQI within limits and NO otherwise.

Constraints
1<=X<=150


Input-1
50


Output-1
YES


Input-2
100


Output-2
NO
*/
