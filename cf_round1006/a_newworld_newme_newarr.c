#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	while (n--)
	{
		int n, k, p;
		scanf("%d %d %d", &n, &k, &p);
		if (k < 0)
			k *= -1;

		int	min_possible = n * (-p);
		int	max_possible = n * p;
		if (k < min_possible || k > max_possible)
			printf("-1\n");
		else
		{
			k = abs(k);
			int	op_num = (k + p - 1) / p;
			printf("%d\n", op_num);
		}
	}
}
