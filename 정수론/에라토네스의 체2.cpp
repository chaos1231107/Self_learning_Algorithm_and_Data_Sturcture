#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<bool> v(n+1,0);
    cin >> n;
    
    for (int i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            for (int j = i*i; j <= n; j+=i)
            {
                v[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
