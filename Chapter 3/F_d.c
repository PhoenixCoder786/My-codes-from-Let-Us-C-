#include<stdio.h>

int main(){
    float number,absolute;
    printf("Enter the number - \n");
    scanf("%f",&number);
    absolute = number;
    if (number<0)
    {
        absolute = -number;
    }
    printf("The absolute of %f is %f\n",number,absolute);
    return 0;
}