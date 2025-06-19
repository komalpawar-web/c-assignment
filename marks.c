#include<stdio.h>
int main()
{
    float m1,m2,m3,total,avg;
    printf("\nENter marks of subject 1:");
    scanf("%f",&m1);
    printf("\nENter marks of subject 2:");
    scanf("%f",&m2);
    printf("\nENter marks of subject 3:");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg>90)
    printf("\nClass I.");
    else if(avg>=70&&avg<=90)
    printf("\nClass II.");
    else if(avg>=50&&avg<70)
    printf("\nClass III.");
    else
    printf("\nFail.");

    return 0;

}