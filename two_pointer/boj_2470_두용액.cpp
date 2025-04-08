#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int compare(const void *a, const void *b)
{
    long long int x = *(long long int*)a;
    long long int y = *(long long int*)b;
    return (x > y) - (x < y);
}

int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int *arr = calloc(N, sizeof(long long int));
    
    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    
    qsort(arr, N, sizeof(long long int), compare);
    
    long long int left = 0;
    long long int right = N-1;
    //long long int sum = 0;
    long long int min_diff = LLONG_MAX;
    long long int ans1 = 0;
    long long int ans2 = 0;
    
    while (left < right)
    {
        long long int sum = arr[left] + arr[right];
        if (llabs(sum) < min_diff)
        {
            min_diff = llabs(sum);
            ans1 = arr[left];
            ans2 = arr[right];
        }
        
        if (sum < 0) left++;
        
        else right--;

    }
    
    printf("%lld %lld", ans1, ans2);
    
    

    return 0;
}
