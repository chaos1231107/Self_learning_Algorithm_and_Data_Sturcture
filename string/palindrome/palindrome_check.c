#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int palindrome = 1;
    int len;
    scanf("%s", s);
    
    len = strlen(s);
    
    for (int i = 0; i < len/2; i++)
    {
        if (s[i] != s[len-i-1])
        {
            palindrome = 0;
            break;
        }
    }
    
    printf("%d\n", palindrome);
    return 0;
}
