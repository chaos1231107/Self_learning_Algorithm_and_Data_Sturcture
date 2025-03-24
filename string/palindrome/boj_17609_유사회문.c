#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int is_palindrome(const char *s, int left, int right, bool delete)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
             if (delete)
            {
                // 삭제시도 
                if (is_palindrome(s, left+1, right, false) == 0 || is_palindrome(s, left, right-1, false) == 0)
                {
                    return 1; 
                }
                    
                return 2 ;// 삭제시 회문이 아닐때 
            }
            return 2;
        }
        left++;
        right--;
    }
    return 0;
}
int main()
{
    int T;
    char s[100001];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", s);
        int result = is_palindrome(s, 0, strlen(s)-1, true);
        printf("%d\n", result);
    }

    return 0;
}
