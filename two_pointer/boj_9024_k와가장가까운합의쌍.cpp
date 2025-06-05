#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long t;
    cin >> t;
    
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        
        long long left = 0;
        long long right = n-1;
        long long cnt = 0;
        long long min_diff = LLONG_MAX;
        
        while (left < right)
        {
            long long sum = arr[left] + arr[right];
            long long diff = llabs(sum - k);
            
            if (diff < min_diff)
            {
                min_diff = diff;
                cnt = 1;
            }
            
            else if (diff == min_diff)
                cnt++;
            
            if (sum < k)
                left++;
            
            else
                right--;
        }
        
        cout << cnt << '\n';
    }
    
    return 0;
}
