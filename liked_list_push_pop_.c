#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack is over flow !\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
    }
}

void likedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("stack is underflow!\n");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int main()
{
    struct node *top = NULL;
    top = push(top, 43);
    top = push(top, 42);
    top = push(top, 45);
    likedlistTraversal(top);
    int element = pop(&top);
    printf("poped element is %d\n", element);
    likedlistTraversal(top);
}