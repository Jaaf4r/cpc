#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	n;
	scanf("%d", &n);

	int a, b;
	int	*arr = malloc(sizeof(int) * n);
	int	i = 0;
	int m = n;
	while (n--)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		int small = (a < b) ? a : b;
		while (1)
		{
			if (small % a == small % b)
			{
				break ;
			}
			small++;
		}
		arr[i++] = small;
	}
	for (int i = 0 ; i < m; i++)
	{
		printf("%d\n", arr[i]);
	}
}
