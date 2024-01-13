#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f; // forwerd
    int r; // revesre
    int *arr;
 };

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("this queue is full ");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("the enqueue element is %d\n",val);
    }
}
int Dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("this queue is Empty \n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];}
        return a;
    
}
int main()
{
    struct queue q;
    q.size = 100;
    q.f = -1;
    q.r = q.f;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    enqueue(&q, 15);
    enqueue(&q, 16);
    enqueue(&q, 17);
    enqueue(&q, 18);

    if (isEmpty(&q))
    {
        printf("the queue is Empty \n");
    }

    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    return 0;
}
