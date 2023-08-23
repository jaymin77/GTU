/* Write a program to calculate average and total of 5 students for 3 subjects (use nested for
loops)
*/
#include <stdio.h>

int main()
{
    int n, sum = 0, marks, subject;
    printf("Enter How many students you print marks & avg : ");
    scanf("%d", &n);

    for (int students = 0; students < n; students++)
    {
        sum = 0;
        printf("Enter a marks for student %d\n", students + 1);

        for (subject = 0; subject < 3; subject++)
        {
            printf("Enter a marks for subject %d:", subject + 1);
            scanf("%d", &marks);
            sum += marks;
        }
        printf("For student:%d\n", students + 1);
        printf("sum:%d\n", sum);
        printf("avg:%f\n", ((float)sum) / subject);
    }
}