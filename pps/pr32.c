/* Write a C program to read and store the roll no and marks of 20 students using array.
 */

#include <stdio.h>

int main()
{
    int n;

    printf("How many roll no. you store? n:");
    scanf("%d", &n);

    int rollno[n], marks[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter roll no of student[%d] : ", i + 1);
        scanf("%d", &rollno[i]);

        printf("Enetr marks of student[%d] : ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n Roll no : %d     marks : %d ", rollno[i], marks[i]);
    }
    return 0;
}