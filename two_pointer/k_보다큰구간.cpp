#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n,k;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cin >> k;
    
    long long left = 0;
    long long right = 0;
    long long cnt = 0;
    long long sum = 0;
    
    for (long long right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum > k)
        {
            cnt += (n - right);
            sum -= arr[left];
            left++;
        }
    }
    
    cout << cnt << '\n';
    return 0;
}
