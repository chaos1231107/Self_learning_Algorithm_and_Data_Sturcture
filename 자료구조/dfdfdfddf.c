#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stack_size 10001

static int high = -1;
static int stack[stack_size];

void push(int x)
{
    stack[high++] = x;
}

int empty()
{
    if (high == -1)
        return 1;
    else
        return 0;
}

int pop()
{
    if (empty())
        return -1;
    else
        return stack[high--];
}

int top()
{
    
    if (empty())
        return -1;
    else
        return stack[high];
}

int main()
{
    int N = 0, push_data = 0;
    char command[5] = {0, };
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
        {
            scanf("%d", &push_data);
            push(push_data);
        }
        
        else if (!strcmp(command, "pop"))
        {
            printf("%d\n", pop());
        }
        
        else if (!strcmp(command, "empty"))
        {
            printf("%d\n", empty());
        }
        
        else if (!strcmp(command, "size"))
        {
            printf("%d\n", high+1);
        }
    }
}
