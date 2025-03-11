#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int N; 
    cin >> N;
    vector<long long int> A(N);
    long long int total_sum = 0;
    long long int prefix_sum = 0;
    
    for (long long int i = 0; i < N; i++)
        cin >> A[i];
    
    
    for (long long int i = 0; i < N; i++)
        total_sum += A[i];
        
    for (long long int i = 0; i < N; i++)
    {
        total_sum -= A[i];
        prefix_sum += A[i] * total_sum;
        prefix_sum %= MOD; //오버플로우 방지
    }
    
    if (prefix_sum < 0)
        prefix_sum += MOD;
        
    cout << prefix_sum % MOD << endl;
    return 0;
}
