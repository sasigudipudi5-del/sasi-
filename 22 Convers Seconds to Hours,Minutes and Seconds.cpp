#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    printf("H:M:S-%d:%d:%d", hours, minutes, seconds);
    return 0;
}
/*
Convert Seconds to Hours, Minutes and Seconds

Program Description
Convert the given integer (in seconds) to hours, minutes and seconds.

Input Format
Single line input contains, one integer.

Output Format
Convert Seconds into hours,minutes,seconds and print them in a single line.

Constraints
1000<=Seconds<=100000

Input-1
25300

Output-1
H:M:S-7:1:40

Input-2
15000

Output-2
H:M:S-4:10:0
*/
