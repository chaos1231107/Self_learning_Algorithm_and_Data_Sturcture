#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& arr, vector<int>& temp, int n, int m, int start)
{
    if (temp.size() == m)
    {
        for (int x : temp)
            cout << x << " ";
        cout << '\n';
        return;
    }
    for (int i = start; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
        backtrack(arr, temp, n, m, i);
        temp.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    vector<int> temp;
    
    backtrack(arr, temp, n, m, 0);
    return 0;
}
