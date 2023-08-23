/*
ii
ABCDE
ABCD
ABC
AB
A
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
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}