#include<stdio.h>
int main()
{
    float l,b,h,area,volume;
    printf("Enter length of cuboid:");
    scanf("%f",&l);
    printf("Enter breadth of cuboid:");
    scanf("%f",&b);
    printf("Enter height of cuboid:");
    scanf("%f",&h);
    area=2*((l*b)+(l*h)+(b*h));
    volume=l*b*h;
    printf("The surface area of cuboid is=%.2f",area);
    printf("\nThe volume of cuboid is=%.2f",volume);
    return 0;
}