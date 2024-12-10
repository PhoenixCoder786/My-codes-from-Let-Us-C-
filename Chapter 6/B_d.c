#include<stdio.h>
#include<math.h>

int main(){
    float x;
    float sum = 0;
    printf("Enter the value of x - \n");
    scanf("%f",&x);
    sum = (x-1)/x;
    for (int i = 0; i < 6; i++)
    {
        sum+=(1.0/2.0*pow(((x-1)/x),i+2));
    }
    printf("Sum = %f",sum);
    return 0;
}