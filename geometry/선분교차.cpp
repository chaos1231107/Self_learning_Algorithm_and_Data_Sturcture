#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
#define pii pair<lli, lli>

lli ccw (pii p1, pii p2, pii p3)
{
    long long int s = (p2.first - p1.first) * (p3.second - p1.second) 
    - (p3.first - p1.first) * (p2.second - p1.second);
    if (s > 0) return 1;
    else if (s < 0) return -1;
    else return 0;
}

bool isIntersect(pair<pii, pii>l1, pair<pii, pii>l2)
{
    pii p1 = l1.first;
    pii p2 = l1.second;
    pii p3 = l2.first;
    pii p4 = l2.second;
    
    lli p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4); //l1
    lli p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2); //l2
    
    if (p1p2 == 0 && p3p4 == 0)
    {
        if (p1 > p2) swap(p1, p2);
        if (p3 > p4) swap(p3, p4);
        
        return p3 <= p2 && p1 <= p4;
    }
    return p1p2 <= 0 && p3p4 <= 0;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    pii a, b, c, d;
    cin >> a.first >> a.second >> b.first >> b.second;
    cin >> c.first >> c.second >> d.first >> d.second;
    
    if (isIntersect({a, b}, {c, d})) cout << 1 <<'\n';
    else cout << 0 << '\n';
    
    return 0;
}
