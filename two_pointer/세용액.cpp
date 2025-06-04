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

    //long long int size = sizeof(arr) / sizeof(arr[0]);
    long long int size = N;
    long long int closet_sum = LLONG_MAX;
    long long int ans1 = 0;
    long long int ans2 = 0;
    long long int ans3 = 0;
    //long long int triplet[3] = {arr[0], arr[1], arr[2]};
    
    for (long long int i = 0; i < size-2; i++)
    {
        long long int left = i+1;
        long long int right = N - 1;
        
        while (left < right)
        {
            long long int sum = arr[i] + arr[left] + arr[right];
            if (llabs(sum) < closet_sum)
            {
                closet_sum = llabs(sum);
                ans1 = arr[i];
                ans2 = arr[left];
                ans3 = arr[right];
            }
            
            if (sum < 0 ) left++;
            else right--;
        }
        
    }
    
    printf("%lld %lld %lld", ans1, ans2, ans3);
    free(arr);
    
    

    return 0;
}
