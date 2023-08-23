/* Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches
and centimetre*/
#include <stdio.h>

int main()
{
    float km, m, f, inch, cm;
    printf("Enter distance in kilometer:");
    scanf("%f", &km);
    printf("Distance in meter:%f\n", km * 1000);
    printf("Distance in foot:%f\n", km * 3280.84);
    printf("Distance in inch:%f\n", km * 39370.1);
    printf("Distance in centimeter:%f", km * 100000);
    return 0;
}