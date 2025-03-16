#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int queue[10001];
static int queue_size = 0;

void push(int x)
{
    queue[queue_size] = x;
    queue_size++;
}

int empty()
{
    if (queue_size == 0)
        return 1; 
    else
        return 0;
}

int pop()
{
    if (empty())
        return -1;
    int result = queue[0];
    for (int i = 0; i < queue_size; i++)
        queue[i] = queue[i+1];
    queue_size--;
    return result;
}

int front()
{
    if (empty())
        return -1;
    return queue[0];
}

int back()
{
    if (empty())
        return -1;
    return queue[queue_size-1];
}



int main()
{
    int N;
    int x;
    char command[5] = {0, };
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
        {
            scanf("%d", &x);
            push(x);
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
            printf("%d\n",queue_size);
        }
        
        else if (!strcmp(command, "front"))
        {
            printf("%d\n", front());
        }
        
        else if (!strcmp(command, "back"))
        {
            printf("%d\n", back());
        }
    }
    return 0;
}
