#include<stdio.h>

void leapOrNot(int year);

int main(){
    int year;
    printf("Enter a year - \n");
    scanf("%d",&year);
    leapOrNot(year);
    return 0;
}

void leapOrNot(int year){
    if ((year%4==0 || year%100!=0) && year%400==0)
    {
        printf("This is a leap year.\n");
    }
    else{
        printf("This is not a leap year.\n");
    }
}