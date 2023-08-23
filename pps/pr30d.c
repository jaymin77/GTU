/*
iv
1
22
333
4444
55555

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
}