#include<stdio.h>

void printarray(int* A , int n)
{
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    
}

void bubblesort(int* A,int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        printf("Working passes: %d\n", i+1);
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            
        }
        
    }
    
}


void bubblesortadptive(int* A ,int n)
{
    int temp;
    int issorted = 0;

    for (int i = 0; i < n; i++)
    {
        //printf("Working passes: %d\n", i+1);
        issorted = 1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1]; 
                A[j+1] = temp;
                issorted = 0;
            }
            
        }
        if (issorted){
        return;
        }

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
    bubblesort(A,n);// array sorting function
    printf("Array after sorting\n");
    printarray(A,n);// array after sorting

    return 0;
}