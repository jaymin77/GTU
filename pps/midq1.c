/* Take 10 integer from user and store them in array & print minimum , average , sum of 10 number */

#include<stdio.h>

int main()
{
    int a[10], min,sum=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a value [%d] :", i+1);
        scanf("%d", &a[i]);

        sum=sum+a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (i==0)
        {
            min=a[i];
        }
        if (min>a[i])
        {
            min=a[i];
        }

        
        
    }
    printf("sum = %d", sum);
    printf("\naverage = %f",((float)sum)/10);
    printf("\nminimum = %d", min);
    
}