/* Write a program to find maximum element from 1-Dimensional array.
*/

#include <stdio.h>

int main()
{
    int n, max;
    printf("How many number you want to enter n:");
    scanf("%d", &n);

    int r[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value [%d] : ", i + 1);
        scanf("%d", &r[i]);

        if (i == 0)
        {
            max = r[i];
        }
        else
        {
            if (max < r[i])
            {
                max = r[i];
            }
        }
    }
    printf("maximun value for given %d number : %d", n, max);
    return 0;
}