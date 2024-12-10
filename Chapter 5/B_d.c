#include<stdio.h>

int main(){
    int positive_count=0,negative_count=0,zeros=0;
    while (1)
    {
        int number;
        char flag;
        printf("Enter a number - \n");
        scanf("%d",&number);
        if (number>0)
        {
            positive_count++;
        }
        else if (number<0)
        {
            negative_count++;
        }
        else 
        {
            zeros++;
        }
        printf("Enter q to quit or c to continue - \n");
        getchar();
        scanf("%c",&flag);
        if (flag=='q')
        {
            break;
        }
        else if (flag=='c')
        {
            continue;
        }
        else 
        {
            printf("Wrong Choice! Quiting...\n");
            break;
        }
    }
    printf("Numbers you entered -- \n");
    printf("\t - positive = %d\n",positive_count);
    printf("\t - negative = %d\n",negative_count);
    printf("\t - zero = %d\n",zeros);
    return 0;
}