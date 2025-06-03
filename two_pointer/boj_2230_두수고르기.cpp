#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long N, M;
    cin >> N >> M;
    
    vector <long long> arr(N);
    for (long long i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    long long left = 0;
    long long right = 0;
    long long min_diff = LLONG_MAX;
    //long long ans1 = 0;
    //long long ans2 = 0;
    
    while (right < N)
    {
        long long diff = arr[right] - arr[left];
        if (left == right)
        {
            right++;
            continue;
        }
        if (diff < M)
            right++;
        else
        {
            min_diff = min(min_diff, diff);
            left++;
        }
    }
    cout << min_diff << '\n';
    return 0;
}
