#include <stdio.h>

int main()
{
    int n,res;
    scanf("%d", &n);
    int k = n;
    
    int stock[n];
    int i = 0;
    
    while (n--)
    {
        int m = 0;
        int len;
        scanf("%d", &len);
        char s[len];
        scanf("%s", s);
        int arr[256] = {0};
        for (int j = 0; j < len; j++)
        {
            arr[s[j]] = 1;
        }
        for (int j = 0; j < 256; j++)
        {
            if (arr[j] == 1)
            {
                m++;
            }
        }
        res = m + len;
        stock[i] = res;
        i++;

    }
    for (i = 0; i < k; i++)
    {
        printf("%d\n", stock[i]);
    }
}