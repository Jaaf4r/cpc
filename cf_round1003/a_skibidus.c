#include <stdio.h>
#include <unistd.h>

int	main()
{
	int		input;
	char	s[100];

	scanf("%d", &input);
	while (input > 0)
	{
		scanf("%99s", s);
		char	*p = s;
		int 	size;
		for (size = 0; p[size]; size++) ;
		if (p[size - 2] == 'u' && p[size - 1] == 's')
		{
			for (int i = 0; i < size - 2; i++)
			{
				write(1, p, 1);
				p++;
			}
			write(1, "i", 1);
			p[size - 1] = '\0';
			write(1, "\n\n", 2);
		}
		input--;
	}
}
