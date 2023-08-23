/* Write a program to check whether the given number is prime or not.*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number n:");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Entered number %d is not prime", n);
            break;
        }
    }
    if (n == i)
    {
        printf("Entered number %d is prime", n);
    }
    return 0;
}