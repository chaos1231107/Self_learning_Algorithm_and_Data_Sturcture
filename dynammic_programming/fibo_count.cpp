#include <bits/stdc++.h>
using namespace std;
pair<long long int, long long int> fib_cnt(long long int n)
{
    vector<long long int> fib_zeros(n+1, 0);
    vector<long long int> fib_ones(n+1, 0);
    
    if (n >= 0)
    {
        fib_zeros[0] = 1;
        fib_ones[0] = 0;
    }
    
    if (n >= 1)
    {
        fib_zeros[1] = 0;
        fib_ones[1] = 1;
    }
    
    for(long long int i = 2; i <= n; i++)
    {
        fib_zeros[i] = fib_zeros[i-1] + fib_zeros[i-2];
        fib_ones[i] = fib_ones[i-1] + fib_ones[i-2];
    }
    
    return {fib_zeros[n], fib_ones[n]};
}

int main()
{
    long long int t;
    //long long int n;
    //long long int zero_cnt = 0;
    //long long int one_cnt = 0;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        auto [zero_cnt, one_cnt] = fib_cnt(n);
        cout << zero_cnt << " " << one_cnt << "\n";

    }
}
