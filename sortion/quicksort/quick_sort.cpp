#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int left = start + 1; 
    int right = end;
    int pivot = start;

    while (left <= right) {
        while (left <= end && arr[left] <= arr[pivot]) {
            left++;
        }
        while (right >= start && arr[right] >= arr[pivot]) {
            right--;
        }
        if (left > right) {
            swap(arr[pivot], arr[right]);
        } else {
            swap(arr[left], arr[right]); 
        }
    }

  
    quick_sort(arr, start, right - 1);
    quick_sort(arr, right + 1, end);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    quick_sort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}
