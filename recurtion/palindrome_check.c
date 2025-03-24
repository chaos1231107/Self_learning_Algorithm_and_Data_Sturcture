#include <stdio.h>
#include <string.h>
# define Max 101

int is_palindrome(const char *s, int left, int right)

{
    if (left >= right)
        return 1;
    if (s[left] != s[right])
        return 0;
    is_palindrome(s, left+1, right-1);
}

int main()
{
    char s[Max];
    scanf("%s", s);
    int result = is_palindrome(s, 0, strlen(s)-1);
    printf("%d", result);

    return 0;
}
