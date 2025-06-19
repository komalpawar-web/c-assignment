#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter quadrant points x and y:");
    scanf("%d%d",&x,&y);

    if(x==0&&y==0)
    printf("points lies on origin.");
    else if(x>0&&y>0)
    printf("point lies on Quadrant 1.");
    else if(x<0&&y>0)
    printf("Points lies on Quadrant 2.");
    else if(x<0&&y<0)
    printf("Points lies on Quadrant 3.");
    else if(x>0&&y<0)
    printf("Points lies on Quadrant 4.");
    else if(x==0)
    printf("point lies on y-axis");
    else if(y==0)
    printf("point lies on x-axis");
    

    return 0;
}