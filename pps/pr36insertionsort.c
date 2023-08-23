#include <stdio.h>

void printarray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


void insertionsort(int* A, int n)
{
    int key, j;
    for (int i = 1 ; i <=  n-1; i++)
    {
        key = A[i];
        j = i-1 ;

        while (j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
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
        printf("Enter a  number [%d]:",i+1);
        scanf("%d", &A[i]);
    }
    
    
    printf("Array before sorting\n");
    printarray(A,n);// array  before sorting
    insertionsort(A,n);// array sorting function
    printf("Array after sorting\n");
    printarray(A,n);// array after sorting

    return 0;
}