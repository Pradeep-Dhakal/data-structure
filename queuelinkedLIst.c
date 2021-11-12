#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue()
{
    struct node *ptr, *temp;

    int data;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf(" memory Overflow");
    }

    else
    {
        printf("enter data:\n");
        scanf("%d", &data);

        ptr->data = data;
        ptr->next = NULL;

        if (front == NULL && rear == NULL)
        {
            front = rear = ptr;
        }
        else
        {

            rear->next = ptr;
            rear = ptr;
        }
    }

    printf("Element successfully inserted \n");
}

void dequeue()
{
    struct node *temp; //temp is created just to free the memory address in case of shifting rear pointer to the next one.
    if (front == NULL && front > rear)
    {
        printf("\n linked list Underflow!\n");
    }
    else if (front != rear) //to check whether there are more than 1 element?
    {
        temp = front;
        front = front->next;
        free(temp);
        printf("the first element in list has been successfully deleted!\n");
    }
    else
    {
        temp = front;
        front = rear = NULL;
        free(temp);
        printf(" First element Deleted from list !\n");
    }
}

void display()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\n list Empty.\n");
    }
    else
    {
        ptr = front;
        printf("\nelement in the list are  : ");
        while (ptr != NULL)
        {
            printf("%d  ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice, data;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\nPress 1 for Enqueue, 2 for Dequeue and 3 for Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            printf(" invalid input ! press any number from 1-3\n");
            break;
        }

        printf("press y to continue or press any key if you change your mind and wanna exit:\n");

        scanf(" %c", &ch);
        getchar();
    }

    return 0;
}