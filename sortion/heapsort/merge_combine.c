#include <stdio.h>
#include <stdlib.h>

void merge(long long int a[], long long int na, long long int b[],
	       	long long int nb, long long int c[])
{
	long long int pa = 0;
 	long long int pb = 0;
	long long int pc = 0;

	while (pa < na && pb < nb)
		c[pc++] = (a[pa] <= b[pb])? a[pa++] : b[pb++];
	while (pa < na)
		c[pc++] = a[pa++];
	while (pb < nb)
		c[pc++] = b[pb++];
}

int main()
{
	long long int na, nb;
	scanf("%lld %lld", &na, &nb);

	long long int *a = calloc(na, sizeof(long long int));
	long long int *b = calloc(nb, sizeof(long long int));
	long long int *c = calloc(na+nb, sizeof(long long int));

	for (long long int i = 0; i < na; i++)
		scanf("%lld", &a[i]);
	for (long long int i = 0; i < nb; i++)
		scanf("%lld", &b[i]);

	merge(a, na, b, nb, c);

	for(long long int i = 0; i < na + nb; i++)
		printf("%d ", c[i]);
	free(a);
	free(b);
	free(c);
	return 0;
}
