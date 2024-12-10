#include<stdio.h>

int main(){
    float x,i;
    int y;
    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x+=0.5)
        {
            i = 2 + (y + 0.5*x);
            printf("%2d  %5.1f  %8.3f\n",y,x,i);
        }
        printf("\n");
    }
    
    return 0;
}