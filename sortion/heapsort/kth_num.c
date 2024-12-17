#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

static void downheap(int a[], int left, int right)
{
	int temp = a[left];
	int parent = left;
	int child;
	while (2*parent+1 <= right)
	{
		int cl = 2 * parent + 1;
		int cr = cl + 1;
		child = (a[cr] <= right && a[cr] > a[cl])? cr : cl;

		if (temp >= child) break;
		a[parent] = child;
		parent =child;
	}
	a[parent] = temp;
}

void heapsort(int a[], int n)
{
	for (int i = (n-1)/2; i >= 0; i--)
		downheap(a, 0, n-1);
	for (int i = n-1; i > 0; i--)
	{
		swap(int, a[0], a[i]);
		downheap(a, 0, i-1);
	}

}

int main()
{
	int nx;
	int k;
	scanf("%d" "%d", &nx, &k);
	//int *x = calloc(nx, sizeof(int));

	if (k < 1 || k > nx) printf("invalid k value\n");
	int *x = calloc(nx, sizeof(int));
	if (x == NULL) printf("Memory allocation failed\n");

	for (int i = 0; i < nx; i++)
		scanf("%d", &x[i]);
	heapsort(x, nx);

	printf("%d", x[k-1]);
	free(x);
	return 0;

}
