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
{
## Caution
### When using Dynamic Memory Allocation, be aware of the pointer and problem of run time error </br> <br/> (delete allocated memory)

