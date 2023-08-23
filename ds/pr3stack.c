#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1;

void push(int newelement)
{
    if (top == 4)
    {
        printf("\n");
        printf("Stack is full!!");
    }
    else
    {
        top++;
        stack[top] = newelement;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n");
        printf("Stack is empty!!");
    }
    else
    {
        top--;
    }
}

void display()
{
    printf("Stack elements are :");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int choice, newelement;
    while (0 == 0)
    {
        printf("\n1.push\n2.pop\n3.display\n0.exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("Enter a newelement in stack:");
            scanf("%d", &newelement);
            push(newelement);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter a choice between 0-3!!");
        }
    }
    return 0;
}