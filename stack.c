#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

struct stack *sp;
sp->size = 80;
sp->top = -1;
sp->arr = (int *)malloc(s->size * sizeof(int));

int isEmpty(struct stack *ptr)
{
    if (ptr->top== -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int main{
    if (isEmpty(s)){
        printf("The stack is empty ");
    }
    else{
printf("the stack is not empty");   }
}