#include<stdio.h>

int main(){
    int k =1;
    for (int i = 0; i < 4; i++)
    {
        for (int l = 6; l>i; l--)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}