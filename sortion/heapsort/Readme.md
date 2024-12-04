## Tree
![image](https://github.com/user-attachments/assets/57a459be-6111-4217-8dd9-04272ad06373)

## Heapify(downheap)
![image](https://github.com/user-attachments/assets/3f8de4af-8d8a-40ca-9191-32cf552060c1)


## Source Code C Version
### Assential two steps for heapsort

## 1. Heapify and convert heap to array

static void downheap (int a[], int left, int right)

{

    int temp = a[left];
    
    int child, parent;
    
    for (parent = left; parent < (right+1)/2; parent=child) 
    
    {
        int cl = parent * 2 + 1; // left child
        int cr = cl + 1;    // right child
        child = (cr <= right && a[cr] > a[cl])? cr : cl; // select bigger value
        if (temp >= a[child]) break;
        a[parent] = a[child];
    }
    
    a[parent] = temp; // declare root
    
}

## 2. Build complete heap by sorting part to entire heap 

void heapsort(int a[], int n)

{

    for (int i = (n-1)/2; i >= 0; i--)
        downheap(a, i, n-1);
        
    for (int i = n-1; i > 0; i--)
    {
        swap(int, a[0], a[i]); //swap i th element and root of heap
        downheap(a, 0, i-1); 
    }
}

## CPP Version

#include <iostream> </br> <br/>
#include <vector> </br> <br/>
#include <algorithm>  </br> <br/>
using namespace std;  </br> <br/>

static void downheap (vector<int>& a, int left, int right) </br> <br/>
{

    int temp = a[left];
    int child, parent;
    
    for (parent=left; parent < (right+1)/2; parent=child)
    {
        int cl = 2*parent+1;
        int cr = cl + 1;
        child = (cr <= right && a[cr] > a[cl]) ? cr : cl;
        if (temp >= a[child]) break;
        a[parent] = a[child];
    }
    a[parent] = temp;
}

void heapsort (vector<int> &a, int n)

{

    for (int i = (n-1)/2; i >= 0; i--) 
        downheap(a, i, n-1);
        
    for (int i = n-1; i > 0; i--)
    {
        swap(a[0], a[i]);
        downheap(a,0,i-1);
    }
}

int main()

{

    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    heapsort(arr, n);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
    
}
