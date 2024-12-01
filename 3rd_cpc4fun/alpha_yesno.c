#include <stdio.h>

int main()
{
	char	s[11];

	scanf("%s", s);
	int	total = 0;
	int	alpha_pos;
	for (int i = 0; s[i]; i++)
	{
		alpha_pos = s[i] - 'A' + 1;
		total = (total + (alpha_pos % 2)) % 2;
	}
	if (total == 0)
		printf("NO\n");
	else
		printf("YES\n");
}

// WRONG --- NOT SOLVED