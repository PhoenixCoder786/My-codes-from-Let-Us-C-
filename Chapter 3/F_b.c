#include<stdio.h>

int main(){
    int ram,shyam,ajay;
    printf("Enter the ages of Ram, Shyam and Ajay - \n");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if (ram<shyam && ram<ajay)
    {
        printf("Ram is the youngest");
    }
    else if (shyam<ram && shyam<ajay)
    {
        printf("Shyam is the youngest");
    }
    else if (ajay<shyam && ajay<ram)
    {
        printf("Ram is the youngest");
    }
    
    return 0;
}