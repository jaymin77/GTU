/* Write a C program to find out the Maximum and Minimum number from given 10
numbers*/
#include <stdio.h>

int main()
{
    int a[10], i, max, min;

    for (i = 0; i < 10; i++)
    {
        printf("Enter integer value [%d]:", i + 1);
        scanf("%d", &a[i]);
        if (i == 0)
        {
            max = min = a[i];
        }
        else
        {
            if (min > a[i])
            {
                min = a[i];
            }
            if (max < a[i])
            {
                max = a[i];
            }
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimun: %d\n", min);
    return 0;
}