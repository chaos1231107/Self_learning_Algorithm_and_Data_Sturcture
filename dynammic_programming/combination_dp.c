#include <stdio.h>
#include <stdlib.h>

int combination(int n, int r)
{
    int arr[31][31];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            if (i == j || j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    return arr[n][r];
    
}

int main()
{
    int t;
    int n, m;
//    int ary[100];
    scanf("%d", &t);
    int *ary = calloc(t, sizeof(int));
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        int result = combination(m, n);
        ary[i] = result;
    }
    
    for (int i = 0; i < t; i++)
        printf("%d\n", ary[i]);
        
    free(ary);
    return 0;
}
