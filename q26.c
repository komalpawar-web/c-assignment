#include <stdio.h>
int main()
{
    int n, rev = 0;

    printf("Enter a number:");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("\nReverse of %d is %d", temp, rev);
    return 0;
}