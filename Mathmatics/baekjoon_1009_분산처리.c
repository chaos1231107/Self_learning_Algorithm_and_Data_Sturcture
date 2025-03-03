#include <stdio.h>

#define MOD 10

int main()
{
    int T;
    //int a, b;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int data_num = a;
        
        for (int i = 1; i < b; i++)
        {
            data_num *= a;
            data_num = (data_num % MOD) % MOD;
        }
        
        if (data_num % MOD == 0)
        {
            printf("%d\n", MOD);
        }
        
        else
        {
            printf("%d\n", data_num % MOD);
        }
    }

    return 0;
}
