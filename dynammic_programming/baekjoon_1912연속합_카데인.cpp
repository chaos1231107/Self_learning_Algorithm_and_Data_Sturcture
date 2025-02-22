#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> num_ary(n);
    
    for (long long int i = 0; i < n; i++)
    {
        cin >> num_ary[i];
    }
    
    long long int max_sum = num_ary[0];
    long long int current_sum = num_ary[0];
    
    for (long long int i = 1; i < n; i++)
    {
        current_sum = max(num_ary[i], num_ary[i] + current_sum);
        max_sum = max(max_sum, current_sum);
    }
    
    cout << max_sum << endl;
}
