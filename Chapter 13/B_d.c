#include <stdio.h>

int main()
{
    int arr[25];
    int smallest = arr[0];
    printf("Enter the elements of array - \n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }
    printf("Smallest in the array is - %d\n",smallest);
    return 0;
}