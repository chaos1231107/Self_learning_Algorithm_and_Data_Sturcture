#include <bits/stdc++.h>
using namespace std;
#define MAX 15

int cnt = 0;
int flag_row[MAX*2]; //행
int flag_left_line[MAX*2]; //왼쪽 대각선
int flag_right_line[MAX*2]; //오른쪽 대각선
//int pos[MAX+1]; 

void set_Q(int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (!flag_row[i] && !flag_left_line[x+i] && !flag_right_line[x-i+n])
        {
            flag_row[i] = flag_left_line[x+i] = flag_right_line[x-i+n] = 1;
            //pos[x] = i;
            
            if (x == n-1)
                cnt++;
            
            else
                set_Q(n, x+1);
            //백트랙킹
            flag_row[i] = flag_left_line[x+i] = flag_right_line[x-i+n] = 0;
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    memset(flag_row, 0, sizeof(flag_row));
    memset(flag_left_line, 0 , sizeof(flag_left_line));
    memset(flag_right_line, 0 , sizeof(flag_right_line));
    
    int n; 
    cin >> n;
    cnt = 0;
    set_Q(n, 0);
    
    cout << cnt << '\n';
    return 0;

}
