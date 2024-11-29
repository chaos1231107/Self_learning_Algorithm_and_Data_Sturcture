#include <stdio.h>
#include <stdlib.h>
static int *buff;
static void __mergesort(int a[], int left, int right)
{
    if (left < right)
    {
        int i;
        int j = 0;
        int p = 0;
        int k = left;
        int center = (left+right)/2;
        
        __mergesort(a, left, center);
        __mergesort(a, center+1, right);
        
        for (i = left; i <= center; i++)
            buff[p++] = a[i];
        
        while (j < p && i <= right)
            a[k++] = (buff[j] < a[i])? buff[j++] : a[i++];
        
        while (j < p) a[k++] = buff[j++];
    }
    
}

int merge(int a[], int n)
{
    //if (buff = calloc(n, sizeof(int)) == NULL) return -1;
    buff = calloc(n, sizeof(int));
    if (buff == NULL) return -1;
    __mergesort(a, 0, n-1);
    free(buff);
    return 0;
}
int main()
{
    int nx;
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    
    for (int i = 0; i < nx; i++)
    {
        scanf("%d", &x[i]);
    }
    
    merge(x, nx);
    
    for (int i = 0; i < nx; i++)
    {
        printf("%d\n", x[i]);
    }
    //printf("Hello World");
    free(x);
    return 0;
}
