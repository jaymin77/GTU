/* Write a program to read marks from keyboard and your program should display
equivalent grade according to following table(if else ladder)
Marks Grade
 100 - 80 Distinction
79 - 60 First Class
 59 - 40 Second Class
 < 40 Fail
*/
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 101 || marks <= 0)
    {
        printf("What the teacher has total written is wrong");
    }
    else if (marks >= 80)
    {
        printf("The student grade is distinction");
    }
    else if (marks >= 60)
    {
        printf("The student grade is first class");
    }
    else if (marks >= 40)
    {
        printf("The student grade is second class");
    }
    else
    {
        printf("The student is fail");
    }
}
