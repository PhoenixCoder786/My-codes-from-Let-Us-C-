#include<stdio.h>
#include<math.h>

int main(){
    float angle;
    printf("Enter the angle - \n");
    scanf("%f",&angle);
    printf("tan(%f) is %.3f\n",angle,tan(angle));
    printf("sin(%f) is %.3f\n",angle,sin(angle));
    printf("cos(%f) is %.3f\n",angle,cos(angle));
    printf("cot(%f) is %.3f\n",angle,1/tan(angle));
    printf("sec(%f) is %.3f\n",angle,1/cos(angle));
    printf("cosec(%f) is %.3f\n",angle,1/sin(angle));
    return 0;
}