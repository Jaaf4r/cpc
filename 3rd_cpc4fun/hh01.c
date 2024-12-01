#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	s[7];
	int		n;

	scanf("%s", s);

	if (*(s + 1) == '0')
		n = atoi(s + 2);
	else
		n = atoi(s + 1);

	if (n % 2 == 0)
		printf("0\n");
	else
		printf("1\n");
}
