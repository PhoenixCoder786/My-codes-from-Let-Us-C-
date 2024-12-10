#include<stdio.h>

int main(){
    int number,original,reversed;
    printf("Enter a 5-digit number - \n");
    scanf("%d",&number);
    original = number;
    reversed = 10000*(number%10) + 1000*((number/10)%10) + 100*((number/100)%10) + 10*((number/1000)%10) + number/10000;
    printf("The reversed number is --  %d\n",reversed);
    if (original==reversed)
    {
        printf("This is a palindrome.\n");
    }
    else
    {
        printf("This is not a palindrome.");
    }
    
    
    return 0;
}