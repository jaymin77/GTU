#include <stdio.h>

void printarray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int r, pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            r = A[i];
            A[i] = A[j];
            A[j] = r;
        }
    } while (i < j);

    r = A[low];
    A[low] = A[j];
    A[j] = r;

    return j;
}

void quicksort(int *A, int low, int high)
{
    int index;
    if (low < high)
    {
        index = partition(A, low, high);
        quicksort(A, low, index - 1);
        quicksort(A, index + 1, high);
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
    printarray(A, n);       // array  before sorting
    quicksort(A, 0, n - 1); // array sorting function
    printf("Array after sorting\n");
    printarray(A, n); // array after sorting

    return 0;
}