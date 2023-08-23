/* Read five persons height and weight and count the number of person having height
greater than 170 and weight less than 50,*/
#include <stdio.h>
int main()
{
    int n, hei, wei, cou = 0;
    printf("Enter how many person? :");
    scanf("%d", &n);

    for (int person = 0; person < n; person++)
    {
        printf("Enter detail person %d\n", person + 1);

        printf("Enter height:");
        scanf("%d", &hei);

        printf("Enter weight:");
        scanf("%d", &wei);

        if (hei > 170)
        {
            if (wei < 50)
            {
                cou++;
            }
        }
    }
    printf("Total person of height > 170 & weight < 50 is :%d", cou);
}