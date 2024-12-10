#include<stdio.h>

int rightShift(int*,int*,int*);

int main(){
    int x,y,z;
    printf("Enter the values of x, y and z - \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Before right shift - x = %d  y = %d  z = %d\n",x,y,z);
    rightShift(&x,&y,&z);
    printf("After right shift - x = %d  y = %d  z = %d\n",x,y,z);
    return 0;
}

int rightShift(int* a, int* b, int* c){
    int temp;
    temp  = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}