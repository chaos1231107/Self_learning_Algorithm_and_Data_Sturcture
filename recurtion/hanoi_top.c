#include <stdlib.h>
int cnt = 0;
void move(int no, int x, int y)
{
        if (no > 1)
                move(no-1, x, 6-x-y);
        printf ("%d %d\n", x, y);
        cnt++;

        if (no > 1)
                move(no-1, 6-x-y,y);
}
int main()
{
        int n;
        scanf("%d", &n);
        printf("%d\n", (1<<n) -1);
        move(n, 1, 3);
//      printf("%d\n", cnt);

        return 0;
}
