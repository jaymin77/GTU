/* Check the entered number is prime or not by creating user define function named check_prime */

#include <stdio.h>

int check_prime(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    check_prime(n);
    return 0;
}

int check_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Enter number is not prime");
            break;
        }
    }
    if (n == i)
    {
        printf("Enter number is prime");
    }
}
