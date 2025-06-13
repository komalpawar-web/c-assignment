#include<stdio.h>
int main()
{
    int a,b,Am,Hm;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    Am=(a+b)/2;
    Hm=a*b/(a+b);
    printf("Arithmetic mean=%d",Am);
    printf("\nHarmonic mean=%d",Hm);
    return 0;
}