#include <stdio.h>
#include <stdlib.h>

static int *buff;
static int count = 0;
static int k_elem = -1;
static void __mergesort(int a[], int left, int right,int K)
{
	if (left < right)
	{
		int p = 0;
		int j = 0;
		int i;
		int k = left;
		int center = (left+right)/2;

		__mergesort(a, left, center, K);
		__mergesort(a, center+1, right, K);

		for (i = left; i <= center; i++)
			buff[p++] = a[i];
		while (i <= right && j < p)
		{
			a[k++] = (buff[j] < a[i]) ? buff[j++] : a[i++];
			count++;
			if (count == K)
			{
				k_elem = a[k-1];
				return;
			}
		}
		while (j < p)
		{
			a[k++] = buff[j++];
			count++;
			if (count == K)
			{
				k_elem = a[k-1];
				return;
			}
		}

		while (i <= right)
		{
			a[k++] = a[i++];
			count++;
			if (count == K)
			{
				k_elem = a[K-1];
				return;
			}
		}
	}
}

int merge (int a[], int n, int K)
{
	buff = calloc(n, sizeof(int));
	if (buff == NULL) return -1;
	__mergesort(a, 0, n-1, K);
	free(buff);
	if (count < 12) return -1;
	else return k_elem;
}

int main()
{
	int nx, K;
	scanf("%d %d", &nx, &K);
	int *arr = calloc(nx, sizeof(int));
	for (int i = 0; i <nx; i++)
		scanf("%d", &arr[i]);
	int result = merge (arr, nx, K);

	printf("%d", result);
	free(arr);
	return 0;	
}
