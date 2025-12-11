#include <stdio.h>

int main() {
    int D, years, weeks, remaining_days;
    scanf("%d", &D);
    years = D / 365;
    remaining_days = D % 365;
    weeks = remaining_days / 7;
    printf("%d", years);
    printf("%d", weeks);
    return 0;
}
/*
Days into Years, Weeks

Program Description
Given number of days (D). Convert that days(D) into years, weeks.
Note: Ignore Odd days.

Input Format
Single line input contains, one integer D-number of days

Output Format
convert the number of days into number of years and number of weeks and display the result

Constraints
1<=D<=5000

Input-1
1329

Output-1
3
33

Input-2
2451

Output-2
6
37
*/
