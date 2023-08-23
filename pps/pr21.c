/* Write a C program to find the sum and average of different numbers which are accepted
by user as many as user wants
*/
#include <stdio.h>

int main()
{
    int n, value, sum = 0, i = 0;
    printf("Enter a number you want to print sum & avg:");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Enter value[%d]:", i + 1);
        scanf("%d", &value);
        sum += value;
        i++;
    }
    printf("sum=%d\n", sum);
    printf("avg=%f\n", ((float)sum) / n);
    return 0;
}