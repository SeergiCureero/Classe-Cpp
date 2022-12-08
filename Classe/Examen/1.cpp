#include <iostream>
#include <math.h>
int main(){
    double h,a,b;
    printf("Catet A: ");
    scanf("%lf", &a);
    printf("Catet B: ");
    scanf("%lf", &b);
    h = sqrt((a*a)+(b*b));
    printf("Hipotenusa: %lf", h);
    return 0;
}