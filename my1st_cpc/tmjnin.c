#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	char *hash = "##";
	char *pts = "..";

	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((j % 2 == 1 && i % 2 == 1))
				printf("%s\n%s\n", hash, hash);
			else if ((j % 2 == 0 && i % 2 == 0))
				printf("%s\n%s\n", pts, pts);
			else if (j % 2 == 1 && i % 2 == 0)
				printf("%s\n%s", hash, hash);
			else if (j % 2 == 0 && i % 2 == 1)
				printf("%s\n%s", pts, pts);
		}
		printf("\n");
	}
}
