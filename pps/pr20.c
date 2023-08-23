/* Write a program to find out sum of first and last digit of a given number.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number n:");
    scanf("%d", &n);

    if (n < 10)
    {
        sum += (n * 2);
        printf("sum of first and last digit :%d", sum);
    }
    else
    {
        sum += (n % 10);

        while (n > 9)
        {
            n = n / 10;
        }
        sum = sum + n;
        printf("sum of first and last digit :%d", sum);
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int n, f, l, r;
    printf("Enter a number n:");
    scanf("%d", &n);

    l = n%10;
    while (n > 9)
    {
        n = n/10;
    }

    f = n;

    r = l + f;
    printf("sum = %d",r);
    

}*/