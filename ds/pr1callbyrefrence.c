#include<stdio.h>

int add(int *p)
{
    *p += 100;
    return *p;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Entered number with addition 100 : %d" , add(&num) );
}