#include <iostream>
#include <vector>
using namespace std;
//static int *buff;
static void __mergesort(int *a, int *buff, int left, int right)
{
    if (left < right)
    {
        int p = 0;
        int i;
        int j = 0;
        int k = left;
        int center = (left+right)/2;
        
        __mergesort(a, buff, left, center);
        __mergesort(a, buff, center+1, right);
        
        for (i = left; i <= center; i++)
            buff[p++] = a[i];
        while (j < p && i <= right)
            a[k++] = (buff[j] < a[i])? buff[j++] : a[i++];
        while (j < p) a[k++] = buff[j++]; 
        //while (i <= right) a[k++] = a[i++];
    }
}

int merge(int *a, int n)
{
   try
   {
       int* buff = new int[n];
       __mergesort(a,buff, 0, n-1);
       delete[] buff;
   }
   
   catch (const bad_alloc& e)
   {
       return -1;
   }
   //delete[] buff;
   return 0;
}
int main()
{
    int nx;
    cin >> nx;
    int *x = new int[nx];
    
    for (int i = 0; i < nx; i++)
    {
        cin >> x[i];
    }
    
    merge(x, nx);
  
    
    for (int i = 0; i < nx; i++)
    {
        cout << x[i] << '\n';
    }
    
    delete[] x;
    return 0;
}
