#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int>& arr, int len, int target)
{
    int low = 0;
    int high = len - 1;
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        if (target == arr[mid])
        {
            return true; 
        }
        // targtet이 중간값보다 작다면 범위를 더 낮게 잡아야 한다
        if (target < arr[mid])
        {
            high = mid - 1;
        }
        // target이 중간값보다 크다면 범위를 더 크게 잡아야 한다
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
    }
    return false;
}
int main()
{
    vector<int> v(100);
    
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    if (binary_search(v, v.size(), 2))
    {
        cout << 1;
    }
    
    else
    {
        cout << 0;
    }
    return 0;
}
