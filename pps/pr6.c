/* Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)*/
#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter temperature in celsius:");
    scanf("%f", &c);

    f = (c * 1.8) + 32;
    printf("Temperature in fahrenheit:%f", f);
    return 0;
}