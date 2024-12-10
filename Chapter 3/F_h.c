#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the coordinates of the point - \n");
    scanf("%d %d",&x,&y);
    if (x>0 && y>0)
    {
        printf("This doesn't lie on any axis.\n");
    }
    else if (x==0 && y==0)
    {
        printf("This point lies on the origin.\n");
    }
    else if (x==0)
    {
        printf("The point lies on the X-axis.\n");
    }
    else if (y==0)
    {
        printf("The point lies on the Y-axis.\n");
    }
    
    
    return 0;
}