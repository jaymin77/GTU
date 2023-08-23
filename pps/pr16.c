/* Write a C program to input an integer number and check the last digit of number is even
or odd.*/

#include <stdio.h>

int main()
{
    int num, r;
    printf("Enter the number:");
    scanf("%d", &num);

    r = num % 10;
    if (r % 2 == 0)
    {
        printf("Enter number is an even");
    }
    else
    {
        printf("Enter number is an odd");
    }
}