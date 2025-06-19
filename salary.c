#include<stdio.h>
int main()
{
    float bs,tax;
    printf("ENter basic salary of employee:");
    scanf("%f",&bs);
    if(bs<150000)
    tax=0;
    else if(bs>=150000&&bs<=300000)
    tax=20;
    else if(bs>300000)
    tax=30;

    printf("\nThe tax is %.2f",tax);
    return 0;
}