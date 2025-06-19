#include<stdio.h>
int main()
{
    int id1,id2,id3,qty1,qty2,qty3;
    float total , discount,rate1,rate2,rate3;

    printf("ENter item 1 quantity:");
    scanf("%d",&qty1);
    printf("Enter rate of item 1:");
    scanf("%f",&rate1);
    printf("ENter item 2 quantity:");
    scanf("%d",&qty2);
    printf("Enter rate of item 2:");
    scanf("%f",&rate2);
    printf("ENter item 3 quantity:");
    scanf("%d",&qty3);
    printf("Enter rate of item 3:");
    scanf("%f",&rate3);

    total=(qty1*rate1)+(qty2*rate2)+(qty3*rate3);

    if(total>2000)
    discount=20;
    else if(total>=1000&&total<=2000)
    discount=15;
    else if(total>=500&&total<1000)
    discount=8;
    else
    discount=0;
    
    printf("%2.f %% discount on %2.f Rs.",discount,total);

    return 0;
}