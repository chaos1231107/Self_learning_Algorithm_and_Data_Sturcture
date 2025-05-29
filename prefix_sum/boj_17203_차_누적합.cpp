#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    int *arr = new int[N+1]();
    int *prefix_sum = new int[N+2]();

    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }


    for (int i = 0; i < N - 1; i++) 
    {
        prefix_sum[i + 1] = prefix_sum[i] + abs(arr[i + 1] - arr[i]);
    }

    for (int q = 0; q < M; q++) 
    {
        int i, j;
        cin >> i >> j;
        if (j - 1 < i)
            cout << 0 << "\n";
        else
            cout << prefix_sum[j-1] - prefix_sum[i-1] << "\n";
    }

    delete[] arr;
    delete[] prefix_sum;
    return 0;
}
