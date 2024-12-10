#include<stdio.h>

float weight_convert(float* weight,float* grams,float*tons,float*pounds);

int main(){
    float weight,grams,tons,pounds;
    printf("Enter your weight - \n");   
    scanf("%f",&weight);
    weight_convert(&weight,&grams,&tons,&pounds);
    printf("Your weight in grams, tons and pounds is %f, %f and %f \n",grams,tons,pounds);
    return 0;
}

float weight_convert(float* weight,float* grams,float*tons,float*pounds){
    *tons = 0.001* (*weight);
    *grams = 1000 * (*weight);
    *pounds = 0.453592 * (*weight);
}