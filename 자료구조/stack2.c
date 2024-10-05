#include <stdio.h>
#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = -1;

int is_full()
{
    if (top >= STACK_SIZE-1)
    {
        printf("Error : Stack is Full\n");
        return 1;
    }
    return 0;
}

int is_empty()
{
    if (top == -1)
    {
        printf("Error : Stack is Empty\n");
        return 1;
    }
    return 0;
}

void push(int data)
{
    if (!is_full())
    {
        //top++;
        stack[++top] = data;
    }
}

int pop()
{
    if (!is_empty())
    {
        return stack[top--];
    }
}

void print_stack()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}
int main()
{
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    print_stack();
    pop();
    print_stack();

    return 0;
}
