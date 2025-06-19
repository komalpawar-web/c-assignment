#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Min is %.1f",fmin(a,fmin(b,c)));
    return 0;
}