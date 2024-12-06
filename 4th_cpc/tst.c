// #include <stdio.h>

// int main()
// {
// 	int	n;
// 	scanf("%d", &n);
// 	int	m = n;
// 	int j = 0;
// 	int t;

// 	while (n--)
// 	{
// 		scanf("%d", &t);
// 		int	arr[t];
// 		int	i = 0;
// 		int	big = 0;
// 		int	big2;

// 		while (i < t)
// 		{
// 			scanf("%d", &arr[i]);
// 			if (big < arr[i])
// 				big = arr[i];
// 			i++;
// 		}
// 		i = 0;
// 		big2 = arr[0];
// 		while (i < t)
// 		{
// 			if (big2 < arr[i] && big != arr[i])
// 				big2 = arr[i];
// 			i++;
// 		}
// 		for (int i = 0; i < t; i++)
// 		{
// 			int k = 0;
// 			if(big != arr[i] || arr[i])
// 			{
// 				int def = arr[i] - big;
// 				//result[j][k] = def;
// 				printf("%d ", def);
// 			}
// 			else 
// 			{
// 				int deffe = big - big2;
				
// 				printf("%d ", deffe);
// 				//result[j][k] = def;
// 			}
// 			k++;
// 		}
// 		printf("\n");
// 		j++;
// 	}

// }