/* Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number between 1-7:");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("MOnday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Please enter value between 1-7");
        break;
    }
}