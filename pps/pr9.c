/* Write a program to read marks of a student from keyboard whether the student is pass or fail(
using if else)
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a marks between 0 to 70 :");
    scanf("%d", &n);

    if (n > 70 || n < 0)
    {
        printf("please enter marks between 0 to 70");
    }
    else if (n < 23)
    {
        printf("You are fail");
    }
    else
    {
        printf("you are pass");
    }
    return 0;
}