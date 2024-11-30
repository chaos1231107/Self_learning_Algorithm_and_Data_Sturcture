## Simple Scheme about merge sort
![image](https://github.com/user-attachments/assets/d187faed-2690-44b6-a595-71be78b17d12)

#include <stdio.h> </br> <br/>
#include <stdlib.h>

#define swap (type, x, y) do {type t = x; x = y; y = t;} while(0) </br> <br/>
// buffer array </br> <br/>
static int *buff;

static void __mergesort(int a[], int left, int right) </br> <br/>

{

    if (left < right)
    
    {
        int i;
        int j = 0;
        int p = 0; // buffer pointer
        int k = left; 
        int center = (left + right) / 2;
        __mergesort(a, left, center); 
        __mergesort(a, center+1, right);
        
        for (int i = left; i <= center; i++)
            buff[p++] = a[i];  // copy left side of array
        while (j < p && i <= right)
        {
            a[k++] = (buff[j] < a[i]) ? buff[j++] : a[i++]; // merge array : choose lower value
        }
        
        while (j < p) a[k++] = buff[j++]; // copy rest of array values
    }
}
</br> <br>
// mergersort function </br> <br/>

int merge(int a[], int n) </br> <br/>

{

    //if (buff = calloc (n, sizeof(int) == NULL)) return -1;
    buff = calloc(n, sizeof(int));
    if (buff == NULL) return -1;
    __mergesort(a, 0, n-1); // mergesort : merge n arrays
    free(buff);
    return 0;
}

int main() </br> <br/>

{

    int nx;
    scanf("%d", &nx);
    int *arr = calloc(nx, sizeof(int));
    if (arr==NULL) return -1;
    
    for (int i = 0; i < nx; i++)
    {
        scanf("%d ", &arr[i);
    }
    merge(arr, nx);
    for (int i = 0; i < nx; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
{

## Caution
### When using Dynamic Memory Allocation (calloc or malloc) </br> <br/> be aware of the pointer and problem of run time error </br> <br/> (delete allocated memory) </br> <br/> ex) free(buff)

    buff = calloc(n, sizeof(int));
    if (buff == NULL) return -1;
    __mergesort(a, 0, n-1); // mergesort : merge n arrays
    free(buff);
--------------------------------------------------------------------------
    int *arr = calloc(nx, sizeof(int));
     merge(arr, nx);
    for (int i = 0; i < nx; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;

## CPP Version

#include <iostream> </br> <br/>
#include <vector>  </br> <br>
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
   
   return 0; </br> <br/>
   
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
