/* . Write a C program to find 1+1/2+1/3+1/4+....+1/n.*/

#include <stdio.h>

int main()
{
    float n, sum = 0;
    printf("Enter a value n:");
    scanf("%f", &n);

    printf("your series =");
    for (float i = 1; i <= n; i++)
    {
        sum += (1 / i);
        printf("1/%.0f + ", i);
    }

    printf("\nsum of series:%f", sum);

    return 0;
}
