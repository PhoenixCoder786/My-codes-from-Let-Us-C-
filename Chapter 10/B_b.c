#include<stdio.h>

int sum(int a){
    if (a==1)
    {
        return 1;
    }
    else 
    return a +sum(a-1);
}

int main(){
    int n;
    printf("Enter a number - \n");
    scanf("%d",&n);
    printf("Sum from 1 to %d is %d\n",n,sum(n));
    return 0;
}