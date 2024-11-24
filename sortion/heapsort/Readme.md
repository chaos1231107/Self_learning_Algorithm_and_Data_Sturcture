## Tree
![image](https://github.com/user-attachments/assets/57a459be-6111-4217-8dd9-04272ad06373)

## Heapify(downheap)
![image](https://github.com/user-attachments/assets/3f8de4af-8d8a-40ca-9191-32cf552060c1)


## Source Code

static void downheap (int a[], int left, int right)
{
    int temp = a[left];
    int child, parent;
    for (parent = left; parent <= (right+1)/2; parent=child)
    {
        int cl = parent * 2 + 1;
        int cr = cl + 1;
        child = (cr <= right && a[cr] > a[cl])? cr : cl;
        if (temp >= child) break;
        a[parent] = a[child];
    }
    a[parent] = temp;
}

void heapsort(int a[], int n)
{
    for (int i = (n-1)/2; i >= 0; i--)
        downheap(a, i, n-1);
        
    for (int i = n-1; i > 0; i--)
    {
        swap(int, a[0], a[i]);
        downheap(a, 0, i-1)
    }
}
