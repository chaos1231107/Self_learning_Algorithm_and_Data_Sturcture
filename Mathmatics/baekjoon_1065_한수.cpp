// C++17 ver
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

//C99 ver
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_arith_seq(int number)
{
    int digits[10];
    int len = 0;
    while (number > 0)
    {
        digits[len++] = number % 10;
        number /= 10;
    }
    
    for (int i = 0; i < len/2; i++)
    {
        int temp = digits[i];
        digits[i] = digits[len - i -1];
        digits[len - i - 1] = temp;
    }
    
    if (len <= 2) 
        return true;
    
    int difference = digits[1] - digits[0];
    for (int i = 2; i < len; i++)
    {
        if (digits[i] - digits[i-1] != difference)
            return false;
    }
    
    return true;
}
int main()
{
    int number;
    int cnt = 0;
    //int arr[1001];
    //int len = sizeof(arr) / sizeof(int);
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++)
    {
        if (is_arith_seq(i))
            cnt++;
    }
    
    printf("%d", cnt);
    return 0;
}
