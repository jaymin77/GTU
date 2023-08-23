#include <stdio.h>
#include <stdlib.h>

struct node *temp, *newnode, *tail;
int count;
struct node *head = NULL;

struct node
{
    int data;
    struct node *next;
};

void display()
{
    if (tail == NULL)
    {
        printf("linkedlist is empty!!\n");
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    tail->next = head;
    count++;
    display();
}

void insert_at_front()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
    count++;
    display();
}

void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    count++;
    display();
}

void delete_last_node()
{
    struct node *prenode;
    temp = tail->next;
    if (tail == NULL)
    {
        printf("linked list is empty!!");
    }
    else
    {
        while (temp != tail)
        {
            prenode = temp;
            temp = temp->next;
        }
        prenode->next = temp->next;
        tail = prenode;
        free(temp);
    }
    count--;
    display();
}

void delete_before_specific_node()
{
    int pos, i = 1;
    struct node *prenode;
    temp = tail->next;
    printf("Enter the position which you want to delete:");
    scanf("%d", &pos);
    if (pos < 1 || pos > count)
    {
        printf("invalid position!!\n");
    }
    else if (tail == NULL)
    {
        printf("linked list is empty!!\n");
    }
    else
    {
        while (i < pos)
        {
            prenode = temp;
            temp = temp->next;
            i++;
        }
        prenode->next = temp->next;
        free(temp);
    }
    count--;
    display();
}

int main()
{
    int choice;
    printf("\n 0.exit\n 1.create\n 2.insert at front\n 3.insert at end\n 4.delete last node\n 5.delete before specific node\n");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        exit(0);
    case 1:
        create();
        break;
    case 2:
        insert_at_front();
        break;
    case 3:
        insert_at_end();
        break;
    case 4:
        delete_last_node();
        break;
    case 5:
        delete_before_specific_node();
        break;
    default:
        printf("Enter a choice between 0-5\n");
        break;
    }
    return main();
}

