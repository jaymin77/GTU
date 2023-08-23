/* Write a program to generate first n number of Fibonacci series
 */
#include <stdio.h>

int main()
{
    int n, i = 0, j = 1;
    printf("Enter a number n:");
    scanf("%d", &n);
    printf("%d %d", i, j);

    while (n > 0)
    {
        printf(" %d", i + j);
        j = i + j;
        i = j - i;
        n--;
    }
    return 0;
}