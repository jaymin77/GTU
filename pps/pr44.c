/* Write a function Exchange to interchange the values of two variables, say x and y.
illustrate the use of this function in a calling function.
*/

#include <stdio.h>

void swap(int *, int *, int *);

int main()
{
    int a, b, temp;
    printf("Enter a number a:");
    scanf("%d", &a);

    printf("enter a number b:");
    scanf("%d", &b);

    swap(&a, &b, temp);
    printf("Swapped value ");
    printf("\n a=%d   b=%d", a, b);
    return 0;
}

void swap(int *a, int *b, int *temp)
{
    *temp = *a;
    *a = *b;
    *b = *temp;
}