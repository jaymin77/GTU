/* Write a C program to find that the accepted number is Negative, or Positive or Zero.*/
#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number n:");
    scanf("%f", &n);

    if (n > 0)
    {
        printf("Number is positive\n");
    }
    else if (n < 0)
    {
        printf("Number is negative\n");
    }
    if (n == 0)
    {
        printf("Number is zero\n");
    }
    return 0;
}