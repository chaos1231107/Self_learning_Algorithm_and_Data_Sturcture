#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long int a, b;
    cin >> a >> b;
    
    long long int limit = sqrt(b) + 1;
    vector<bool> is_prime(limit+1, true);
    is_prime[0] = is_prime[1] = false;
    
    
    for (long long int i = 2; i*i <= limit; i++)
    {
        if (is_prime[i])
        {
            for (long long int j = i*i; j <= limit; j+=i)
                is_prime[j] = false;
        }
    }
    
    int cnt = 0;
    for (long long int i = 2; i <= limit; i++)
    {
        if (is_prime[i])
        {
            long long int val = i*i;
            while (val <= b)
            {
                if (val >= a) cnt++;
                if (val > b/i) break;
                val *= i;
            }
        }
    }
    
    cout << cnt << '\n';
    
}
