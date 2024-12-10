#include<stdio.h>

int main(){
    int length,breadth;
    float radius;
    printf("Enter the length and breadth of the rectangle - \n");
    scanf("%d %d",&length,&breadth);
    printf("Enter the radius of the circle - \n");
    scanf("%f",&radius);
    printf("The area of the rectangle is %d and its perimeter is %d\n",length*breadth,2*(length+breadth));
    printf("The area of the circle is %f and its circumference is %f\n",3.14*radius*radius,2*3.14*radius);
    return 0;
}