/* Write a C program to find factorial of a given number.
*/

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter a number you wnat to find factorial:");
    scanf("%d", &n);

    while (n > 1)
    {
        fact = fact * n;
        n--;
    }

    printf("factorial of entered number =%d", fact);
    return 0;
}