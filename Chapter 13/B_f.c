#include <stdio.h>
#include <math.h>
int main()
{
    float sum=0, mean,std=0;
    int arr[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, 2, 11, 10, 9, -10};
    for (int i = 0; i < 15; i++)
    {
        sum+=arr[i];
    }
    mean = sum/15;
    for (int i = 0; i < 15; i++)
    {
        std += sqrt(pow(arr[i]-mean,2))/15;
    }
    printf("Mean = %.2f\n",mean);
    printf("Standard Deviation = %.2f\n",std);
    return 0;
}