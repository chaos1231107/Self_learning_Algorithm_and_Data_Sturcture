#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int>& arr, int low, int high, int target)
{
    //int low = 0;
    int mid = (low + high) / 2;
    
    if (low > high) return false;
    
    if (target < arr[mid])
    {
        return binary_search(arr,low, mid-1, target);
    }
    
    else
    {
        return  binary_search(arr, mid+1, high, target);
    }
    
}