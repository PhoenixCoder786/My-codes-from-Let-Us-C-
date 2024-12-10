#include<stdio.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the values of x1, x2 and x3 - \n");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("Enter the values of y1, y2 and x3 - \n");
    scanf("%d %d %d",&y1,&y2,&y3);
    if (((y3-y2)/(x3-x2)) == ((y2-y1)/(x2-x1)))
    {
        printf("These points lie on a straight line.\n");
    }
    else
    {
        printf("These points don't lie on a straight line.\n");
    }
    
    
    
    return 0;
}