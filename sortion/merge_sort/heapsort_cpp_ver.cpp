#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static void downheap (vector<int>& a, int left, int right)
{
    int temp = a[left];
    int child, parent;
    
    for (parent=left; parent < (right+1)/2; parent=child)
    {
        int cl = 2*parent+1;
        int cr = cl + 1;
        child = (cr <= right && a[cr] > a[cl]) ? cr : cl;
        if (temp >= a[child]) break;
        a[parent] = a[child];
    }
    a[parent] = temp;
}

void heapsort (vector<int> &a, int n)
{
    for (int i = (n-1)/2; i >= 0; i--) 
        downheap(a, i, n-1);
        
    for (int i = n-1; i > 0; i--)
    {
        swap(a[0], a[i]);
        downheap(a,0,i-1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    heapsort(arr, n);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}
