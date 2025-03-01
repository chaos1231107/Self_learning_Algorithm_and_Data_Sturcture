#include <stdio.h>
#include <string.h>

static int cnt = 0;

int recursion(const char *s, int l, int r)
{
    cnt++;
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s)
{
    return recursion(s,0, strlen(s)-1);
}

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        char s[1001];
        scanf("%s", s);
        cnt = 0;
        int result = isPalindrome(s);
        printf("%d %d\n", result, cnt);
    }
    return 0;
}
