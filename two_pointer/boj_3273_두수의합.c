#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    if (*(int*)a > *(int*)b)
        return 1;
    else
        return -1;
}
int main()
{
    int n, x;
    int sum = 0;
    int cnt = 0;
    
    scanf("%d", &n);
    int *arr = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    scanf("%d", &x);
    
    qsort(arr, n, sizeof(int), compare);
    
    int left = 0;
    int right = n-1;
    
    while (left < right)
    {
        
        sum = arr[left] + arr[right];
        
        if (sum < x)
            left++;
            
        else if (sum > x)
            right--;
        
       else
       {
           cnt++;
           left++;
           right--;
           //cnt++;
       }
    }
    
    printf("%d", cnt);
    
    free(arr);
    return 0;
}
