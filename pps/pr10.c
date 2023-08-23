/* Write a program to read three numbers from keyboard and find out maximum out of these
three. (nested if else) */
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter a value of a:");
    scanf("%f", &a);
    printf("Enter a value of b:");
    scanf("%f", &b);
    printf("Enter a value of c:");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("%f is a maximum", a);
    }
    else
    {

        if (b > c)
        {
            printf("%f is a maximum", b);
        }
        else
        {
            printf("%f is a maximun", c);
        }
    }

    return 0;
}
