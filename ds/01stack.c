#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Stack is overflow!!\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack is underflow!!\n");
    }
    else
    {
        ptr->top--;
    }
}

int peek(struct stack *ptr, int pos, int val)
{
    if (ptr->top - pos + 1 < 0)
    {
        printf("Not a valid position!!");
    }
    else
    {
        ptr->arr[ptr->top - pos + 1] = val;
        return ptr->arr[ptr->top - pos + 1];
    }
}

int display(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack is underflow!!");
    }
    else
    {
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%d ", ptr->arr[i] );
        }
    }
    printf("\n");
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 13);
    push(s, 23);
    push(s, 33);
    push(s, 54);
    display(s);

    pop(s);
    display(s);

    peek(s, 2, 3);
    display(s);
    return 0;
}