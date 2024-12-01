#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	n;
	scanf("%d", &n);
	int m = n;
	int	a, b;
	int	*arr = malloc(sizeof(int) * n);
	int	i = 0;
	while (n--)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		arr[i] = a + b;
		i++;
	}
	i = 0;
	while (m--)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
