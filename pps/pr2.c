/*Write a program to find area of triangle(a=h*b*.5)
a = area
h = height
b = base
*/

#include <stdio.h>
int main()
{
    float a, h, b;
    printf("Enter a height h:");
    scanf("%f", &h);
    printf("Enter a base b:");
    scanf("%f", &b);

    a = 0.5 * h * b;

    printf("Area of triangle:%f", a);
    return 0;
}