#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

void shaker(int a[], int n)
{
	int left = 0;
	int right = n-1;
	int last = right;
	int j;

	while (left < right)
	{
		for (j = n-1; j > left; j--)
		{
			if (a[j-1] > a[j])
			{
				swap(int, a[j-1], a[j]);
				last = j;
			}
		}
		left = last;

		for (j = left; j < right; j++)
		{
			if (a[j] > a[j+1])
			{
				swap(int, a[j], a[j+1]);
				last = j;
			}
		}
		right = last;
	}
}


int main()
{
	int nx;
	scanf("%d", &nx);
	int *x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++)
		scanf("%d", &x[i]);

	shaker(x, nx);

	for (int i = 0; i < nx; i++)
		printf("%d ", x[i]);

	free(x);
	return 0;
}
