#include <stdio.h>

int gcd(int x, int y)
{
    if (x <= 0 || y <= 0) return -1;
    
    while (y != 0)
    {
        int temp =  x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main()
{
    int x;
    int y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", gcd(x, y));

    return 0;
}
