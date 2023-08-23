
#include <stdio.h>
#include <stdlib.h>

struct node *tail, *head = NULL, *newnode;
int count = 0;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void display()
{
    struct node *temp;
    temp = head;
    printf("data in the list are as follow\n");
    if (head == NULL)
        printf("linkedlist is empty");
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;

        tail = newnode;
    }
    count++;
    display();
}

void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data:- ");
    scanf("%d", &newnode->data);
    if (head == NULL)
        printf("linkedlist is empty");
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    count++;
    display();
}
void insert_before_position()
{
    int pos, i = 1;
    struct node *temp;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("before which position you want to insert:- ");
    scanf("%d", &pos);
    printf("enter data:- ");
    scanf("%d", &newnode->data);
    if (head == NULL)
        printf("linkedlist is empty");
    else if (pos < 1 || pos > count)
        printf("invalid position");
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;

        newnode->next->prev = newnode;
    }
    count++;
    display();
}

void delete_first_node()
{
    struct node *temp;
    temp = head;
    if (head == NULL)
        printf("linkedlist is empty");
    else
    {
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    count--;
    display();
}

int main()
{
    int choice;
    printf("\n 0.exit\n 1.create\n 2.insert_at_end\n 3. insert_before_position\n 4.delete_first_node\n 5.delete before specific node\n");
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
        insert_at_end();
        break;
    case 3:
        insert_before_position();
        break;
    case 4:
        delete_first_node();
        break;
    default:
        printf("Enter a choice between 0-5\n");
        break;
    }
    return main();
}
