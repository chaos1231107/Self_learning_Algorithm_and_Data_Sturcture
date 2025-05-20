#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    int *arr = calloc(N+1, sizeof(int));
    int *prefix_sum = calloc(N+2, sizeof(int));
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N+1; i++)
    {
        prefix_sum[i+1] = prefix_sum[i] + arr[i];
    }
    
    int cnt = 0;
    int max_sum = 0;
    
    for (int i = 0; i < N-X+1; i++)
    {
        int current_sum = prefix_sum[i+X] - prefix_sum[i];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            cnt = 1;
        }
        else if (current_sum == max_sum)
        {
            cnt++;
        }
    }
    
    if (max_sum == 0)
        printf("SAD\n");
    else
    {
        printf("%d\n%d", max_sum, cnt);
    }
    
    free(arr);
    free(prefix_sum);
    return 0;
}
