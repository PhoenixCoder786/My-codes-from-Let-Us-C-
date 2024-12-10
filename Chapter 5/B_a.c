#include<stdio.h>

int main(){
    int n =1;
    while (n<=255)
    {
        printf("ASCII value %d is assigned to character %c\n",n,n);
        n++;
    }
    
    return 0;
}