#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int>& arr, int L, int R)
{
    int left = L;
    int right = R;
    int pivot = arr[(L+R)/2];
    int temp;
    
    do 
    {
        while (arr[left] < pivot)
        {
          left++;
        }
        while (arr[right] > pivot)
        {
          right--;
        }
        if (left <= right)
        {
          temp = arr[left];
          arr[left] = arr[right];
          arr[right] = temp;
          left++; 
          right--;
        }
    }while (left <= right);
    
    if (L < right)
    {
      quick_sort(arr, L, right);
    }
    
    if (left < R)
    {
      quick_sort(arr, left, R);
    }
}
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    cout <<  "Before Sorting : ";
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cout << "\n";
    
    quick_sort(arr, 0, n-1);
    
    printf("Afger Sorting : ");
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
}