#include<stdio.h>
int main()
{
    float r,h,pi=3.14,Area,Volume;
    printf("Enter the radius of cylinder:");
    scanf("%f",&r);
    printf("\nEnter the height of cylinder:");
    scanf("%f",&h);
    Area=((2*pi*r*r)+(2*pi*r*h));
    Volume=pi*r*r*h;
    printf("The Surface area of cylinder is=%2.f",Area);
    printf("\nThe volume of cylinder is=%.2f",Volume);
    return 0;
}