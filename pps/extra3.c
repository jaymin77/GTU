/* number is palindrome or not?*/

#include <stdio.h>
int main()
{
    int n, rev = 0, original;
    printf("Enter a number n:");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    if (original == rev)
    {
        printf("\nEntered number is palindrome");
    }
    else
    {
        printf("\nEntered number is not palindrome");
    }
}