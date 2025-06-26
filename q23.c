#include <stdio.h>
int main()
{
    int  n,digit,even=0,odd=0,zero=0,total=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n > 0)
    {
        digit=n%10;
        total++;
        if(digit==0)
        zero++;
        else if(digit%2==0)
        even++;
        else
        odd++;

        n=n/10;


    }
    printf("Even digits:%d\n",even);
    printf("Odd digits:%d\n",odd);
    printf("Zero digits:%d\n",zero);
    printf("Total digits:%d\n",total);
    return 0;
}