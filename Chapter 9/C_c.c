#include <stdio.h>
#include <math.h>

float distance(int, int, int, int);
float areaOfTriangle(int, int, int, int, int, int);
void pointCheck(int, int, int, int, int, int, int, int);

int main()
{
    int x, y, x1, y1, x2, y2, x3, y3;
    printf("Enter the point (x,y) - \n");
    scanf("%d %d", &x, &y);
    printf("Enter the vertices of the traingle A(x1,y1), B(x2,y2) and C(x3,y3) - \n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("The point is - (%d,%d)\n", x, y);
    printf("The vertices of the traingle are - A(%d,%d), B(%d,%d) and C(%d,%d) \n", x1, y1, x2, y2, x3, y3);
    printf("The area of the triangle is - %f\n", areaOfTriangle(x1, y1, x2, y2, x3, y3));
    pointCheck(x, y, x1, y1, x2, y2, x3, y3);
    return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
}

float areaOfTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float s, area, d1, d2, d3;
    d1 = distance(x1, y1, x2, y2);
    d2 = distance(x2, y2, x3, y3);
    d3 = distance(x3, y3, x1, y1);
    s = (d1 + d2 + d3) / 2;
    area = sqrt(s * (s - d1) * (s - d2) * (s - d3));
    return area;
}

void pointCheck(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3){
    float A,A1,A2,A3;
    A = areaOfTriangle(x1, y1, x2, y2, x3, y3);
    A1 = areaOfTriangle(x2, y2, x3, y3, x, y);
    A2 = areaOfTriangle(x3, y3, x1, y1, x, y);
    A3 = areaOfTriangle(x2, y2, x1, y1, x, y);
    if (A == A1+A2+A3)
    {
        printf("The point lies inside the triangle.\n");
    }else
    {
        printf("The point lies outside the traingle.\n");
    }
    
    
}