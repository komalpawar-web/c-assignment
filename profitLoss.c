#include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter the cost price:");
    scanf("%f",&cp);
    printf("\nEnter the selling price:");
    scanf("%f",&sp);
    
    
    if(sp>cp){
        profit=sp-cp;
        printf("profit=%.2f",profit);
    }
    else if(cp>sp){
    printf("Loss=%.2f",loss);
    loss=cp-sp;
    }
    else{
    printf("\nNo profit No loss.");
    }


    return 0;
}