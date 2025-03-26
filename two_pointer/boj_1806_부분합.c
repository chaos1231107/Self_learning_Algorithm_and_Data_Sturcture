#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n, s;
    
    scanf("%lld %lld", &n, &s);
    long long int *arr = calloc(n, sizeof(long long int));
    for (long long int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    
    long long int sum = 0;
    long long int min_len = n+1;
    long long int left = 0;
    long long int right = 0;
    
   while (right < n)
   {
       sum += arr[right];
       right++;
       
       while(sum >= s)
       {
            if (right - left < min_len)
                min_len = right - left;
            
            sum -= arr[left];
            left++;
       }
   }
    
    if (min_len == n+1)
            printf("0\n");
    else
        printf("%lld", min_len);
    
    free(arr);

    return 0;
}
