## Simple sheme about quick sort 

![image](https://github.com/user-attachments/assets/e141c2fa-85a8-4fba-b6f3-b9b9de86ae95)

## Assential Steps for quicksort

### 1. Devide array 
    int pl = left;
    int pr = right;
    int center = a[(pl+pr)/2];
    do
    {
        while (a[pl] < center) pl++;
        while (center < a[pr]) pr--;
        
        if (pl <= pr)
        {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
        
    }while (pl <= pr);
    
### 2. Sort Devided array (Conquer)
  
    if (pl < right) quick(a, pl, right);
    if (left < pr) quick(a, left, pr);
### Quick sort

void quick(int a[], int left, int right)
{

    int pl = left;
    int pr = right;
    int center = a[(left+right)/2];
    
    do 
    {
        while (a[pl] < center) pl++; //search untill a[pl] >= center
        while (center < a[pr]) pr--;
        
        if (pl <= pr) // if bigger value located right index
        {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    }while (pl <= pr);
    
    if (pl < right) quick (a, pl, right);
    if (left < pr) quick (a, left, pr);
}

### Entire source code

#include <stdio.h> </br> <br/>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void quick(int a[], int left, int right)
{

    int pl = left;
    int pr = right;
    int center = a[(left+right)/2];
    
    do 
    {
        while (a[pl] < center) pl++; //search while a[pl] >= center
        while (center < a[pr]) pr--;
        
        if (pl <= pr) // if bigger value located right index
        {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    }while (pl <= pr);
    
    if (pl < right) quick (a, pl, right);
    if (left < pr) quick (a, left, pr);
}

int main()

{

    int nx;
    
    scanf("%d", &nx);
    int *arr = calloc(nx, sizeof(int));
    for (int i = 0; i < nx; i++)
    {
        scanf("%d", &arr[i]);
    }
    quick(arr, 0, nx-1);
    
    for (int i = 0; i < nx; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}
