#include <iostream>
#include <math.h>
double Hipotenusa(double a, double b){
    return sqrt((a*a)+(b*b));
}
int main(){
    double a,b;
    printf("Catet A: ");
    scanf("%lf", &a);
    printf("Catet B: ");
    scanf("%lf", &b);
    printf("Hipotenusa: %lf", Hipotenusa(a,b));
    return 0;
}