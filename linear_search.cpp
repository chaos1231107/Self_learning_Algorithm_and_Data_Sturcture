#include <iostream>
using namespace std;
// 시간복잡도 O(n)
int linear_search(int arr[], int arr_size, int x)
{
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20,80, 30, 60, 50, 110, 100, 130, 170};
    int x;
    cin >> x;
    int arr_size = sizeof(arr) / sizeof(*arr);
    int result = linear_search(arr, arr_size, x);
    (result == -1)? cout << "Element is not present in array"
                 : cout << "Element is present at index" << " "<<  result;

    return 0;
}