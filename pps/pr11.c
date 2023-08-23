/* Write a C program to check whether the entered character is capital, small letter, digit or
any special character.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the one character:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The enter character is a small letter: ");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The enter character is a capital letter:");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The enter character is a digit");
    }
    else
    {
        printf("The enter characetr is a special character");
    }
}