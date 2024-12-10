#include<stdio.h>

int main(){
    int C,D,temp;
    printf("Enter the values of C and D - \n");
    scanf("%d %d",&C,&D);
    temp = C;
    C = D;
    D = temp;
    printf("The numbers after swappping are - %d and %d\n",C,D);
    return 0;
}