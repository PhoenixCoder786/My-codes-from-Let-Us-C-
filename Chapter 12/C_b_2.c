#include<stdio.h>
#define ABSOLUTE(x) (x<0?x*(-1):x)
int main(){
    printf("%d\n",ABSOLUTE(2));
    return 0;
}