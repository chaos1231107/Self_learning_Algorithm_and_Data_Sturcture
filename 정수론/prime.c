#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
	//int *arr = calloc(n-m+1, sizeof(int));
	scanf("%d %d", &m, &n);
	if (m < 2) m = 2;
	int *arr = calloc(n-m+1, sizeof(int));

	if (arr == NULL) return 0;

	for (int i = 2; i*i <= n; i++)
	{
		if (i >= m && !arr[i-m])
		{
			for (int j = i*i; j <= n; j+=i)
				if (j >= m)
					arr[j-m] = 1; // none-prime
		}
		else if (i < m)
		{
			for (int j = i*i; j <= n; j+=i)
				arr[j-m] = 1;
		}
	}

	for (int i = 0; i < n-m+1; i++)
	{
	if (!arr[i])
		{
			printf("%d\n", i+m);
		}
	}	


	free(arr);
	return 0;
}
