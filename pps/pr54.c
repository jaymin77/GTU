/* 
55. Write a C program to swap the two values using pointers.
*/

#include <stdio.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter a n:");
    scanf("%d", &n);
    ptr = &n;
    printf("Address of variable\n p:%p\n u:%u\n ", ptr, ptr, ptr);
    return 0;
}