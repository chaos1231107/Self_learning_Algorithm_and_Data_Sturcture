#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> prefix_sum(const vector<ll>& v)
{
    int n = v.size();
    vector<ll> res(n+1,0);
    for (int i = 0; i < n; i++)
        res[i+1] = res[i] + v[i];
    return res;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, Q;
    cin >> N >> Q;
    vector<pair<ll, ll>> data(N);
    for (int i = 0; i < N; i++)
    {
        ll ai, xi;
        cin >> ai >> xi;
        data[i] = {xi, ai};
    }
    
    sort(data.begin(), data.end());
    
    vector<ll> xi(N), ai(N);
    for (int i = 0; i < N; i++)
    {
        xi[i] = data[i].first;
        ai[i] = data[i].second;
    }
    
    vector<ll> prefix_ai = prefix_sum(ai);
    vector<ll> prefix_ai_xi(N+1, 0);
    for (int i = 0; i < N; i++)
        prefix_ai_xi[i+1] = prefix_ai_xi[i] + ai[i] * xi[i];
    
    while(Q--)
    {
        ll q;
        cin >> q;
        int idx = lower_bound(xi.begin(), xi.end(), q) - xi.begin();
        ll sumL = q * prefix_ai[idx] - prefix_ai_xi[idx];
        ll sumR = (prefix_ai_xi[N] - prefix_ai_xi[idx]) - q * (prefix_ai[N] - prefix_ai[idx]);
            
        cout << sumL + sumR << '\n';
    }
    

    return 0;
}
