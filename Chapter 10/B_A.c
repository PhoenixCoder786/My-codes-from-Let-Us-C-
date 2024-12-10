#include<stdio.h>

int integerToBinary(int a);

int main(){
    int n;
    printf("Enter the number - \n");
    scanf("%d",&n);
    integerToBinary(n);
    return 0;
}

int integerToBinary(int a){
    int r;
    r = a%2;
    a/=2;
    if (a==0)
    {
        printf("The Binary equivalent of the number is - %d",r);
        return (r);
    }
    else
        integerToBinary(a);
    printf("%d",r);
}