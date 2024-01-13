#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int  * arr;
};
 int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr ->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow! cannot push %d to the stack\n ", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
};
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow ! cannot pop from the stack /n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
};

int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not a Valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
};

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
     sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("the stack has been created successfully\n");
    printf("before pushing full: %d\n", isFull(sp));
    printf("before pushing Empty: %d\n", isEmpty(sp));
    push(sp, 10);
    push(sp, 20);
    push(sp, 30);
    push(sp, 40);
    push(sp, 50);
    printf("poped %d from the stack \n", pop(sp));
    for (int j = 0; j < sp->top + 1; j++)
    {
    
    printf("The value at index %d is %d\n", j, peek(sp, j));
};
}