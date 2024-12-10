#include<stdio.h>

int main(){
    int length,breadth,area,perimeter;
    printf("Enter the length and breadth of the rectangle - \n");
    scanf("%d %d",&length,&breadth);
    area = length*breadth;
    perimeter = 2*(length+breadth);
    if (area>perimeter)
    {
        printf("The area of the rectangle is greater than its perimeter.\n");
    }
    else if (area<perimeter)
    {
        printf("The perimeter of the rectangle is greater than its area.\n");
    }
    
    return 0;
}