#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of array - \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array - \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size/2; i++)
    {
        if (arr[i]==arr[size-1-i])
        {
            printf("Element %d and Element %d are same\n",i+1,size-i);
        }
        
    }
    
    
    return 0;
}