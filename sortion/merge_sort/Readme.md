## Simple Scheme about merge sort
![image](https://github.com/user-attachments/assets/d187faed-2690-44b6-a595-71be78b17d12)

#include <stdio.h> </br> <br/>
#include <stdlib.h>

#define swap (type, x, y) do {type t = x; x = y; y = t;} while(0) </br> <br/>
// buffer array </br> <br/>
static int *buff;

static void __mergesort(int a[], int left, int right)

{

    if (left < right)
    
    {
        int i;
        int j = 0;
        int p = 0; // buffer pointer
        int k = left; 
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
// mergersort function </br> <br/>
int mergesort(int a[], int n)
{

    buff = (int *)calloc(n, sizeof(int));
    if (buff == NULL) return -1;
    __mergesort(a, 0, n-1); // mergesort : merge n arrays
    free(buff);
    return 0;
}

