#include<stdio.h>
#include<stdlib.h>

int main(){
    int year,difference,leap_count,shift,modulo;
    printf("Enter a year - \n");
    scanf("%d",&year);
    difference = abs(year-2001);
    leap_count = difference/4;
    shift = (difference - leap_count) + (leap_count)*2;
    modulo = shift%7;
    if (modulo==0)
    {
        printf("Day on 1st Jan %d is Monday.\n",year);
    }
    else if (modulo==1)
    {
        printf("Day on 1st Jan %d is Tuesday.\n",year);
    }
    else if (modulo==2)
    {
        printf("Day on 1st Jan %d is Wednesday.\n",year);
    }
    else if (modulo==3)
    {
        printf("Day on 1st Jan %d is Thursday.\n",year);
    }
    else if (modulo==4)
    {
        printf("Day on 1st Jan %d is Friday.\n",year);
    }
    else if (modulo==5)
    {
        printf("Day on 1st Jan %d is Saturday.\n",year);
    }
    else if (modulo==6)
    {
        printf("Day on 1st Jan %d is Sunday.\n",year);
    }
    
    return 0;
}