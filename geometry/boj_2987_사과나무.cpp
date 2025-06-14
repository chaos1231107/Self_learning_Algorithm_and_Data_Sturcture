#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

long long double_area(pair<int, int> a, pair<int, int> b, pair<int, int> c)
{
    return abs((long long)(a.first * b.second + b.first * c.second + c.first * a.second - a.second * b.first - b.second * c.first - c.second * a.first));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector <pair<int, int>> coords1(3);
    
    for (int i = 0; i < 3; i++)
        cin >> coords1[i].first >> coords1[i].second;
    
    //사과나무의 개수 
    cin >> n;
    //사과나무의 좌표
    vector <pair<int, int>> coords2(n);
    for (int i = 0; i < n; i++)
        cin >> coords2[i].first >> coords2[i].second;
    
    long long total_area  = double_area(coords1[0], coords1[1], coords1[2]);
    
    cout << fixed << setprecision(1) << total_area / 2.0 << "\n";

    int cnt = 0;
    const double eps = 1e-9;
    for (int i = 0; i < n; i++)
    {
        auto p = coords2[i];
        long long a1 = double_area(coords1[0], coords1[1], p);
        long long a2 = double_area(coords1[1], coords1[2], p);
        long long a3 = double_area(coords1[2], coords1[0], p);

        if (abs((double)(a1 + a2 + a3) - (double)total_area) < eps)
            cnt++;
    }

    cout << cnt << "\n";
    return 0;
    
   
}
