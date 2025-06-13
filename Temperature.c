#include<stdio.h>
int main()
{
    float t,celsius,kelvin;
    printf("Enter Tempertaure in fahrenheit:");
    scanf("%f",&t);
    celsius=(5.0/9.0*(t-32));
    kelvin=celsius+273.15;
    printf("The tempertaure in celsius is=%.2f",celsius);
    printf("\nThe temperature in kelvin is=%.2f",kelvin);
    return 0;
}