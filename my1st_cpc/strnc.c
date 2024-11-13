#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int n;
	scanf("%d", &n);
	char kk[] = "codeforces";
	char gg[n][10];

	i = 0;
	while (i < n)
	{
		int j = 0;
		int t = 0;
		int count = 0;
		scanf("%s", &gg[i]);
		while (j < 10)
		{
			if (gg[i][j] != kk[t])
				count++;
			t++;
			j++;
		}
		printf("%d ", count);
		i++;
	}
	
}