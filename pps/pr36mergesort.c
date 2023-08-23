#include <stdio.h>

void printarray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int *A, int mid, int low, int high)
{
    int i, j, k, B[high+1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergesort(int *A, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main()
{

    int n;
    printf("Enter a number n:");
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a  number [%d]:", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Array before sorting\n");
    printarray(A, n);          
    mergesort(A, 0, n - 1); 
    printf("Array after sorting\n");
    printarray(A, n); 

    return 0;
}