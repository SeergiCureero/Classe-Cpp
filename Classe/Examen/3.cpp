#include <iostream>
#include <math.h>
double Catet(double h, double a){
    return sqrt((h*h)-(a*a));
}
int main(){
    double h,a;
    printf("Hipotenusa: ");
    scanf("%lf", &h);
    printf("Catet A: ");
    scanf("%lf", &a);
    printf("Catet B: %lf", Catet(h,a));
    return 0;
}