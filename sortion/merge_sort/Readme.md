## Simple Scheme about merge sort
![image](https://github.com/user-attachments/assets/d187faed-2690-44b6-a595-71be78b17d12)

#include <stdio.h> </br> <br/>
#include <stdlib.h>

#define swap (type, x, y) do {type t = x; x = y; y = t;} while(0)

static int *buff;

static void __mergesort(int a[], int left, int right)

{

    if (left < right)
    
    {
        int i;
        int j = 0;
        int p = 0;
        int k = left;
        __mergesort(a, left, center);
        __mergesort(a, center+1, right);
        
        for (int i = left; i <= center; i++)
            buff[p++] = a[i];
        while (j < p && i <= right)
        {
            a[k++] = (buff[j] < a[i]) ? buff[j++] : a[i++];
        }
        
        while (j < p) a[k++] = a[i++];
    }
}
