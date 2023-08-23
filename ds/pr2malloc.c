#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, i;

    printf("Enter a number how many num you want to store :");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated! \n");
        return 0;
    }
    else
    {
        printf("Memory successfully allocated.\n");

        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
    }

    printf("The element stored in array are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", ptr[i]);
    }

    return 0;
    free(ptr);
}

// ptr = realloc(ptr , n*sizeof(int));