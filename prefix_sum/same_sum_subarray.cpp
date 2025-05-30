#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    int *arr1 = (int*)calloc(N+1, sizeof(int));
    int *arr2 = (int*)calloc(N+1, sizeof(int));
    
    for (int i = 0; i < N; i++)
        cin >> arr1[i];
    
    for (int i = 0; i < N; i++)
        cin >> arr2[i];
    
    unordered_map<long long, long long> freq;
    freq[0] = 1;
    
    long long prefix1 = 0;
    long long prefix2 = 0;
    long long cnt = 0;
    
    for (int i = 0; i < N; i++)
    {
        prefix1 += arr1[i];
        prefix2 += arr2[i];
        
        long long key = prefix1 - prefix2;
        cnt += freq[key];
        freq[key]++;
    }
    cout << cnt << '\n';
    free(arr1);
    free(arr2);
    
    return 0;
}


