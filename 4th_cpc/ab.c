#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = n;
    int arr[n];
    int i = 0;
    while (n--)
    {
        int input;
        
        scanf("%d", &input);
        int mod, div;
        mod = input % 10;
        div = input / 10;
        arr[i] = div + mod;
        i++;
    }
    for (i = 0; i < m; i++)
    {
        printf("%d\n", arr[i]);
    }
}