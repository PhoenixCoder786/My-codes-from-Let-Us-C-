#include<stdio.h>
#include<math.h>

double toRadians(double degree){
    return degree*(3.14/180);
}

int main(){
    double L1,L2,G1,G2,D;
    printf("Enter the values of latitude L1 and L2 (in degrees) \n");
    scanf("%lf %lf",&L1,&L2);
    printf("Enter the values of longitude G1 and G2 (in degrees) \n");
    scanf("%lf %lf",&G1,&G1);

    L1 = toRadians(L1);
    L2 = toRadians(L1);
    G1 = toRadians(G1);
    G1 = toRadians(G2);

    D = 3963*acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1));
    printf("The distance between the points is - %lf\n",D);

    return 0;
}