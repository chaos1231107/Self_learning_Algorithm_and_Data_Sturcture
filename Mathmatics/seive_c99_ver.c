#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void seive(int a, int b)
{
    bool prime[b+1];
    for (int i = 0; i <= b; i++)
    {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    
    for (int p = 2; p <= b; p++)
    {
        if (prime[p])
        {
            for (int i = p*p; i <= b; i+=p)
            {
                prime[i] = false;
            }
        }
    }
    
    int primes[b+1];
    int len = 0;
    int minprime = b+1;
    
    for (int i = a; i <= b; i++)
    {
        if (prime[i])
        {
            primes[len++] = i;
            if (i < minprime)
                minprime = i;
        }
        
    }
    
    int sum = 0;
    
    if (len == 0)
        printf("-1\n");
    else
    {
        for (int i = 0; i < len; i++)
        {
            sum += primes[i];
        }
        printf("%d\n%d", sum, minprime);
    }
        
    
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    seive(a,b);
    return 0;
}
