#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long T;
    cin >> T;
    
    long long N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    long long M;
    cin >> M;
    vector<long long> B(M);
    for (int i = 0; i < M; i++)
        cin >> B[i];
    
    vector<long long> sum_A;
    for (int i = 0; i < N; i++)
    {
        long long sum = 0;
        for (int j = i; j < N; j++)
        {
            sum += A[j];
            sum_A.push_back(sum);
        }
    }
    
    vector<long long> sum_B;
    for (int i = 0; i < M; i++)
    {
        long long sum = 0;
        for (int j = i; j < M; j++)
        {
            sum += B[j];
            sum_B.push_back(sum);
        }
    }
    
    sort(sum_A.begin(), sum_A.end());
    sort(sum_B.begin(), sum_B.end());
    
    long long answer = 0;
    long long left = 0;
    long long right = sum_B.size() - 1;
    
    while (left < sum_A.size() && right >= 0)
    {
        long long current_sum = sum_A[left] + sum_B[right];
        
        if (current_sum == T)
        {
            long long a_val = sum_A[left];
            long long b_val = sum_B[right];
            long long a_count = 0, b_count = 0;

            while (left < sum_A.size() && sum_A[left] == a_val)
            {
                a_count++;
                left++;
            }

            while (right >= 0 && sum_B[right] == b_val)
            {
                b_count++;
                right--;
            }

            answer += a_count * b_count;
        }
        else if (current_sum < T)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}
