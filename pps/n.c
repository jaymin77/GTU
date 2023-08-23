/* Print maximum of given three number */

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("a:  b:  c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf(" max a %d",a);
        }
        else
        {
            printf("max c % d ",c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("max b % d" , b);
        }
        else
        {
            printf("max c %d ",c);
        }
    }
}