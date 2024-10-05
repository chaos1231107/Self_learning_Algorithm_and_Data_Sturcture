#include <bits/stdc++.h>
using namespace std;

void selection_sort(int list[], int n)
{
    int least, temp;
    for (int i = 0; i < n-1; i++)
    {
        least = i;
        for (int j = i+1; j < n; j++)
        {
            if (list[j] < list[least])
            {
                least = j;
            }
        }
        if (i != least)
        {
            temp = list[i];
            list[i] = list[least];
            list[least] = temp;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> list(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    
    selection_sort(list.data(), n);
    
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
    return 0;
}
