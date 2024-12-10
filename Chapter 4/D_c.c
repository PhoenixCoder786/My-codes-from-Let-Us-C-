#include<stdio.h>

int main(){
    int hardness,tensile_strength;
    float carbon_content;
    printf("Enter the values of hardness, carbon content and tensile strength of steel.\n");
    scanf("%d %f %d",&hardness,&carbon_content,&tensile_strength);
    if (hardness>50)
    {
        if (carbon_content<0.7 && tensile_strength>5600)
        {
            printf("The grade of the steel is 10.\n");
        }
        else if (carbon_content<0.7 && tensile_strength<=5600)
        {
            printf("The grade of the steel is 9.\n");
        }
        else if (carbon_content>0.7 && tensile_strength>5600)
        {
            printf("The grade of the steel is 7.\n");
        }
        else
        {
            printf("The grade of the steel is 6.\n");
        }
        
    }
    else if (carbon_content<0.7 && tensile_strength>5600 && hardness<50)
    {
        printf("The grade of the steel is 8.\n");
    }
    else if (carbon_content<0.7 || tensile_strength>5600)
    {
        printf("The grade of the steel is 6.\n");
    }
    else
    {
        printf("The grade of the steel is 5.\n");
    }
    
    
    
    
    return 0;
}