#include <stdio.h>
#include <math.h>
float main()
{
    float x[10], y[10];
    printf("Enter the x coordinates\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("Enter the y coordinates\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Distance - %f\n",sqrt(pow(x[i] - x[10 - i - 1], 2) + pow(y[i] - y[10 - i - 1], 2)));
    }

    return 0;
}