#include<stdio.h>

int main(){
    printf("The Pythagorean triplets having length less than 30 are -- \n");
    for (int i = 1; i <= 30; i++)
    {
        for (int j = i+1; j <= 30; j++)
        {
            for (int k = j+1; k <= 30; k++)
            {
                if (k*k == j*j + i*i)
                {
                    printf("\t -- %d %d %d\n",i,j,k);
                }
                
            }
            
        }
        
    }
    
    return 0;
}