#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        vector<long long> arr(N, 0);
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        
        long long current_sum = arr[0];
        long long max_sum = arr[0];
        
        for (int i = 1; i < N; i++)
        {
            if (current_sum + arr[i] > arr[i])
                current_sum = current_sum + arr[i];
            else
                current_sum = arr[i];
                
            if (current_sum > max_sum)
                max_sum = current_sum;
        }
        cout << max_sum << '\n';
    }
}
