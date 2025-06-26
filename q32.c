#include <stdio.h>
int main()
{
    int n, i, cnt = 0, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            printf("\n%d",i);
            sum += i;
        }
    }
    printf("\nSum=%d", sum);
     printf("\nCount=%d", cnt);
    return 0;
}