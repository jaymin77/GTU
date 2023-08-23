/*Write a program to calculate simple interest (i = (p*r*n)/100 )
i = Simple interest
p = Principal amount
r = Rate of interest
n = Number of years
*/
#include <stdio.h>

int main()
{
    float i, p, r, n;
    printf("Enter a principal amount p:");
    scanf("%f", &p);
    printf("Enter a rate of interest r:");
    scanf("%f", &r);
    printf("Emter a number of year n:");
    scanf("%f", &n);

    i = (p * r * n) / 100;
    printf("your simple interest i:%f", i);
    return 0;
}