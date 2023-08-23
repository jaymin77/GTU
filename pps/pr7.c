/* Write a C program to find out distance travelled by the equation d = ut + at^2*/
#include <stdio.h>

int main()
{
    float d, u, t, a;
    printf("Enter a value of u:");
    scanf("%f", &u);
    printf("Enter a vlaue of t:");
    scanf("%f", &t);
    printf("Enter a vlaue of a:");
    scanf("%f", &a);

    d = (u * t) + (a * t * t) / 2;
    printf("Distance travelled d:%f", d);
    return 0;
}