#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<=b&&a<=c)
    printf("\nMin is %d",a);
    else if(b<=a&&b<=c)
    printf("Min is %d",b);
    else
    printf("Min is %d",c);
    return 0;
}