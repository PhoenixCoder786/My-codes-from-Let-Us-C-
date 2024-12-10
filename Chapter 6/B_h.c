#include<stdio.h>

int main(){
    for (int i = 0; i < 24; i++)
    {
        if (i==0)
        {
            printf("Time -- %d:%d%d Midnight\n",i,0,0);
        }
        
        else if (i<12)
        {
            printf("Time -- %d:%d%d AM \n",i,0,0);
        }
        else if (i==12)
        {
            printf("Time -- %d:%d%d Noon \n",i,0,0);
        }
        else if (i>12)
        {
            printf("Time -- %d:%d%d PM \n",i,0,0);
        }
        
        
    }
    
    return 0;
}