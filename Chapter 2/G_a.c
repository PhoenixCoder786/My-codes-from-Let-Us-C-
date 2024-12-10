#include<stdio.h>

int main(){
    long n,sum;
    printf("Enter a five digit number - \n");
    scanf("%ld",&n);
    sum = n/10000 + (n/1000)%10 + (n/100)%10 + (n/10)%10 + n%10;
    printf("The sum of the digits of the five digit number is %ld\n",sum);
    return 0;
}