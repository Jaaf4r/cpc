#include <stdio.h>

char    *easy_prob(int n, int *arr)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (arr[i] == 1)
        {
            return ("HARD");
            break;
        }
        i++;
    }
    return ("EASY");
}

int main(void)
{
    int n;
    int arr[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%s\n", easy_prob(n, arr));
}