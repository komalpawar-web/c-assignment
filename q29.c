#include <stdio.h>
int main()
{
    int n, i, cnt = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("\n%d", i);
            cnt++;
        }
    }
    printf("\nCount=%d", cnt);
    return 0;
}