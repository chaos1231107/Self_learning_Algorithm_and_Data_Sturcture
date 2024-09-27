#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    while (b != 0)
    {
        long long int temp = a % b;
        a = b;
        b = temp;
    }
    return a; 
}

long long int lcm(long long int a, long long int b) // lcm * gcd = a*b
{
    return a*b / gcd(a,b);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << " " << lcm(a,b);
    return 0;
}