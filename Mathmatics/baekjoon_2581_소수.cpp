#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

vector<int> sieve(int n, int a, int b) 
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    
    for (int p = 2; p * p <= n; p++) 
    {
        if (prime[p]) 
        {
            for (int i = 2 * p; i <= n; i += p) 
                prime[i] = false;
        }
    }
    
    vector<int> primes;
    for (int p = a; p <= b; p++) 
    {
        if (prime[p]) 
            primes.push_back(p);
    }

    return primes;  // Return the prime numbers found in the range [a, b]
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    vector<int> primes = sieve(b, a, b);
    int sum = 0;
    int minprime = INT_MAX;

    for (int prime : primes) 
    {
        sum += prime;
        minprime = min(minprime, prime);
    }

    if (primes.empty()) 
        cout << -1 << endl;
    else 
        cout << sum << endl << minprime << endl;

    return 0;
}
