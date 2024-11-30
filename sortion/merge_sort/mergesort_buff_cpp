#include <iostream>
#include <vector>
using namespace std;

static void __mergesort(vector<int> &a, int left, int right, vector<int>& buff)
{
    if (left < right)
    {
        int p = 0;
        int i;
        int j = 0;
        int k = left;
        int center = (left+right)/2;
        
        __mergesort(a, left, center, buff);
        __mergesort(a, center+1, right, buff);
        
        for (i = left; i <= center; i++)
            buff[p++] = a[i];
        while (j < p && i <= right)
            a[k++] = (buff[j] < a[i])? buff[j++] : a[i++];
        while (j < p) a[k++] = buff[j++]; 
        //while (i <= right) a[k++] = a[i++];
    }
}

int merge(vector<int>& a)
{
   try
   {
       vector<int> buff(a.size());
       __mergesort(a, 0, a.size()-1, buff);
   }
   
   catch (const bad_alloc& e) 
   {
        return -1;
   }
   return 0;
}
int main()
{
    int nx;
    cin >> nx;
    vector<int> x(nx);
    
    for (int i = 0; i < nx; i++)
    {
        cin >> x[i];
    }
    
    merge(x);
  
    
    for (int i = 0; i < nx; i++)
    {
        cout << x[i] << '\n';
    }
    return 0;
}
