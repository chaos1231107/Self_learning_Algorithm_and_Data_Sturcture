#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int cnt = 0;

int recursion(const char *s, int l, int r)
{
    cnt++;
    if(l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s)-1);
}

int main()
{
    int T;
    scanf("%d", &T);
    
    //int (*res)[2] = malloc(T*sizeof(int[2]));
    int **res = NULL;
    res = (int**)malloc(sizeof(int*)*T);
    for (int i = 0; i < T; i++)
    {
        res[i] = (int*)malloc(sizeof(int)*2);
    }
    
    char s[1001];
    //int res[T][2];
    
    for (int i = 0; i < T; i++)
    {
        scanf("%s", s);
        cnt = 0;
        int result = isPalindrome(s);
        res[i][0] = result;
        res[i][1] = cnt;
        //printf("%d %d\n", result, cnt);
    }
    
    for (int i = 0; i < T; i++)
    {
        printf("%d %d\n", res[i][0], res[i][1]);
    }
    
    free(res);
    return 0;
}
