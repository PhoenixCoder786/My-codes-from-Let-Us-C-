#include<stdio.h>
#include<math.h>

int main(){
    float wfc,t,v;
    printf("Enter the temperature and wind velocity - \n");
    scanf("%f %f",&t,&v);
    wfc = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v,0.16);
    printf("The wind chill factor is - %f\n",wfc);
    return 0;
}