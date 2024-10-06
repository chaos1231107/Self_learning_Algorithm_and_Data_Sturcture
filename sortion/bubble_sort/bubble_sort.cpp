#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int list[], int n) {
    for (int len = n-1; len > 0; len--) {
        for (int i = 0; i < len; i++) {
            if (list[i] > list[i+1]) {
                //swap(list[i], list[i+1])
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bubble_sort(v.data(),n);
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
