#include <stdio.h>
#include <stdlib.h>

struct cirqueue
{
    int size;
    int f;
    int r;
    int *arry;
};

void en_queue(struct cirqueue *q, int val)
{
    if ((q->r + 1) % q->size == q->f)
    {
        printf("Queue is overflow!!\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arry[q->r] = val;
    }
}

int de_queue(struct cirqueue *q)
{
    int a = -1;
    if (q->r == q->f)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arry[q->f];
    }
    return a;
}

void display(struct cirqueue *q)
{
    for (int i = q->f; i <= q->r; i++)
    {
        printf("%d", q->arry[i]);
    }
}

int main()
{
    struct cirqueue q;
    q.size = 5;
    q.r = q.f = 0;

    while (0 == 0)
    {
        int choice, val;
        printf("\n 0.exit\n 1.enqueue\n 2.dequeue\n 3.display\n");
        printf("enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);

        case 1:
            printf("Enter a value in queue:");
            scanf("%d", &val);
            en_queue(&q, val);
            break;
        case 2:
            de_queue(&q);
            break;
        case 3:
            display(&q);
            break;
        default:
            printf("enter a choice between 0-3");
            break;
        }
    }
}