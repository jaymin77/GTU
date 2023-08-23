/* Write a program to evaluate the series 1^2+2^2+3^2+……+n^2*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a value n:");
    scanf("%d", &n);

    printf("your series =");
    for (int i = 1; i <= n; i++)
    {
        sum += (i * i);
        printf("%d^2+", i);
    }

    printf("\nsum of series:%d", sum);

    return 0;
}
