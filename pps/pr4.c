/*Write a C program to interchange two numbers.
*/

#include <stdio.h>

int main()
{
    float a, b, temp;
    printf("Enter a value a:");
    scanf("%f", &a);
    printf("Enter a value b:");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;
    printf("Interchange number a:%f b:%f", a, b);
    return 0;
}