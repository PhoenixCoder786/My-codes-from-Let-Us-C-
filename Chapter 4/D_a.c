#include<stdio.h>

int main(){
    int s1,s2,s3;
    printf("Enter the lengths of the sides of the triangle - \n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2 || s2==s3 || s3==s1)
    {
        if (s1==s3 && s3==s2)
        {
            printf("This is an equilateral triangle.\n");
        }
        else if (s1!=s3 || s1!=s2)
        {
            printf("This is an isosceles triangle.\n");  
        }
    }
    else if (s1!=s2 && s2!=s3 && s3!=s1)
    {
        printf("This is a scalene triangle.\n");
    }
    if ((s1*s1+s2*s2==s3*s3) || (s3*s3+s2*s2==s1*s1) || (s1*s1+s3*s3==s2*s2))
    {
        printf("This a right-angled triangle.\n");
    }
    
    return 0;
}