#include <bits/stdc++.h>
using namespace std;
//static int cnt = 0;

bool is_arith(vector<int>& v, int number)
{
    v.clear();
    
    while (number != 0)
    {
        v.push_back(number % 10);
        number /= 10;
    }
    
    if (v.size() <= 2)
        return true;
    
    int difference = v[1] - v[0];
    for (int i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i-1] != difference)
            return false;
    }
    
    return true;
}

int main()
{
    int cnt = 0;
    int num;
    vector<int> v;
    cin >> num;
    
    for (int i = 1; i <= num; i++)
    {
        //int cnt = 0;
        if (is_arith(v, i))
            cnt++;
    }
 
    
    cout << cnt << endl;
    return 0;
}
