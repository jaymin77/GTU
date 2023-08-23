#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("queue is overflow!!");
    }
    else
    {
        
        q->arr[q->r] = val;
        q->r++;
        
    }
}

int dequeue(struct queue *q)
{
    int r = -1;
    if (isempty(q))
    {
        printf("queue is underflow!!\n");
    }
    else
    {
        q->f++;
        r = q->arr[q->f];
    }
    return r;
}

int display(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is underflow!!\n");
    }
    else
    {
        for (int i = q->f; i < q->r; i++)
        {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 3);
    enqueue(q, 13);
    enqueue(q, 23);
    enqueue(q, 33);
    display(q);
    dequeue(q);
    display(q);

    return 0;
}