#include<stdio.h>

int main(){
    int angle1,angle2,angle3,sum;
    printf("Enter the angles of the triangle - \n");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum = angle1 +angle2 +angle3;
    if (sum==180)
    {
        printf("This is a valid triangle.");
    }
    else{
        printf("This is not a valid triangle.");
    }

    return 0;
}