#include<stdio.h>

int main(){
    int a[6][6],b[6][6];
    printf("Enter the elements of matrix 1 - \n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("Enter the elements of matrix 2 - \n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    printf("The addition of the matrices is - \n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}