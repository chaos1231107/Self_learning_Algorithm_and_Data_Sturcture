#include <bits/stdc++.h>
using namespace std;

void random_pivot_quicksort(vector<int>& arr, int begin, int end)
{
    if (end <= begin) return; 
    //랜덤한 피벗 선택
    int pivot = (rand() % (end-begin+1)) + begin;
    //pivot을 배열의 첫 번째 요소로 
    swap(arr[begin], arr[pivot]);
    
    int left = begin+1;
    int right = end;
    
    while (left <= right)
    {
        while (left <= end && arr[left] < arr[begin])
        {
            left++;
        }
        
        while (right >= begin+1 && arr[right] > arr[begin])
        {
            right--;
        }
        
        if (left < right)
        {
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[begin], arr[right]);
    
    random_pivot_quicksort(arr, begin, right-1);
    random_pivot_quicksort(arr, right+1, end);
}
int main()
{
    ios_base :: sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    srand(time(0));
    random_pivot_quicksort(arr, 0, n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}