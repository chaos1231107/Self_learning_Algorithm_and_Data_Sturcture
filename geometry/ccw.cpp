#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ccw (ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    ll val = (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1);
    if (val > 0) return 1;
    if (val < 0) return -1;
    else return 0;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll x1, x2, x3, x4;
    ll y1, y2, y3, y4;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    int dir = ccw(x1, y1, x2, y2, x3, y3);
    cout << dir << '\n';
    
    return 0;
    
}
