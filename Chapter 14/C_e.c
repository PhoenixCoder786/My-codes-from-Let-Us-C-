#include<stdio.h>

int main(){
    int m1[3][3],m2[3][3],count = 0;
    printf("Enter the elements of the Matrix - \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2[i][j] = m1[j][i];
        }
        
    }
    printf("Matrix - \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose - \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m1[i][j]==m2[i][j])
            {
                count++;
            }
            
        }
        
    }
    if (count==9)
    {
        printf("This is a symmetric matrix.\n");
    }
    else
    {
        printf("This is not a symmetric matrix.\n");
    }
    
    
    return 0;
}