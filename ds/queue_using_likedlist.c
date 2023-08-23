// queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is Full!!\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty!!\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void display(struct node *ptr)
{
    if (f == NULL)
    {
        printf("Queue is Empty!!\n");
    }
    else
    {
        printf("Elements of linked list:");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice, val;
    printf("\n 0.exit\n 1.enqueue\n 2.dequeue\n 3.display\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
        exit(0);
        break;
    case 1:
        printf("Enter a value:");
        scanf("%d", &val);
        enqueue(val);
        break;

    case 2:
        dequeue();
        break;

    case 3:
        display(f);
        break;

    default:
        printf("Please enter a choice between 0-3");
        break;
    }
    return main();
}
