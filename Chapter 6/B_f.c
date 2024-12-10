#include<stdio.h>

int main(){
    int total_population = 100000;
    printf("The population in 2024 is %d\n",total_population);
    for (int i = 0; i < 10; i++)
    {
        total_population*=0.9;
        printf("The population in %d is %d\n",2024-i-1,total_population);
    }
    
    return 0;
}