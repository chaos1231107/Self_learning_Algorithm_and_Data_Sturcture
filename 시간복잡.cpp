

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}
*/


#include <bits/stdc++.h>
using namespace std;
long long int pow(long long int a,long long int b)
{
    long long int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    cout << pow(n,3) << '\n' << 3;

    return 0;
}

