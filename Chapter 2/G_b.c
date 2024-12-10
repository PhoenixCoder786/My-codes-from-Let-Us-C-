#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    float r,angle;
    printf("Enter the cartesian coordinates(x,y) - \n");
    scanf("%d %d",&x,&y);

    r = sqrt(x*x+y*y);
    angle = atan(y/x);

    printf("The coordinates in polar form is - (%.2f,%.2f)\n",r,angle);
    return 0;
}