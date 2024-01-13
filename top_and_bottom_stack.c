 #include<stdio.h>
 #include<stdlib.h>
 struct stack{
    int size;
    int top;
    int *arr;
 };

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
};
int isEmpty(struct stack *ptr){
    if(ptr->top=-1){
        return -1;
    }
    else{
        return 0;
    }
};

int  push(struct stack *ptr, int val)
{
 if(isFull(ptr)){
    printf("the stack overflow! cannot push %d to the stack\n");

 }  
 else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
    printf("%d\n",val);
 } 
};
int  pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow! cannot pop form the stack \n");
      return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val ;


    }
}

 int main(){
 struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
 sp->size=10;
 sp->top=-1;
 sp->arr=(int *)malloc(sp->size * sizeof(int));
 printf("the stack has been created Successfully\n");
// printf("%d\n",isEmpty(sp));
// printf("%d\n",isFull(sp));
push(sp,41);
push(sp,42);
push(sp,43);
push(sp,44);
push(sp,45);
printf("poped %d from the stack \n",pop(sp));
// printf("%d\n",isEmpty(sp));
// printf("%d\n",isFull(sp));

 }