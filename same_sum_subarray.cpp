#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long N, K;
    cin >> N >> K;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
        
    unordered_map<long long, long long> freq;
    freq[0] = 1;
    long long prefix_sum = 0;
    long long cnt = 0;
    
    for (int i = 0; i < N; i++)
    {
        prefix_sum += arr[i];
        long long key = prefix_sum - K * (i+1);
        cnt += freq[key];
        freq[key]++;
    }
    
    cout << cnt << '\n';
        
    return 0;

}
