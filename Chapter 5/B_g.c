#include <stdio.h>

int main()
{
    int number, max, min;
    char flag;
    printf("Enter a number - \n");
    scanf("%d", &number);
    max = number;
    min = number;
    while (1)
    {
        if (number<min)
        {
            min = number;
        }
        else if (number>max)
        {
            max = number;
        }
        
        
        printf("Enter c to continue to enter numbers or enter q to quit.\n");
        getchar();
        scanf("%c", &flag);
        if (flag == 'q')
        {
            printf("Quiting...");
            break;
        }
        else if (flag == 'c')
        {
            printf("Enter a number - \n");
            scanf("%d", &number);
            continue;
        }
        else if (flag!='q' && flag!='c')
        {
            printf("Wrong choice! Quiting...");
            break;
        }
    }
    printf("The minimum and maximum numbers from your entered numbers are - %d, %d",min,max);
    return 0;
}