#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
    if (ptr->top == ptr->size - 1)
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

int Precdence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
};

int stacktop(struct stack *sp)
{
    return sp->arr[sp->top];
};
int isOpreator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *infixtopostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOpreator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (Precdence(infix[i]) > Precdence(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while ( !isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    return postfix;
}
int main()
{
    char *infix = "a-b+t/6";
    // printf("Enter the any infix to change into postfix : ");
    // scanf("%s", & infix);
    printf("the infix is : %s\n", infix);
    printf("postfix is :  %s\n", infixtopostfix(infix));
}