/* Write a program to find out which number is even or odd from list of 10 numbers using
array.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("how many number yo  want check even or odd n:");
    scanf("%d", &n);

    int r[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a value [%d] :", i + 1);
        scanf("%d", &r[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] % 2 == 0)
        {
            printf("\n%d is even number", r[i]);
        }
        else
        {
            printf("\n%d is a odd number", r[i]);
        }
    }
    return 0;
}