#include <stdio.h>
#include <stdlib.h>
  struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};
void enqueue( int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("the queue is full \n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
    }
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

void linkedlist_treversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int Dequeue()
{
    int val = -1;
    struct node *ptr=f;
    if (f == NULL)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val ;
};
int main()
{ 
    enqueue(41);
    enqueue(42);
    enqueue(43);
    enqueue(44);
    enqueue(45);
    enqueue(46);
    enqueue(47);
linkedlist_treversal(f);
printf("the dequeue element is %d\n ",Dequeue());
printf("the dequeue element is %d \n",Dequeue());
printf("the dequeue element is %d \n",Dequeue());
linkedlist_treversal(f);
}