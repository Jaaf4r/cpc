#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res[5000];
    int i = 0;
    int j = 0;
    while (j < n)
    {
        res[j] = arr[i] + arr[i+1];
        printf("%d ", res[j]);
        i += 2;
        j++;
    }
}
