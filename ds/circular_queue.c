#include<stdio.h>
#include<stdlib.h>
# define SIZEOF(arr) sizeof(arr)/sizeof(int)
int queue[5];
int front = -1;
int rear = -1;
int count = 0;
int len = 5;
 int x = 0;
int en_queue(int value);
int de_queue();
int display();

int main()
{
    while(0 == 0)
    {   
        int value,choice;
        printf("\n 0.exit\n 1.enqueue\n 2.dequeue\n 3.display\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                exit(0);
            
            case 1:
                
                printf("enter a value you want to insert :");
                scanf("%d" ,&value);
                en_queue(value);
                break;
            case 2:
                de_queue();
                break;
            case 3:
                display();
                break;
            default:
                printf("enter a choice between 0-3");
                break;
        }
    }

    return 0;
} 
int en_queue(int value)
{
    if(rear == len - 1)
    {
        printf("queue is overflow\n");
    }
    if(rear == len - 1 && front == count)
    {
       
        if (x <= count - 1)
        {
            queue[x] = value;
            x++;
        }
    }
    else
    {
        rear++;
        front = 0;
        queue[rear] = value;       
    }
}
int de_queue()
{
    if(front == -1 || front == rear)
    {
        printf("queue underflow\n");
    }
    else
    {
        front++;
        count++;
    }
}
int display()
{
    if(front == 0)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d",queue[i]);
        }
    }
    else if(front != 0)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ",queue[j]);
        }
        for (int k = front; k <= rear; k++)
        {
            printf("%d ",queue[k]);
        }

    }
    
}
