#include<stdio.h>
#include<math.h>

int main(){
    int x = 2,y = 5, radius = 20,x1,y1;
    float distance;
    printf("Enter the coordinates of the point - \n");
    scanf("%d %d",&x1,&y1);
    distance = sqrt(pow(x1-x,2) + pow(y1-y,2));
    if (distance==radius)
    {
        printf("The point lies on the cirlce.\n");
    }
    else if (distance<radius)
    {
        printf("The point lies inside the circle.\n");
    }
    else if (distance>radius)
    {
        printf("The point lies outside of the circle.\n");
    }
    
    return 0;
}