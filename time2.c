#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter time in(HH:MM:SS):");
    scanf("%d%d%d",&h,&m,&s);
    if(h>=0&&h<24)
        if(m>=0&&m<60)
            if(s>=0&&s<60)
                printf("Valid Time.");
            
            else
                printf("Invalid Seconds.");
        
            
            else 
                printf("Invalid Minutes.");
            

        
            else
                printf("Invalid Hours:");
        
    

     return 0;
}   