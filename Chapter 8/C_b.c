#include<stdio.h>

void primeFactors(int number);

int main(){
    int n;
    printf("Enter a number - \n");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}

void primeFactors(int number){
    int prime_factor;
    printf("Prime Factors are - \n");
    for (int i = 2; i <= number; i)
    {
        if (number%i==0)
        {
            number/=i;
            printf("%d ",i);
        }
        else{
            i++;
        }
        
    }
    
}