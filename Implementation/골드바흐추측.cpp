#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

static int arr[MAX+1];
// 0 --> prime
// 1 --> not prime 
void prime_check()
{
    arr[0] = arr[1] = 1;
    for (int i = 2; i*i <= MAX; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i*i; j <= MAX; j+=i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    prime_check();
    
    
    while(cin >> n)
    {
        //cin >> n;
        if (n == 0)
        {
            break;
        }
        
        bool found = false;
        if (n % 2 == 0)
        {
            for (int i = 3; i <= n / 2; i += 2)  // 3부터 시작하여 n/2까지 탐색
            {
                if (arr[i] == 0 && arr[n - i] == 0)  // 두 숫자가 소수일 때
                {
                    cout << n << " = " << i << " + " << n - i << "\n";
                    found = true;
                    break;
                }
            }
        }
        
        if (!found)
        {
            cout << "Goldbach's conjecture is wrong.\n";
        }
        
        
        
            
    }   
    
    

    return 0;
}
