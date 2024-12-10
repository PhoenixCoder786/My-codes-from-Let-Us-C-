#include<stdio.h>

int main(){
    int higher_dimension = 1189;
    int lower_dimension = 841;
    int temp = higher_dimension;
    for (int i = 0; i < 9; i++)
    {
        printf("The dimensions of sheet of size A%d is - %dmm X %dmm\n",i,higher_dimension,lower_dimension);
        temp = lower_dimension;
        lower_dimension = higher_dimension;
        higher_dimension = temp;
        lower_dimension/=2;

    }
    
    return 0;
}