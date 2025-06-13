#include<stdio.h>
int main()
{
    float u,a,t,velocity,distance;
    printf("Enter initial velocity:");
    scanf("%f",&u);
    printf("\nEnter acceleration:");
    scanf("%f",&a);
    printf("\nEnter time:");
    scanf("%f",&t);
    velocity=u+(a*t);
    distance=u+(a*t*t);
    printf("The final velocity is=%1.f",velocity);
    printf("\nThe distance travelled is=%1.f",distance);
    return 0;
}