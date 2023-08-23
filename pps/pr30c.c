/*
iii
55555
4444
333
22
1
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%d", n - i);
        }
        printf("\n");
    }
}