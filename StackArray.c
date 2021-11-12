/*implement stack with following functions:
​push()
pop()
peek() - display top element in stack
display() - all elements in stack

by pradeep dhakal 


*/

#include <stdio.h>
#define SIZE 10
void push(int arr[], int elem);
void pop(int arr[]);
void peek(int arr[]);
void display(int arr[]);
int top = -1;

int main()
{
    int a[SIZE], item, choice;
    char ch = 'y';
    do
    {
        printf("\n press 1:: push \n press 2:: pop \n press 3 Peek \n press 4:: Display\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to be pushed on the stack: ");
            scanf("%d", &item);
            push(a, item);
            break;
        case 2:
            pop(a);
            break;

        case 3:
            peek(a);
            break;

        case 4:
            display(a);
            break;

        default:
            printf("\n invalid choice\n");
        }
        getchar();
        printf("\ndo you want to continue(y/n)");
        scanf("%c", &ch);

    } while (ch == 'y');

    push(a, item);
    pop(a);
    return 0;
}

// method for inserting value on stack  
void push(int arr[], int elem)
{
    if (top == SIZE - 1)
    {
        printf("\n stack overflow\n");
    }
    else
    {
        top++;
        arr[top] = elem;
    }
}

// method or function for pop (which element should we delete?)

void pop(int arr[])
{
    if (top == -1)
    {
        printf("\n stack underflow\n");
    }
    else
    {
        printf("\n %d is to be deleted\n", arr[top]);
        top--;
    }
}

// method or function for peek top valuwe from the stack

void peek(int arr[])
{
    printf("the top value of stack is: %d ", arr[top]);
}


// methods or function for display the stack
void display(int arr[])
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\n.......displayimg stak.....\n");
        printf("\n......Stack is.......\n");
        for (i = top; i >= 0; --i)
            printf("%d\n", arr[i]);
    }
}


// end of code