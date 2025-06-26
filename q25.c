#include <stdio.h>
#include<math.h>
int main()
{
    int n, temp,cnt=0,rem;
    float result=0;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;
    while (n >0)
    {
        cnt++;
        n/=10;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        result=result+pow(rem,cnt);
        n/=10;
    }
    (result == temp) ? printf("Armstrong Number.") : printf("Not Armstrong Number.");
    return 0;
}