/* Write a C program to calculate the average, geometric and harmonic mean of n elements
in an array.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("how many number you enter n:");
    scanf("%d", &n);

    float r[n], sum = 0, sum1 = 1, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enetr a value [%d] :", i + 1);
        scanf("%f", &r[i]);

        sum += r[i];
        sum1 *= r[i];
        sum2 += (1.0 / r[i]);
    }
    printf("\n average : %f", sum / n);
    printf("\n geometric mean : %f", pow(sum1, (1.0 / n)));
    printf("\n harmonic mean : %f", n * pow(sum2, -1));

    return 0;
}