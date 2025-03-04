#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

vector<int> seive(int n, int a, int b)
{
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    
    for (int p = 2; p*p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p*p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
