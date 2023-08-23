/* Write a program to that performs as calculator ( addition, multiplication, division,
subtraction).*/

#include <stdio.h>
int main()
{

    float a, b;
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("addition(a+b)=%f\n", a + b);
    printf("subtraction(a-b)=%f\n", a - b);
    printf("multiplicatin(a*b)=%f\n", a * b);
    printf("division(a/b)=%f\n", a / b);
    return 0;
}