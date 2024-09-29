#include <bits/stdc++.h>
using namespace std;
int f(int a1, int n, int a8)
{
    return a1*n + a8;
}
int g(int n)
{
    return n;
}
int main()
{
    int a1,a8;
    int c;
    int n;
    
    cin >> a1 >> a8;
    cin >> c;
    cin >> n;
    
    if (f(a1, n, a8) <= c*g(n) && a1 <= c)
    {
        cout << 1;
    }
    else 
    {
        cout << 0;
    }
    
}
https://en.wikipedia.org/wiki/Big_O_notation
