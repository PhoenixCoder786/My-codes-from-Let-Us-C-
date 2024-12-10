#include<stdio.h>

int main(){
    int sum1,sum2;
    printf("Ramanujan numbers under hundred are - \n");
    for (int i = 1; i <= 100; i++)
    {
        for (int j = i+1; j <= 100; j++)
        {
            sum1 = i*i*i + j*j*j;
            for (int k = 1; k <= 100; k++)
            {
                for (int l = k+1; l <= 100; l++)
                {
                    sum2 = k*k*k + l*l*l;
                    if (i!=k && i!=l && j!=k && j!=l && sum1==sum2)
                    {
                        printf("\t--%d, %d : %d, %d\n",i,j,k,l);
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}