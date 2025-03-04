#include <stdio.h>
long long GCD(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
// GCD * LCM = a * b
long long LCM(long long a, long long b) 
{
    return a * b / GCD(a,b);
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    long long gcd = GCD(a,b);
    long long lcm = LCM(a,b);
    printf("%lld\n%lld", gcd, lcm);

    return 0;
}
