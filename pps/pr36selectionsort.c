#include<stdio.h>

void printarray(int* A , int n)
{
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    
}


void selectionsort(int* A, int n)
{
    int indexofmin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexofmin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexofmin])
            indexofmin = j;
        }
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin]  =  temp;


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
    selectionsort(A,n);// array sorting function
    printf("Array after sorting\n");
    printarray(A,n);// array after sorting

    return 0;
}