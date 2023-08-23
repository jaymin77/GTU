/* Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9!
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float n, x, sum = 0, fact = 1;
    printf("Highest power of x is n enter between 1 to 9 ok!");

    printf("\nEnter a highest power of x is n:");
    scanf("%f", &n);

    printf("Enter a value of x:");
    scanf("%f", &x);

    for (int i = 0; i <= n; i++)
    {
        fact = 1;
        for (int j = i; j > 0; j--)
        {
            fact = fact * j;
        }
        if (i % 2 == 0)
        {
            sum += (pow(x, i) / fact);
        }
        else
        {
            sum -= (pow(x, i) / fact);
        }
    }
    printf("\nsum of series=%f", sum);
    return 0;
}