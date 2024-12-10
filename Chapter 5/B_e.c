#include<stdio.h>

int main(){
    int number,octal=0,remainder,place=1;
    printf("Enter the number - \n");
    scanf("%d",&number);
    while (number>0)
    {
        remainder = number%8;
        octal = octal + (remainder*place);
        number/=8;
        place*=10;
    }
    printf("The octal of the number is - %d\n",octal);
    return 0;
}