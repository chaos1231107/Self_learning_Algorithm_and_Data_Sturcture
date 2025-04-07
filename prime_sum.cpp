#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n;
	cin >> n;
	vector<bool> prime_check(n+1, true);
	vector<long long int> prime;
	prime_check[0] = prime_check[1] = false;

	for (long long int i = 2; i*i <= n; i++)
	{
		if (prime_check[i])
		{
			for (long long int j = i*i; j <= n; j+=i)
			{
				prime_check[j] = false;
			}
		}
	}

	for (long long int i = 2; i <= n; i++)
	{
		if (prime_check[i])
			prime.push_back(i);
	
	}

	long long int left = 0;
	long long int right = 0;
	long long int cnt = 0;
	long long int sum = 0;

	while (right < prime.size())
	{
		sum += prime[right];
		right++;

		while(sum > n && left < right)
		{
			sum -= prime[left];
			left++;
		}

		if (sum == n) cnt++;
	}

	cout << sum << endl;

	return 0;
}
