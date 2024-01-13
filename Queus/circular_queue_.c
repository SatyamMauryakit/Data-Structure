#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if ((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
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
        printf("this queue is full \n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
    printf("the enqueue index %d and element is %d\n",q->r,val);
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
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 100;
   q.f=q.r=0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 18);
    enqueue(&q, 13);
    enqueue(&q, 14);
    if (isEmpty(&q))
    {printf("the queue is Empty \n");
        return 0;
    }
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    printf("the element Dequeue is %d\n", Dequeue(&q));
    enqueue(&q, 10);
    enqueue(&q, 1);
}