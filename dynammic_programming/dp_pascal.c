#include <stdio.h>

long long combination(long long n, long long r)
{
    long long table[400][400];
    long long count, countN, countR;
    long long result;
    
    table[0][0] = 1;
    for (count = 1; count <= r; count++)
    {
        table[0][count] = 0;
    }
    
    for (countN=1; countN<=n; countN++)
    {
        for (countR=0; countR<=r; countR++)
        {
            if (countN == countR)
                table[countN][countR] = 1;
            else if(countR == 0)
                table[countN][countR] = 1;
            else
                table[countN][countR] = table[countN-1][countR-1] + table[countN-1][countR];
        }
    }
    return table[n-1][r-1];
}

int main()
{
    long long n, r;
    scanf("%lld %lld", &n, &r);
    printf("%lld", combination(n,r));
    return 0;
}
