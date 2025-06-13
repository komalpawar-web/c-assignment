#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping value of a and b=%d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping value of a and b=%d and %d",a,b);
    

    printf("\n-----------------------------------------");
    printf("\nWithout Using Temporary variable");
    int x,y;
    printf("\nEnter two numbers:");
    scanf("%d%d",&x,&y);
    printf("\nBefore swapping value of x and y=%d and %d",x,y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("\nAfter swapping value of x and y=%d and %d",x,y);


    printf("\n-----------------------------------------------------");
    printf("\nUsing temperory variable");
    int n1,n2,temp;
    printf("\nEnter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("\nBefore swapping value of n1 and n2=%d and %d",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\nAfter swapping value of n1 and n2=%d and %d",n1,n2);
    return 0;


    
}