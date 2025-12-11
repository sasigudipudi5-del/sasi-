/*Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int length, i, j, temp, current;
    length = (n*2) - 1;
    current = n;
    for(i=0;i<length/2;i++)
    {
        if(current==n)
        {
            for(j=0;j<length;j++)
            {
                if(j!=0)
                {
                    printf(" ");
                }
                printf("%d",n);
            }
        }
        else
        {
            for(j=n;j>current;j--)
            {
                if(j!=n)
                {
                    printf(" ");
                }
                printf("%d",j);
            }
            temp = length - (n - current)*2;
            for(j=0;j<temp;j++)
            {
                printf(" %d",current);
            }
            for(j=current+1;j<=n;j++)
            {
                printf(" %d",j);
            }
        }
        printf("\n");
        current-=1;
    }

    for(i=n;i>=1;i--)
    {
        if(i!=n)
        {
            printf(" ");
        }
        printf("%d", i);
    }
    for(i=2;i<=n;i++)
    {
        printf(" %d", i);
    }
    printf("\n");

    current=2;
    for(i=0;i<length/2;i++)
    {
        if(current==n)
        {
            for(j=0;j<length;j++)
            {
                if(j!=0)
                {
                    printf(" ");
                }
                printf("%d",n);
            }
        }
        else
        {
            for(j=n;j>current;j--)
            {
                if(j!=n)
                {
                    printf(" ");
                }
                printf("%d",j);
            }
            temp = length - (n - current)*2;
            for(j=0;j<temp;j++)
            {
                printf(" %d",current);
            }
            for(j=current+1;j<=n;j++)
            {
                printf(" %d",j);
            }
        }
        printf("\n");
        current+=1;
    }

    return 0;
}



