#include <bits/stdc++.h>
using namespace std;
int non_self_num(int n)
{
    int result = n;
    //vector<int> v;
    while (n > 0)
    {
        //v.push_back(n % 10);
        result += n % 10;
        n /= 10;
    }
    //result += n;
    
    return result;
}

int main()
{
    //vector<int> str(10001, true);
    vector<int> is_self(10001, true);
    for (int i = 0; i < 10001; i++)
    {
        //string s = to_string(i);
        int num = non_self_num(i);
        if (num <= 10000)
        {
            is_self[num] = false;
        }
    }
    
    for (int i =1; i < 10001; i++)
    {
        if (is_self[i])
            cout << i << '\n';
    }
    
    return 0;
}
