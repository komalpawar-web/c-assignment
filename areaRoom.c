#include<stdio.h>
int main()
{
    float l,b,h;
    float dw,dh,ww,wh,darea,wallarea,warea,paintarea,roofarea;
    printf("Enter length,breadth,height of room:");
    scanf("%f%f%f",&l,&b,&h);
    printf("\nEnter width and height of the door:");
    scanf("%f%f",&dw,&dh);
    printf("\nEnter width and height of window:");
    scanf("%f%f",&ww,&wh);

    wallarea=2*h*(l+b);
    darea=dw*dh;
    warea=ww*wh;

    paintarea=wallarea-darea-(2*warea);
    roofarea=l*b;

    printf("\nArea to be painted=%.2f",paintarea);
    printf("\nArea to be whitewashed=%.2f",roofarea);

    return 0;


}