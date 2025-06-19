#include<stdio.h>
int main()
{
    int h,m,s;
    printf("ENter time in(HH MM SS):");
    scanf("%d%d%d",&h,&m,&s);

    if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
    printf("\nTime is valid %d:%d:%d",h,m,s);
    else
    printf("%d:%d:%d Time is not valid.",h,m,s);

    return 0;
    
}