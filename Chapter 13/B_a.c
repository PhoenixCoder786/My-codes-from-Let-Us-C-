#include<stdio.h>

int main(){
    int arr[25],positive_count=0,negative_count=0,zero_count=0,even_count=0,odd_count=0;
    printf("Enter the elements of array - \n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (arr[i]>0)
        {
            positive_count++;
        }
        else if (arr[i]<0)
        {
            negative_count++;
        }
        else{
            zero_count++;
        }
        
        if (arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("POsitive numbers - %d\n",positive_count);
    printf("Negative numbers - %d\n",negative_count);
    printf("Even numbers - %d\n",even_count);
    printf("Odd numbers - %d\n",odd_count);
    return 0;
}