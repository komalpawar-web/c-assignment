#include <stdio.h>
int main()

{
    int i, n, cnt = 0;
    printf("Enter number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
   
    if (cnt == 2)
        printf("Prime Number");
    else
        printf("Not prime number");

    return 0;
}