/* Write a function in the program to return 1 if number is prime otherwise return 0
*/

#include <stdio.h>

int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter number n:");
    scanf("%d", &n);

    if (prime(n) == 1)
    {
        printf("\n %d is prime number", n);
    }
    else
    {
        printf("\n %d is not prime number", n);
    }
    return 0;
}