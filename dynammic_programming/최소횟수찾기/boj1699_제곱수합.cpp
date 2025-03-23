#include <bits/stdc++.h>
using namespace std;

int main()
{
    //dp[1] = 1
    //dp[2] = 2
    // dp[3] = 3
    // dp[4] = min(4, 2, 1) = 1
    // dp[5] = min(5, 2) = 2
    // dp[6] = min(6, 2) = 2
    // dp[7] = min(7, 4) = 4
    // dp[8] = min(8, 2) = 2
    // dp[9] = min(9, 1) = 1 dp[1] = dp[4] = dp[9] = dp[16] = 1
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    
    long long int N;
    cin >> N;
    vector<long long int> dp(100000);
    
    for (long long int i = 1; i < N+1; i++)
    {
        dp[i] = i;
        for (long long int j = 1; j < i+1; j++)
            {
                if (j * j > i)
                    break;
                if (dp[i-j*j] + 1 < dp[i])
                dp[i] = dp[i-j*j] + 1;
            }
            
    }
    
    cout << dp[N] << endl;

    return 0;
}
