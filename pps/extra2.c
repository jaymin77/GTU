/* print pattern 
  * *
 ** **
*** ***
*** ***
 ** **
  * *
 */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf(" ");

        for (int l = 0; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int m = 0; m < n-i; m++)
        {
            printf("*");
        }
        
        printf(" ");
        for (int k = 0; k < n-i ; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}