#include<stdio.h>

int add(int n)
{
    n += 100;
    return n;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Entered number with addition 100 : %d" , add(num) );
}