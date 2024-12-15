#include <iostream>
#include <vector>

using namespace std;
//static long long int n;
//long long int dp[n];
//long long int fib(long long int x, vector<long long int>& dp);

int main()
{
	long long int n;
	cin >> n;
	vector<long long int> dp(n);
	cout << fib(n);
}

long long int fib (long long int x, vector<long long int>& dp)
{
	if (x <= 2) return 1;

	if (dp[x] != 0) return dp[x];
	dp[x] = fib(x-1) + fib(x-2);

	return dp[x];
}

