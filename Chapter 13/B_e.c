#include <stdio.h>

void modify(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        *ptr *= 3;
        ptr++;
    }
}

int main()
{
    int arr[10];
    printf("Enter the elements of array - \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    modify(&arr[0]);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}