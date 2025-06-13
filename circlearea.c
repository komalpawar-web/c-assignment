#include<stdio.h>
int main()
{
    float r,pi=3.14,Area,Circumference;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("The radius of circle is=%.2f",(pi*r*r));
    printf("\nThe circumference of circle is=%.2f",(2*pi*r));
    return 0;
}