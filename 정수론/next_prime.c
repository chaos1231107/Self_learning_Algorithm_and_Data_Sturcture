#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	//int i;
	int *v = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		v[i] = 1; //prime

	for (int i = 2; i <= n; i++)
	{

		if (v[i])
		{
			for (int j = i*i; j <= n; j+=i)
				v[j] = 0; //not prime
		}

	}

	for (int i = 2; i <= n; i++)
		printf("%d\n", i+1);
	free(v);
	
	return 0;
} 
