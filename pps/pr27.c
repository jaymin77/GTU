/* Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!.
 */

#include <stdio.h>

int main()
{
    float n, sum = 0, fact = 1;
    printf("Enter a number  n:");
    scanf("%f", &n);

    printf("your series =");
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = i; j > 0; j--)
        {
            fact = fact * j;
        }
        sum += (1 / fact);
        printf("1/%f! + ", i);
    }
    printf("Sum of series:%f", sum);
    return 0;
}