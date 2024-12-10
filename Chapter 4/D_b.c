#include<stdio.h>
#include<math.h>
int main(){
    float red,blue,green,cyan,magenta,yellow,black,white;
    printf("Enter the values of RGB(0-255) - \n");
    scanf("%f %f %f",&red,&green,&blue);
    red/=255;
    green/=255;
    blue/=255;
    white = fmax(red,fmax(blue,green));
    if (white==0)
    {
        cyan=magenta=yellow=0;
        black=1;
    }
    else
    {
    cyan = (white-red)/(white);
    magenta = (white-green)/(white);
    yellow = (white-blue)/(white);
    black = 1 - white;
    }
    
    
    printf("CMYK values are -- \n");
    printf("\t-cyan = %.3f\n",cyan);
    printf("\t-magenta = %.3f\n",magenta);
    printf("\t-yellow = %.3f\n",yellow);
    printf("\t-black = %.3f\n",black);
    return 0;
}