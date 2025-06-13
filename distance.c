#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter x and y coordinate of first point:");
    scanf("%f%f",&x1,&y1);
    printf("Enter x and y coordinate of second point:");
    scanf("%f%f",&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance between two points is=%.2f",distance);
    return 0;


}