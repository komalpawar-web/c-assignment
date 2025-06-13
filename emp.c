#include<stdio.h>
int main()
{
    int eid;
    float bs,totalSalary;
    int hra=10,da=30,tax=5;
    printf("Enter employee id:");
    scanf("%d",&eid);
    printf("\nEnter basic salary:");
    scanf("%f",&bs);
    totalSalary=bs+((bs*(da+hra-tax))/100);
    printf("\nTake home salary=%.2f",totalSalary);
    return 0;
}