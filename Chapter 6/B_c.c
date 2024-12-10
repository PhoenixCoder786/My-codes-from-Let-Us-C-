#include<stdio.h>
#include<math.h>

int main(){
    float p,q,r,n,a;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter set %d of p, q, r and n -- \n",i+1);
        fflush(stdin);
        scanf("%f %f %f %f",&p,&q,&r,&n);
        a = p * pow((1 + r/q),n*q);
        printf("The amount for the above set of p, q, r and n is %f\n",a);
    }
    
    return 0;
}