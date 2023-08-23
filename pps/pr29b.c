/* ii      *
          * *
         * * *
        * * * *
       * * * * *   
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
            printf("* ");
        }
        printf("\n");
    }
}