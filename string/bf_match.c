#include <stdio.h>
#include <stdlib.h>

int bf_match (const char *txt, const char *pat)
{
    int pt = 0; // txt cursor
    int pp = 0; // pat cursor
    while(txt[pt] != '\0' && pat[pp] != '\0')
    {
        if(txt[pt] == pat[pp])
        {
            pt++;
            pp++;
        }
        else
        {
            pt = pt - pp + 1;
            pp = 0;
        }
    }
    if(pat[pp] =='\0')
        return pt-pp;
    return -1;

}

int main()
{
    char s1[256];
    char s2[256];
    puts("브루드-포스법");
    printf("텍스트");
    scanf("%s", s1);
    printf("패턴");
    scanf("%s", s2);
    int idx = bf_match(s1, s2);

    if(idx == -1) 
    {
         puts("텍스트에 패턴이 없습니다");
    }

    else
    {
        printf("%d 문자부터 match 합니다\n", idx+1);
    }
        
}